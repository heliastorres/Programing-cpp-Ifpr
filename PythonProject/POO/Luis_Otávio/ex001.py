# O programa só encerra quando você acertar a palavra digitada.

palavra = input("Digite uma palavra: ")
encontrar = input("Digite o que quer encontrar: ")

while encontrar != palavra:
    if encontrar in palavra:
            print(f"{encontrar} está em {palavra}")
    else:   print(f"{encontrar} não está em {palavra}")
    encontrar = input("Digite o que quer encontrar: ")