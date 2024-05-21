const livros = {
    'O Homem de Giz': 100,
    'O que aconteceu com Annie': 75,
    'Harry Potter': 0,
}
console.log(livros)
for(let [livro,notas] of Object.entries(livros)){
    if(notas === 0){
        console.log(`O livro ${livro} é o que está com valor zerado`);
    }
}