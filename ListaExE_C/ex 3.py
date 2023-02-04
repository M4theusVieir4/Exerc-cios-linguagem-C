lista = []
maior = menor = 0

for i in range(0, 3):
    n = float(input("Digite um número: "))
    lista.append(n)
    if (i == 0):
        maior = menor = lista[i]
    elif (lista[i] > maior):
        maior = lista[i]
    elif (lista[i] < menor):
        menor = lista[i]
print(f"O maior número digitado foi {maior} e o menor foi {menor} .")


