export default function media(listaNumeros = [1,2,3,4,5,6,7,8,9,10]) {
    let soma = 0
    for(let i = 0; i < listaNumeros.length; i++){
        soma += listaNumeros[i]
    }
    return media(listaNumeros.length);
}

