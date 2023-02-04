#include<stdio.h>
#include<locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
	int cont = 1;
	int num;
	
	printf("Digite um número inteiro: \n");
	scanf("%d", &num);
	printf("\n números múltiplos de 3 de 1 até %d: \n", num);
	
	while(cont <= num){
		if(cont % 3 == 0){
			printf("%d\n", cont);	
		}		
		cont += 1;
	}
}
