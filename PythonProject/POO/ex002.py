'''
A classe carro terá o atributo odometro e o atributo trocaOleo, inicializados como False.
Sempre que o método setOdometro for invocado, verificar se é o momento de trocar o óleo.
'''
class Carro:
    def __init__  (self, odometro):
        self.odometro = odometro
        self.trocaOleo = False
        self.ultimaTroca = odometro

    def setOdometro(self, km):
        if km - self.ultimaTroca >= 5000:
            self.settrocaOleo(True)
            self.setultimaTroca(True)
        self.odometro = km

    def settrocaOleo(self, status):
        self.trocaOleo = status
    def setUltimatroca(self, km):
        self.ultimaTroca = km

c1 = Carro(23000)
print(c1.trocaOleo) #False
c1.setOdometro(8000)
print(c1.trocaOleo) #