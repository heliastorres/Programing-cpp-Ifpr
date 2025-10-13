class Pedido: # Pendente, Saiu para entrega, Entregue
    def __init__ (self, numero, cliente, endereco, valor, status):
        self.numero = numero
        self.cliente = cliente
        self.endereco = endereco
        self.valor = valor
        self.status = "Pendente"

class Entregador:
    def __init__ (self, nome, telefone, veiculo, pedidos):
        self.nome = nome
        self.telefone = telefone
        self.veiculo = veiculo
        self.pedidos = []

class Sistema_Entregas:
    def __init__ (self, pedidos, entregadores):
        self.pedidos = []
        self.entregadores = []

def menu(): 
    op = 0
    while op != 5:
        print("\n=== SISTEMA DE ENTREGAS ===")
        print("1. Adicionar pedido")
        print("2. Listar pedidos pendentes")
        print("3. Atribuir pedido a entregador")
        print("4. Finalizar entrega")
        print("5. Sair")
        op = int(input("digite: "))
        if op == 1:
            print("apertou 1")
    
     

menu()

