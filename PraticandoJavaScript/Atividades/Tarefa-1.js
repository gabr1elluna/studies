var nome = prompt("Insira seu nome:");
var idade = prompt("Insira sua idade: ");
var estadoCivil = prompt("Qual seu estado civil?(1 para Casado | 2 para Solteiro):");
if(estadoCivil == 1){
    estadoCivil = 'Casado';
}else if(estadoCivil == 2){
    estadoCivil = 'Solteiro'
}
console.log("Nome do Usuário: "+ nome);
console.log("Idade do Usuário: "+ idade);
console.log("Estado Civil do Usuário: "+estadoCivil)