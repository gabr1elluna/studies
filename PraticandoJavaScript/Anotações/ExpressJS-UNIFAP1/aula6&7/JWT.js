const {sign, verify} = require("jsonwebtoken");

const createTokens = (usuario) => {
    const accessToken = sign({nome: usuario.nome, id: usuario.id},
        "jwtsecret"
        )

    return accessToken;
}

const validateToken = (req, res, next) => {
    const accessToken = req.cookies["access-token"]
    if(!accessToken) return res.status(404).json("Algo deu errado");
    try {
        const validToken = verify(accessToken, "jwtsecret");
        if(validToken){
            req.authenticated = true;
            return next();
        }
    } catch(err){
        return res.status(404).json("Erro")
    }
}

module.exports = {createTokens, validateToken}