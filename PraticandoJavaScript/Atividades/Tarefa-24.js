let ListaNomes = {
    nomes : {
        amigo1:"Adam",
        amigo2:"Waldomiro",
        amigo3:"Bruno",
    }
}
console.log(ListaNomes.nomes)
let nome_var = Object.values(ListaNomes.nomes)
let nome_maior = nome_var[0]
let nome_tamanho = Object.keys(ListaNomes.nomes).length

for(let i = 0; i < nome_tamanho; i++){
    if(nome_var[i].length >= nome_maior.length){
        nome_maior = nome_var[i]
    }
}
console.log(`O maior nome da lista de nomes apresentada é ${nome_maior}`)