#include<stdio.h>
#include<locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
	int resultado, numero, inicio, fim;
	
	printf("	Tabuada\n");
	printf("Digite o número que deseja saber a tabuada: \n");
	scanf("%d", &numero);
	printf("Número que irá iniciar a tabuada: \n");
	scanf("%d", &inicio);
	printf("Digite até que número a tabuada irá: \n");
	scanf("%d", &fim);
	while(inicio <= fim){
		resultado = inicio * numero;
		printf("%d X %d = %d \n", inicio, numero, resultado);
		inicio += 1;
	}
	
	
}

