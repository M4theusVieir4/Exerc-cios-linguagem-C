#include<stdio.h>
#include<locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
	float salario, aum;
	
	printf("Digite seu sal�rio: \n");
	scanf("%f", &salario);
	
	if(salario > 1250){
		aum = salario*10/100 + salario;
		printf("Com um aumento de 10%% seu novo sal�rio � %.2f", aum);
	}else{
		aum = salario*15/100 + salario;
		printf("Com um aumento de 15%% seu novo sal�rio � %.2f", aum);
	}
}
