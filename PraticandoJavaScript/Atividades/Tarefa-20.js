let IMPAR = []
let PAR = []
let numeros = [1,2,3,4,5,6,7,8,9,10]

console.log(numeros)
for (let i = 0; i < numeros.length; i++){
    if (numeros[i] % 2 === 0){
        console.log(`PAR`)
        PAR.push(numeros[i])
    }else{
        console.log(`IMPAR`)
        IMPAR.push(numeros[i])
    }
}

console.log(`NÚMEROS PARES: [${PAR}]\nNÚMEROS ÍMPARES: [${IMPAR}]`)