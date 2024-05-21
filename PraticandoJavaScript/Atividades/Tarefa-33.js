async function obterInfo(objeto,callback){
    try{
        await new Promise(resolve => setTimeout(resolve,500));
        callback(objeto);
    }catch(error){
        console.error(`Houve um erro na obtenção das informações: ${error}`);
    }
}

function info(usuario){
    console.log('ID:',usuario.id)
    console.log('Nome:',usuario.nome)
    console.log('E-mail:',usuario.email)
}
const usuário = {
    id: 1,
    nome: 'Marcos',
    email: 'marcos@mail.com'
}
info(usuário,info)