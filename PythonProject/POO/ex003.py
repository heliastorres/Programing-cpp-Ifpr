class Carro:
    def __init__(self, odometro, marca, modelo, cor):
        self.odometro = odometro
        self.marca = marca
        self.modelo = modelo
        self.cor = cor

    def getOdometro(self):
        return self.odometro

    def getMarca(self):
        return self.marca  # Corrigi: era self.Marca (maiúsculo)

    def getModelo(self):
        return self.modelo

    def getCor(self):
        return self.cor

    def setOdometro(self, new_odometro):
        if new_odometro >= self.odometro:
            self.odometro = new_odometro
            return True
        else:
            return False


# Criando o objeto carro
carro = Carro(10000, "NISSAN", "GT-R V-spec R34", "Midnight Purple")

# Loop principal do programa
while True:
    print("\n=== MENU ===")
    print("(1) Atualizar valor do odômetro")
    print("(2) Exibir informações do carro")
    print("(3) Encerrar")

    opcao = input("Escolha uma opção: ")

    if opcao == "1":
        # Atualizar odômetro
        while True:
            try:
                novo_valor = int(input(f"Odômetro atual: {carro.getOdometro()} km. Digite o novo valor: "))

                if carro.setOdometro(novo_valor):
                    print(f"Odômetro atualizado para {novo_valor} km!")
                    break
                else:
                    print("ERRO: O valor deve ser maior ou igual ao atual!")

            except ValueError:
                print("Digite um número válido!")

    elif opcao == "2":
        # Exibir informações do carro
        print("\n--- Informações do Carro ---")
        print(f"Marca: {carro.getMarca()}")
        print(f"Modelo: {carro.getModelo()}")
        print(f"Cor: {carro.getCor()}")
        print(f"Odômetro: {carro.getOdometro()} km")

    elif opcao == "3":
        # Encerrar programa
        print("Programa encerrado!")
        break

    else:
        print("Opção inválida! Escolha 1, 2 ou 3.")