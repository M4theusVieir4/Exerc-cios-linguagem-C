distancia = float(input("Que distância deseja percorrer[Km]: "))

if (distancia <= 200):
    tarifa = distancia * 0.5
else:
    tarifa = distancia * 0.45
print(f"O valor da passagem é {tarifa} reais.")