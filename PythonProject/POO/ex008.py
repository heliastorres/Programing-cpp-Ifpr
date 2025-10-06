class Jogador:
    def __init__ (self, nome):
        self.nome = nome   

class Time:
    def __init__(self, nomeTime): # Agregação: o time tem jogadores, mas eles existem independetemente.
        self.nomeTime = nomeTime
        self.jogadores = []

    def agregar(self, jogador):
        self.jogadores.append(jogador)

    def lista_jogadores(self):
        for j in self.jogadores:
            print(j.nome)

j1 = Jogador('Neymar')
j2 = Jogador("Messi")
t = Time("Real Madrid")
t.agregar(j1)
t.agregar(j2)
t.lista_jogadores()