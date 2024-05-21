let valores = parseInt(prompt("Insira a quantidade desejada de valores inteiros a serem utilizadas:"));
let soma = 0;
let media;
let numero;

for (let i = 1; i < valores + 1; i++){
    numero = parseInt(prompt(`Insira um número inteiro qualquer (${i}):`))
    soma += numero;
}

media = soma / valores;

console.log(`Soma:${soma}\nMédia:${media}`)