velocidade = float(input("Velocidade que estava:[Km] "))

if (velocidade > 80):
    print("Você passou o limite de 80 Km/h.")
    multa = (velocidade - 80)* 5
    print(f"Sua multa será = {multa} reais.")
