#include<stdio.h>
#include<locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
	int num1, num2, acumulador;
	
	printf("	Multiplicação de dois números\n");
	printf("\nDigite o primeiro número: \n");
	scanf("%d", &num1);
	printf("Digite outro número: \n");
	scanf("%d", &num2);
	
	for(int i = 1; i <= num2; i++){
		acumulador += num1;
	}
	printf("%d x %d = %d", num1, num2, acumulador);
}
