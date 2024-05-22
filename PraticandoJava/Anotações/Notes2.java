/*Tipos de dados primitivos do Java:
Não são todos, mas alguns dos principais.

- boolean
- byte
- int
- long (deve possuir um 'L' no fim)
- char (dentro de aspas simples)
- float
- double
*/

//Casting:
long a = 12000L;
int b = (int) a; //Conversão de tipos de dados

//Promoção:
long a = 10L;
int b = 10;
int c = a + b; //Vai dar erro!

long a = 10L;
int b = 10;
long c = a + b; //Vai dar certo!

/*Os arquivos Java possuem 3 classificações:

- public
- private
- protected
*/