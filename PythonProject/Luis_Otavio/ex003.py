# try and except em python

numero = input("Digite um número: ")

try: 
    numero_float = float(numero)
    print(f"Número digitado: {numero}")
    print(f"O dobro de {numero} é {numero_float*2}")
except:
    print("Isso não é um número!")