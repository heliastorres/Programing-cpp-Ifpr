class Pessoa:
    def __init__(self, nome, idade, endereco):
        self.nome = nome
        self.idade = idade
        self.endereco = endereco

    def __del__ (self):
        del self.endereco

class Endereco(self, rua, cidade, estado):
    self.rua = rua
    self.cidade = cidade
    self.estado = estado

p1 = Pessoa('Caio', 19, 'endereço')
e1 = Endereco('Rua A', 'Olinda', 'Pernambuco')
print(p1.endereco)
print(e1.rua)
del p1