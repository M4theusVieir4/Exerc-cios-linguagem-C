#include<stdio.h>
#include<locale.h>


int main(void)
{
	setlocale(LC_ALL,"Portuguese");
	char operacao;
	float num1, num2, resultado;
	
	printf("		Calculadora\n");
	printf("\nDigite um número: \n");
	scanf("%f", &num1);
	printf("Digite outro número: \n");
	scanf("%f", &num2);
	printf("Digite a operação: [+; *; -; /]\n");
	scanf("%s", &operacao);
	
	switch(operacao){
		case '+':
			resultado = num1 + num2;
			break;
		case '-':
			resultado = num1 - num2;
			break;
		case '*':
			resultado = num1 * num2;
			break;
		case '/':
			resultado = num1 / num2;
			break;
			
		default:
			printf("Operação escolhida está errada \n");
			break;
				
	}
	printf("O resultado da operação é = %.2f \n", resultado);
}
