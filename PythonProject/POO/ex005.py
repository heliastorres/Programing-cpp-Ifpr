class Pessoa:
    def __init__ (self, nome):
        self.nome = nome

    def setNome(self, novoNome):
        self.nome = novoNome

    def getNome(self):
        print(self.nome)

p1 = Pessoa("João")
p1.getNome ()
p1.setNome("José")
p1.getNome()