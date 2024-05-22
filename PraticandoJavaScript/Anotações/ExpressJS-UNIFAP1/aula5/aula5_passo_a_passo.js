/*
Passo 1: Criar pasta com nome 'src'.
Passo 2: Utilizar o comando 'npm init -y' no terminal, seguido dos seguintes códigos = 'npm i express' (Para instalar o Express); 'npm install prisma --save-dev' (Para instalar o Prisma Schema); 'npx prisma init --datasource-provider sqlite'; 'npx prisma migrate dev --name init'.
Passo 3: Criar, dentro da pasta 'src', um arquivo 'server.js' e uma pasta chamada 'Controllers' com um arquivo chamado 'routes.js' dentro dele.
Passo 4: Olhe o algoritmo do arquivo 'server.js'.
Passo 5: Olhe o algoritmo do arquivo 'routes.js'.
Passo 6: Dentro da pasta 'Controllers', crie outro arquivo, no nosso caso foi criado o 'UsuarioController.js', e veja o código anotado neste arquivo.
Passo 7: Depois disso, foi adicionado no 'routes.js' o comando 'router.post("/criarUsuario", UsuarioController.criarUsuario);'
Passo 8: Abra o Insomnia para testar se o código está funcionando corretamente.
*/