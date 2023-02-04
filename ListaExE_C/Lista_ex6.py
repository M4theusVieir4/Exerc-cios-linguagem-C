print('     Gerador de tabuada')
cont = 1
limite = int(input('Digite o número que deseja ver a tabuada: '))

for i in range(0, 11):
    resultado = i * limite
    print(f'{i} x {limite} = {resultado}')