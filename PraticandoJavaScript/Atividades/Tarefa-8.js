let num1 = parseInt(prompt("Insira um número inteiro qualquer:"));
let num2 = parseInt(prompt("Insira outro número inteiro qualquer:"));

if (num1>num2){
    console.log(`O maior número vale ${num1}`);
}else{
    console.log(`O maior número vale ${num2}`);
}
if (num2<num1){
    console.log(`O menor número vale ${num2}`);
}else{
    console.log(`O menor número vale ${num1}`);
}