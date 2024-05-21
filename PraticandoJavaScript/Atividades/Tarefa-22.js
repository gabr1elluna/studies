let ListaDeCompras = {
    produtos: {
    'miojo':4.75,
    'energético':11.90,
    'shampoo 31 em 1':68.90,
    }
}

let valor_total = Object.values(ListaDeCompras.produtos)
let soma_valor_total = 0

for(let i = 0; i < valor_total.length; i++){
    soma_valor_total += valor_total[i];
}

console.log(`VALOR TOTAL DA COMPRA: ${soma_valor_total}`);