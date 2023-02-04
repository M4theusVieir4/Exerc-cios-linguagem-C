#include<stdio.h>
#include<locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
	int num, resultado;
	int cont = 0;
	
	printf("	Gerador de tabuada\n");
	printf("Digite um número inteiro: \n");
	scanf("%d", &num);
	while(cont <= 10){
		resultado = cont * num;
		printf("%d X %d = %d \n", cont, num, resultado);
		cont += 1;
		
	}
}
