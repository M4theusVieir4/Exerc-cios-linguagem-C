#include<stdio.h>
#include<locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
	int resultado, numero, inicio, fim;
	
	printf("	Tabuada\n");
	printf("Digite o n�mero que deseja saber a tabuada: \n");
	scanf("%d", &numero);
	printf("N�mero que ir� iniciar a tabuada: \n");
	scanf("%d", &inicio);
	printf("Digite at� que n�mero a tabuada ir�: \n");
	scanf("%d", &fim);
	while(inicio <= fim){
		resultado = inicio * numero;
		printf("%d X %d = %d \n", inicio, numero, resultado);
		inicio += 1;
	}
	
	
}

