let idade_votacao = parseInt(prompt("Insira sua idade:"));

if(idade_votacao < 16){
    console.log(`Você não está apto para votar este ano.`);
}else if(idade_votacao >= 16 && idade_votacao < 18){
    console.log(`Você está apto para votar este ano, porém, no seu caso, é apenas opcional.`);
}else if(idade_votacao>=18){
    console.log(`Você está apto para votar este ano, porém, no seu caso, é obrigatório.`);
}