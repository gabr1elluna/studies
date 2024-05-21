let operacao = parseInt(prompt("Qual operação matemática gostaria de selecionar?(1 - ADIÇÃO | 2 - SUBTRAÇÃO | 3 - MULTIPLICAÇÃO | 4 - DIVISÃO):"))

switch(operacao){
    case 1:
        if(operacao == 1){
        console.log(`FOI ESCOLHIDO A OPERAÇÃO MATEMÁTICA ADIÇÃO!`);
        let num1 = parseInt(prompt("Escolha um valor para A:"));
        let num2 = parseInt(prompt("Escolha um valor para B:"));

    console.log(`A adição entre os valores de A e B vale ${num1 + num2}`)
        }
        break;
    case 2:
        if(operacao == 2){
        console.log(`FOI ESCOLHIDO A OPERAÇÃO MATEMÁTICA SUBTRAÇÃO!`);
        let num1 = parseInt(prompt("Escolha um valor para A:"));
        let num2 = parseInt(prompt("Escolha um valor para B:"));

    console.log(`A subtração entre os valores de A e B vale ${num1 - num2}`)
        }
        break;
    case 3:
        if(operacao == 3){
        console.log(`FOI ESCOLHIDO A OPERAÇÃO MATEMÁTICA MULTIPLICAÇÃO!`);
        let num1 = parseInt(prompt("Escolha um valor para A:"));
        let num2 = parseInt(prompt("Escolha um valor para B:"));
        
        console.log(`A multiplicação entre os valores de A e B vale ${num1 * num2}`)
        }
        break;
    case 4:
        if(operacao == 4){
            console.log(`FOI ESCOLHIDO A OPERAÇÃO MATEMÁTICA DIVISÃO!`);
            let num1 = parseInt(prompt("Escolha um valor para A:"));
            let num2 = parseInt(prompt("Escolha um valor para B:"));
            
            console.log(`A divisão entre os valores de A e B vale ${num1 / num2}`)
            break;
        }
    default:
        console.log(`CÓDIGO INVÁLIDO. TENTE NOVAMENTE.`)
}