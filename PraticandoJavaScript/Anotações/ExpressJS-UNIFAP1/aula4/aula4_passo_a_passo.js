//Passo a passo para adicionar e utilizar a ferramenta Prisma no VSCode(Buscar por Prisma Schema para mais informações)
//Passo 1: npm init
//Passo 2: npm i express
//Passo 3: npm install prisma --save-dev
//Passo 4: npx prisma init --datasource-provider sqlite
/*Passo 5: Criar Modelo em schema.prisma
Exemplo utilizado abaixo:
model User{
  id Int @id @default (autoincrement())
  email String @unique
  nome String?
}*/
//Passo 6: npx prisma migrate dev --name init
//Passo 7: Veja o código da aula4.js
/*Passo 8: Adicionar no package.json, na sessão "scripts" o seguinte código:
"dev": "node --watch aula4.js",*/
//Passo 9: Execute o comando "npm run dev" no terminal (sem as aspas)
/*Passo 10: Abrir o Insomnia (ferramenta vista na aula 3),criar um HTTP Request e testar o código pelo URL http://localhost:8080/post e colocar na aba JSON (deixar na opção POST) o código pedido, no caso dessa aula, foi esse código a seguir:
{
  "email": "nomeparaoemail@gmail.com",
  "nome": "NomeUser"
}
OBS: Tenha em mente que por conta do @unique, não há como criar um mesmo email, logo, cada email será diferente, isso não se aplica ao nome do usuário*/
//Passo 11: Após adicionar um app.get no algoritmo da aula4.js, novamente entrar no Insomnia, criar outro HTTP Request, dessa vez deixar na opção GET, e copiar o URL http://localhost:8080/get e enviar para testar
//Passo 12: Após adicionar uma constante para o algoritmo reconhecer um usuário já existente no algoritmo da aula4.js, novamente entrar no Insomnia e testar o código agora atualizado