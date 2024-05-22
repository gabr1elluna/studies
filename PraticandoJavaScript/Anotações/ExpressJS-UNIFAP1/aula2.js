//export = criar mais de um módulo (mais de uma função) | export default = criar apenas 1 módulo (uma função apenas)

//Exemplo de export:
export function soma(a,b) {         
    return a + b;
}

//Exemplo de export default:
export default function soma(a,b) {
    return a + b;
}

//import = utilizado para importar funções, classes, variáveis ou objetos de um módulo
import {nomeFunção, nomeClasse, nomeVariavel} from './caminho/do/modulo.js'

//Exemplo abaixo:
import {soma} from './caminho/soma.js'