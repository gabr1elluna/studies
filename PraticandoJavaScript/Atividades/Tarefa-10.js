let senha_valida = 1234
let senha_user = parseInt(prompt("Insira a senha:"));

if(senha_user != senha_valida){
    console.log(`ACESSO NEGADO. SENHA INCORRETA.`);
}else if(senha_user == senha_valida){
    console.log(`ACESSO PERMITIDO`);
}


