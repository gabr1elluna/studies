let somaQuadradoPares = function(g){
    let soma = 0
    for(let i = 0; i < g.length; i++){
        soma+=g[i]**2
    }
    return soma;
}
let arrayComNumeros = [2,3,4,5,6]
console.log(arrayComNumeros)
console.log(`A soma dos quadrados dos números apresentados vale: ${somaQuadradoPares(arrayComNumeros)}`)