function somatório(z,m,callback){
    let final_soma = z+m
    callback(final_soma);
}
function multiplicação(z,m,callback){
    let final_produto = z*m
    callback(final_produto);
}

function resultadoFinal(resultado){
    console.log(resultado)
}
let valorZ = 4
let valorM = 6

somatório(valorZ,valorM,resultadoFinal)
multiplicação(valorZ,valorM,resultadoFinal)