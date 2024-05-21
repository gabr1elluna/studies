let numeros = [6,9,4,2,0];
let num_menor = numeros[0]
for(let i = 1; i < numeros.length; i++){
    if(numeros[i] < num_menor){
        num_menor = numeros[i];
    }
}
console.log(`\n${numeros}\n`)
console.log(`\nO menor número da lista apresentada é ${num_menor}\n `)