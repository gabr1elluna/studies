let nomedaora = function (y){
    let eiru = []
    for(let i = 0; i < y.length;i++){
        if(y[i].length > 5){
            eiru.push(y[i])
        }
    }
    return eiru;
}
let palavras = ['cansei','de','tentar','comprar','pão']
console.log(palavras)
console.log(`Palavra(s) com mais de 5 caracteres: ${nomedaora(palavras)}`)