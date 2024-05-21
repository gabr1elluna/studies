const express = require("express");
const {PrismaClient} = require("@prisma/client")
const cookieParser = require("cookie-parser");
const bcrypt = require("bcrypt");
const { createTokens, validateToken } = require("./JWT");

const app = express()

app.use(express.json());
const prisma = new PrismaClient();
app.use(cookieParser());

app.post("/registrar", async (req, res) => {
    const {nome, senha} = req.body;
    await bcrypt.hash(senha, 10).then((hash) => {
        prisma.usuario.create({
            data: {
                nome,
                senha: hash
            }
        }).then(() => {
            res.json("Usuario criado");
        }).catch((err) => {
            res.json({err: "Algo deu errado"});
        })
    })
})

app.post("/login", async (req, res) => {
    const {nome, senha} = req.body;
    const usuario = await prisma.usuario.findFirst({
        where: { nome }
    })
    if(!usuario){
        res.status(404).json({error: "Usuario não existe"})
    }
    const pSenha = usuario.senha;
    bcrypt.compare(senha, pSenha).then((match) => {
        if(!match){
            res.json({error: "Senha incorreta"})
        }else{
            const accessToken = createTokens(usuario);
            res.cookie("access-token", accessToken, {
                httpOnly: false
            })
            res.json("Logged in");
        }
    })
})

app.get("/perfil", validateToken , (req, res) => {
    res.json("Entrou no perfil");
})

app.listen(8080, () => {
    console.log(`ta funcionando paezao`)
})