class Carro:
    def __init__ (self, odometro, trocaOleo = False):
        self.odometro = odometro
        self.trocaOleo = trocaOleo

    def setOdometro (self, novoOdometro): #Criamos uma outra função para atualizar o valor do odometro do nosso carro;
        self.odometro = novoOdometro      #Usando o mesmo atributo self.odometro;

    def manutencao (self):
        if self.odometro >= 5000: self.trocaOleo = True            
        else: self.trocaOleo = False
        print(self.trocaOleo)
    
    def __str__ (self):
        return f"O Carro com {self.odometro}km rodados | Manuntenção: {self.trocaOleo}"
        

ferrari = Carro(1200)
ferrari.setOdometro(3300)
print(ferrari)

gtr = Carro(0)
gtr.setOdometro(7800)
print(gtr)