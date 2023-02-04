print("     Gerador de múltiplos de 3")
cont = 1
num = int(input("Digite o número: "))

while (cont <= num):
    if(cont % 3 == 0):
        print(f'{cont}')
    cont += 1
