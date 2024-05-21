let permissao = parseInt(prompt("Insira o código do seu usuário (1 - COMUM | 2 - GERENTE | 3 - DIRETOR):"))

switch(permissao){
    case 1:
        if(permissao == 1){
        console.log(`Permissão do Usuário: COMUM`);
        }
        break;
    case 2:
        if(permissao == 2){
        console.log(`Permissão do Usúario: GERENTE`);
        }
        break;
    case 3:
        if(permissao == 3){
        console.log(`Permissão do Usuário: DIRETOR`);
        }
        break;
    default:
        console.log(`CÓDIGO INVÁLIDO. TENTE NOVAMENTE.`)
}