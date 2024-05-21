let tarefa = function somaGeral(w){
    let soma = 0
    for(let i = 0; i < w.length;i++){
        soma+=w[i]
    }
    return soma;
}
let numeros = [42,5,23,76,8]
console.log(numeros)
console.log(`A soma geral dos valores apresentados é: ${tarefa(numeros)}`)