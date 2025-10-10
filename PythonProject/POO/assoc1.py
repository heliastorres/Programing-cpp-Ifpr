#Exemplo dois de Associação -- >
class Pessoa:
    def __init__ (self, nomedapessoa):
        self.nomedapessoa = nomedapessoa

class Dog:
    def __init__ (self, nomedodog, raca):
        self.nomedodog = nomedodog
        self.raca = raca
        self.dono = None

    def definir_dono (self, asd):
        self.dono = asd

p1 = Pessoa('caio')
d1 = Dog('dodge', 'pitbull')
d1.definir_dono(p1)
print(f'O {d1.dono.nomedapessoa} que tem um dog em que sua raça é {d1.raca} e seu nome é {d1.nomedodog}')