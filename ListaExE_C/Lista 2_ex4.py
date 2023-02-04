cont = 1
print('     Gerador de números ímpares')
num = int(input("Digite o número limite: "))

while(cont <= num):
    if(cont % 2 != 0):
        print(f'{cont}')
    cont += 1