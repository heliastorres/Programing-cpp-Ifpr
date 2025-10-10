# Exemplo de Composição --> 
# Definição: Qunado um objeto tem relação a outro objeto. Na hora de criar o objeto p1 ele tem que receber seus atributos + o atributo que é um objeto de outra classe.
# Obs: O objeto p1 depende de ad1 para existir.
class Person:
        def __init__ (self, name, address):
            self.name = name
            self.address = address

class Address:
        def __init__ (self, street, city, state):
            self.street = street
            self.city = city
            self.state = state

ad1 = Address('Rua Osvaldo', 'Curitiba', 'Parana')
ad2 = Address('Rua Pinto', 'Olinda', 'Pernambuco')
p1 = Person('Helias', ad1) #ad1 é o objeto endereço que foi atribuido ao objeto p1
p2 = Person('Otávio', ad2)

print(p1.name)
print(p1.address.street)
print('-'*15)
print(p2.name)
print(p2.address.street)