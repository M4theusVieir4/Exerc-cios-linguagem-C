#include<stdio.h>
#include<locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
	int resultado, inicio, fim;
	
	printf("	Tabuada\n");
	printf("Digite o n�mero que deseja saber a tabuada: \n");
	scanf("%d", &fim);
	printf("N�mero que ir� iniciar a tabuada: \n");
	scanf("%d", &inicio);
	
	while(inicio <= fim){
		resultado = inicio * fim;
		printf("%d X %d = %d \n", inicio, fim, resultado);
		inicio += 1;
	}
	
	
}
