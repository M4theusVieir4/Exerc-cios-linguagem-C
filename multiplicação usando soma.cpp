#include<stdio.h>
#include<locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
	int num1, num2, acumulador;
	
	printf("	Multiplica��o de dois n�meros\n");
	printf("\nDigite o primeiro n�mero: \n");
	scanf("%d", &num1);
	printf("Digite outro n�mero: \n");
	scanf("%d", &num2);
	
	for(int i = 1; i <= num2; i++){
		acumulador += num1;
	}
	printf("%d x %d = %d", num1, num2, acumulador);
}
