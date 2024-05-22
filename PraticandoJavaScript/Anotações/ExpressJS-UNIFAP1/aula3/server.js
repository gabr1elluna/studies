const express = require("express");
const app = express();

app.use(express.json());

const PORT = 8080;
const usuarios = [];

app.get('/', (req, res)=>{
    res.json({Usuarios: usuarios});

})

app.post('/usuarios', (req, res)=> {
    const usuario = req.body
    
    let msg = ""
    if (usuario.idade < 18){
        msg = "(Usuario cadastrado com sucesso como Menor de Idade.)"
    }else if (usuario.idade >= 18){
        msg = "(Usuario cadastrado com sucesso como Maior de Idade.)"
    }


    usuarios.push(usuario)
    res.json({Mensagem: msg , Usuarios: usuarios})
})

app.listen(PORT, () => {
    console.log(`Rodando na porta ... ${PORT}`);
})

//Recurso utilizado para testar o código: Insomnia