#include<stdio.h>
#include<locale.h>


int main(void){
	float num1, num2;
	setlocale(LC_ALL,"Portuguese");
	printf("Digite o primeiro n�mero: \n");
	scanf("%f", &num1);
	printf("Digite digite o segundo n�mero: \n");
	scanf("%f", &num2);
	
	if(num1 > num2){
		printf("O primeiro n�mero digitado: %.2f � maior.", num1);
	} else if(num1 < num2){
		printf("O segundo n�mero digitado: %.2f � maior.", num2);
	}else{
		printf("Ambos n�meros digitados s�o iguais.");
	}
	
	
	
}
