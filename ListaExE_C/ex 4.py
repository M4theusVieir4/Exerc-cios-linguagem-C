salario = float(input("Digite seu salário: R$"))

if(salario > 1250):
    aumento = (salario * 10/100) + salario
else:
    aumento = (salario * 15/100) + salario
print(f"Seu novo salário é {aumento} reais. ")
