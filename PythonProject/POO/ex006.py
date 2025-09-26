class Cachorro:
    def __init__(self, nome, idade):
        self.nome = nome
        self.idade = idade
    def __str__(self):
        return f"Valor do atributo nome do objeto: {self.nome}" 
        # return + self.nome
c = Cachorro('dog', 5)
print(c)
c.nome = "novo nome" # n pode, feio dms
print(c)