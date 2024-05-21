const carros = {
    marcas: ["Fiat","Chevrolet","Ford","Volksvagem"]
}
console.log(carros.marcas)
let tamanho_marcas = Object.keys(carros.marcas).length
let marca = carros.marcas
let letraF
let marcasComLetraF = []

for(let i = 0; i < tamanho_marcas; i++){
    letraF = marca[i].slice()[0]
    if(letraF == "f" || letraF == "F"){
        marcasComLetraF.push(marca[i])
    }
}
console.log(`Marcas que possuem F como primeira letra do nome: ${marcasComLetraF}`)