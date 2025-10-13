"""
Interpolação Básica de Strings:
s - string
d e i - int
f - float
x e X - hexadecimal (ABCDEF0123456789)
"""

nome = 'Helias'
salario = 35989.87688
print('Seu nome é %s e você ganha R$%.2f' % (nome, salario))
print('O hexadecimal de %i é %04x' % (1500,1500))
print(20*'-')
# Ou utilizando f-strings ficaria assim:
print(f"O hexadecimal de 1500 é {1500:04x}") # Com formatação para exibir quatro casas