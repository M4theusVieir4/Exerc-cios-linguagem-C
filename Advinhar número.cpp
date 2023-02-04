#include<stdio.h>
#include<stdlib.h>

int main(void){
	int const valor = 10;
	int x = 0;
	int tentativa = 0;
	int const limite = 10;
	printf("Advinhe o numero q pensei \n");
	while(x != valor && tentativa < limite ){
		printf("Tentativa %d de %d \n", tentativa++, limite);
		printf("Digite um numero inteiro de 1 a 10: \n");
		scanf("%d", &x);
		if(x != valor){
			printf("Você errou tente novamente\n");		
		}else{
			printf("Você conseguiu eu pensei no numero %d", valor);
		}		
	}
}
