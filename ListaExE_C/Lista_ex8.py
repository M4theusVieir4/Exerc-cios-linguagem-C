print('     Gerador de cálculo de multiplicação')
resultado = 0
num1 = int(input('Digite um número inteiro que irá multiplicar: '))
num2 = int(input('Digite outro número inteiro: '))

for i in range(0, num2):
    resultado += num1
print(f'{num1} x {num2} = {resultado}')
