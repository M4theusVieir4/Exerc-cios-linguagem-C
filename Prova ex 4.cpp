#include<stdio.h>
#include<locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
	float salario, aum10, aum15;
	printf("Digite seu salário: \n");
	scanf("%f", &salario);
	
	if(salario < 1250){
		aum10 = salario + salario*10/100;
		printf("Seu salário era %.2fR$ com o aumento de 10%% passou a ser %.2fR$", salario, aum10);
	}else {
		aum15 = salario + salario*15/100;
		printf("Seu salário era %.2fR$ com o aumento de 15%% passou a ser %.2fR$",salario, aum15);
	}
	
	
}
