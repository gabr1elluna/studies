'''
Exercício: Faça um formulario que pergunte o nome, cpf, endereço, idade, altura e telefone e imprima isso em um relatório organizado
'''

nome = input('Qual o seu nome?\n')
cpf = input('Informe seu CPF abaixo\n')
endereco = input('Qual seu endereço atual?\n')
idade = input('Qual a sua idade?\n')
altura = input('Informe sua altura em metros abaixo\n')
telefone_contato = input('Por fim, informe um número de telefone para contato abaixo\n')

print(f'As seguintes informações foram registradas:\nO nome cadastrado foi {nome}\nDe CPF {cpf}\nCom endereço sendo {endereco}\nA idade cadastrada foi de {idade} anos\nA altura cadastrada foi de {altura} metros\nPor fim, o número para contato foi {telefone_contato}\n\n')
