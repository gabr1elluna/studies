let massa = parseFloat(prompt("Insira sua massa:"));
let altura = parseFloat(prompt("Insira sua altura:"));
let IMC = massa/(altura**2)

if(IMC < 18.5){
    console.log("MAGREZA")
}else if (IMC >= 18.5 && IMC < 25){
    console.log("NORMAL")
}else if (IMC >= 25 && IMC < 30){
    console.log("SOBREPESO")
}else if (IMC >= 30 && IMC < 40){
    console.log("OBESIDADE")
}else{
    console.log("OBESIDADE GRAVE")
}

console.log (IMC.toFixed(2))

