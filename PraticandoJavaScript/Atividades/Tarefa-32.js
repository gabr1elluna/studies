function original(a,callback){
    let array2 = [];
    for(let i = 0; i < a.length; i++){
        array2.push(callback(a[i]))
    }
    return array2;
}
function multiplicadoPor2(numero){
    return numero * 2;
}

let arrayComNumeros = [4,23,54,1,7]
let valor_final = original(arrayComNumeros,multiplicadoPor2);
console.log(arrayComNumeros)
console.log(valor_final)