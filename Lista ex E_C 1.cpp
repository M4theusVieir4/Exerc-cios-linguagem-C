#include<stdio.h>
#include<locale.h>


int main(void){
	float num1, num2;
	setlocale(LC_ALL,"Portuguese");
	printf("Digite o primeiro número: \n");
	scanf("%f", &num1);
	printf("Digite digite o segundo número: \n");
	scanf("%f", &num2);
	
	if(num1 > num2){
		printf("O primeiro número digitado: %.2f é maior.", num1);
	} else if(num1 < num2){
		printf("O segundo número digitado: %.2f é maior.", num2);
	}else{
		printf("Ambos números digitados são iguais.");
	}
	
	
	
}
