'''
Exercicio:
Faça um programa que pergunte a idade, o peso e a altura de uma pessoa e decide se ela está apta a ser do exercito
Para entrar no exercito é preciso ter mais de 18 anos
Pesar mais ou igual a 60kg
E medir mais ou igual a 1.70m
'''

idade = input('Qual a sua idade?\n')
peso = input('Qual o seu peso, em kilogramas?\n')
altura = input('Qual a sua altura, em metros?\n')
apto = idade >= '18' and peso >= '60' and altura >= '1.70' or altura >= '1.7'

if idade >= '18':
    print('Você tem a idade mínima para ingressar no exército.')
elif idade < '18':
    print('Você não possui a idade mínima para ingressar no exército')

if peso >= '60':
    print('Você possui o peso mínimo para ingressar no exército')
elif peso < '60':
    print('Você não possui o peso mínimo para ingressar no exército')

if altura >= '1.70' or altura >= '1.7':
    print('Você possui a altura mínima para ingressar no exército')
elif altura < '1.70':
    print('Você não possui altura mínima para ingressar no exército')

if apto == True:
    print('Parabéns! Você está apto para ingressar no exército.')
else:
    print('Sinto muito, mas você não está apto para ingressar no exército no momento.')