#include<stdio.h>
#include<locale.h>


int main(void)
{
	setlocale(LC_ALL,"Portuguese");
	char operacao;
	float num1, num2, resultado;
	
	printf("		Calculadora\n");
	printf("\nDigite um n�mero: \n");
	scanf("%f", &num1);
	printf("Digite outro n�mero: \n");
	scanf("%f", &num2);
	printf("Digite a opera��o: [+; *; -; /]\n");
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
			printf("Opera��o escolhida est� errada \n");
			break;
				
	}
	printf("O resultado da opera��o � = %.2f \n", resultado);
}
