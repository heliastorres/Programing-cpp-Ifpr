import math
def linha():
    print("-"*40)

linha()
print("Digite 1 (Plano Cartesiano) (x, y, z)")
print("Digite 2 (Plano Cilíndrico) (ρ, θ, z)")
print("Digite 3 (Plano Esférico) (r, θ, φ)")
linha()
escolha_1 = int(input("Indique o Sistema Inicial (1/2/3): "))
linha()

if escolha_1 == 1:
    x = int(input("Coordenada X: "))
    y = int(input("Coordenada Y: "))
    z = int(input("Coordenada Z: "))

elif escolha_1 == 2:
    p = int(input("Qual a distância representada pela letra grega ρ (rô): "))
    o = int(input(" Qual o ângulo em graus representado pela letra grega θ (teta): "))
    z = int(input("Qual a coordenada Z: "))

else:
    r = int(input("Qual a distância do ponto, no plano YZ, até a origem: "))
    o = int(input("Qual o ângulo em graus representado pela letra grega θ (teta): "))
    f = int(input(" Qual o ângulo representado pela letra grega φ (phi): "))
linha()
print("Digite 1 (Plano Cartesiano) (x, y, z)")
print("Digite 2 (Plano Cilíndrico) (ρ, θ, z)")
print("Digite 3 (Plano Esférico) (r, θ, φ)")
linha()
escolha_2 = int(input("Indique o Sistema de Conversão: (1/2/3): "))
linha()
while escolha_2 == escolha_1:
    print("Você escolheu o mesmo plano para fazer a conversão!")
    escolha_2 = int(input("Faça outra escolha: "))

if escolha_1 == 1 and escolha_2 == 2:
    p = math.sqrt((math.pow(x, 2))+(math.pow(y, 2)))
    o = math.atan2(y, x)
    print(f"Cartesiano = (x, y, z) ({x},{y},{z})")
    print(f"Cilíndrico = (ρ, θ, z) ({p:.2f},{math.degrees(o)}°,{z})")

if escolha_1 == 1 and escolha_2 == 3:
    p = math.sqrt((math.pow(x, 2)) + (math.pow(y, 2)))
    r = math.sqrt(math.pow(z, 2) + math.pow(p, 2))
    o = math.atan2(y, x)
    f = math.atan2(p, z)
    print(f"Cartesiano = (x, y, z) ({x},{y},{z})")
    print(f"Esférico = (r, θ, φ)({r:.2f},{math.degrees(o)}°,{math.degrees(f):.1f}°)")

if escolha_1 == 2 and escolha_2 == 1:
    x = p * math.cos(o)
    y = p * math.sin(o)
    print(f"Cilíndrico = (ρ, θ, z) ({p}, {o}°, {z})")
    print(f"Cartesiano = (x, y, z) ({x:.2f},{y:.2f},{z:.2f})")

if escolha_1 == 2 and escolha_2 == 3:
    r = math.sqrt(math.pow(p, 2) + math.pow(z, 2))
    x = p * math.cos(o)
    y = p * math.sin(o)
    o = math.atan2 (y, x)
    f = math.acos (z / r)
    print(f"Cilíndrico = (ρ, θ, z) ({p}, {o}°, {z})")
    print(f"Esférico = (r, θ, φ) ({r:.2f}, {math.degrees(o):.2f}°, {math.degrees(f):.2f}°)")

if escolha_1 == 3 and escolha_2 == 1:
    x = r * math.sin(f) * math.cos(o)
    y = r * math.sin(f) * math.sin(o)
    z = r * math.cos(f)
    print(f"Esférico = (r, θ, φ) ({r}, {o}, {f})")
    print(f"Cartesiano = (x, y, z) ({x:.2f}, {y:.2f}, {z:.2f})")

elif escolha_1 == 3 and escolha_2 == 2:
    x = r * math.sin(f) * math.cos(o)
    y = r * math.sin(f) * math.sin(o)
    z = r * math.cos(f)
    p = math.sqrt( math.pow(x, 2) + math.pow(y, 2) )
    o = math.atan2(y, x)
    print(f"Esférico = (r, θ, φ) ({r}, {o:.2f}, {f})")
    print(f"Cilíndrico = (ρ, θ, z) ({p:.2f}, {math.degrees(o):.2f}°, {z:.2f}°)")