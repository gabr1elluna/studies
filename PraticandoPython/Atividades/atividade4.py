'''
Exercicio: Faça um programa que leia a quantidade de pessoas que serão convidadas para uma festa.
Após isso o programa irá perguntar o nome de todas as pessoas e colocar numa lista de convidados
Após isso irá imprimir todos os nomes da lista
'''

qntd_convidados = int(input('Quantas pessoas serão convidadas para a festa? '))
lista = []
i = 0

while i < qntd_convidados:
    lista.append(input('Qual o nome do convidado? '))
    i += 1

print(f'Os convidados são: {lista}')
