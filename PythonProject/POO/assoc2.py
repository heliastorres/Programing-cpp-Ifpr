# Exemplo de Associação --> 
# Definição: Relação de dois objetos, mas que ambos são independentes.
# Obs: O objeto jogador1 não depende de time para existir.

class Casa:
    def __init__ (self, endereco):
        self.endereco = endereco
        self.dono = None

    def definir_dono(self, pessoa):
        self.dono = pessoa

class Pessoa:
    def __init__ (self, nome):
        self.nome = nome

casa1 = Casa('Rua das Seringueiras, 30')
pessoa1 = Pessoa("Arisvaldo")

casa1.definir_dono(pessoa1)

print(f'A casa do endereço {casa1.endereco} tem como dono o {casa1.dono.nome}')