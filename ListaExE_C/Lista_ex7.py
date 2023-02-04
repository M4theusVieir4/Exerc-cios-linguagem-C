print('     Gerador de tabuada')
num = int(input('Digite o número que deseja saber a tabuada:'))
inicio = int(input("Digite o número ínicio da tabuada:"))
fim = int(input("Digite até que número irá a tabuada:"))

for i in range(inicio, fim + 1):
    resultado = i * num
    print(f'{i} x {num} = {resultado}')