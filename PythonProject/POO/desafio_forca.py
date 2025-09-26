import random

class Palavra:                                   
    def __init__(self, palavra): 
        self.palavra = palavra
        self.letras_acertadas = []

    def verificar_letra(self, letra): #retorna True or False
        letra = letra.upper()
        if letra in self.palavra and letra not in self.letras_acertadas:
                self.letras_acertadas.append(letra)
                return True
        return False

    def mostrar(self): #(printa letras acertadas e underline)
        return ''.join([letra if letra in self.letras_acertadas else '*' for letra in self.palavra])
    
    def completa(self):
        return all(letra in self.letras_acertadas for letra in self.palavra)

     
class Jogo:
    def __init__(self): 
        palavras = ['macaco', 'gorila', 'jefferson']       
        self.palavra = Palavra(random.choice(palavras))
        self.tentativas = 6

    def jogar(self): #Lê a letra inserida e verifica se está correta
        print("Jogo da Forca")

        while self.tentativas > 0:
            print(f"Palavra: {self.palavra.mostrar()}")
            print(f"Tentativas: {self.tentativas}")

            letra = input("Letra: ").lower()

            if self.palavra.verificar_letra(letra):
                print("Correto!")
            else: print("Errado!")
            self.tentativas -= 1

            if self.palavra.completa():
                print(f"Você Venceu!")
                return
        print(f"Você perdeu! a palavra era {self.palavra.palavra}")

forca = Jogo()
forca.jogar()