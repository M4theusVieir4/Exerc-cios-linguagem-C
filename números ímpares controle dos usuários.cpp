#include<stdio.h>
#include<locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
	int cont = 1;
	int num;
	
	printf("Digite um n�mero inteiro: \n");
	scanf("%d", &num);
	printf("\nN�meros �mpares de 1 at� %d: \n", num);
	
	while(cont <= num){
		if(cont % 2 != 0){
			printf("%d\n", cont);
		}
		
		cont += 1;
	}
	
	
	
}
