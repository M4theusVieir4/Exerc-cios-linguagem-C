print('     Calculadora')
num1 = float(input("Digite o primeiro número: "))
num2 = float(input("Digite o segundo número: "))
operacao = str(input("Digite o operador: [+; -; *; /]: "))

if (operacao == '+'):
    resultado = num1 + num2
elif (operacao == '-'):
    resultado = num1 - num2
elif (operacao == '*'):
    resultado = num1 * num2
elif (operacao == '/'):
    resultado = num1 / num2
else:
    print("O operador foi digitado de forma incorreta .")
print(f"A equação {num1} {operacao} {num2} = {resultado}.")