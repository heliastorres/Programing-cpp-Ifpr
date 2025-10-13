class Pedido:
    def __init__(self, numero, cliente, endereco, valor):
        self.numero = numero
        self.cliente = cliente
        self.endereco = endereco
        self.valor = valor
        self.status = "Pendente"

class Entregador:
    def __init__(self, nome, telefone, veiculo):
        self.nome = nome
        self.telefone = telefone
        self.veiculo = veiculo
        self.pedidos = []

class SistemaEntregas:
    def __init__(self):
        self.pedidos = []
        self.entregadores = []

    def adicionar_pedido(self, pedido: Pedido):
        if len([p for p in self.pedidos if p.status != 'Entregue']) > 3:
            print("O entregador não pode ter mais de 3 pedidos.")
            return False
        self.pedidos.append(pedido)
        print(f"Pedido {pedido.numero} adicionado com sucesso!")
        return True

    def listar_pedidos_pendentes(self):
        pendentes = [p for p in self.pedidos if p.status == 'Pendente']
        if not pendentes:
            print("Nenhum pedido pendente.")
        else:
            print("\n=== PEDIDOS PENDENTES ===")
            for p in pendentes:
                print(f"Número: {p.numero} | Cliente: {p.cliente} | Endereço: {p.endereco}")

    def atribuir_pedido(self, entregador: Entregador):
        for pedido in self.pedidos:
            if pedido.status == 'Pendente':
                pedido.status = 'Saiu para entrega'
                entregador.pedidos.append(pedido)
                self.entregadores.append(entregador)
                print(f"Pedido {pedido.numero} atribuído ao entregador {entregador.nome}")
                return True
        print("Não há pedidos pendentes para atribuir.")
        return False

    def finalizar_entrega(self, numero_pedido):
        for pedido in self.pedidos:
            if pedido.numero == numero_pedido:
                if pedido.status == 'Saiu para entrega':
                    pedido.status = 'Entregue'
                    print(f"Pedido {pedido.numero} foi finalizado como entregue.")
                    return True
                else:
                    print("O pedido não está em rota de entrega ou já foi entregue.")
                    return False
        print("Pedido não encontrado.")
        return False

def menu():
    sistema = SistemaEntregas()
    op = 0
    while op != 5:
        print("\n=== SISTEMA DE ENTREGAS ===")
        print("1. Adicionar pedido")
        print("2. Listar pedidos pendentes")
        print("3. Atribuir pedido a entregador")
        print("4. Finalizar entrega")
        print("5. Sair")

        try:
            op = int(input("Digite: "))
        except ValueError:
            print("Opção inválida! Digite um número de 1 a 5.")
            continue

        if op == 1:
            numero = input("Digite o número do pedido: ")
            cliente = input("Digite o nome do cliente: ")
            endereco = input("Digite o endereço de entrega: ")
            valor = float(input("Digite o valor do pedido: "))
            sistema.adicionar_pedido(Pedido(numero, cliente, endereco, valor))
        elif op == 2:
            sistema.listar_pedidos_pendentes()
        elif op == 3:
            nome = input("Digite o nome do entregador: ")
            telefone = input("Digite o telefone do entregador: ")
            veiculo = input("Digite o veículo do entregador: ")
            entregador = Entregador(nome, telefone, veiculo)
            sistema.atribuir_pedido(entregador)
        elif op == 4:
            numero = input("Digite o número do pedido para finalização: ")
            sistema.finalizar_entrega(numero)
        elif op == 5:
            print("Encerrando o sistema...")
        else:
            print("Opção inválida.")

menu()