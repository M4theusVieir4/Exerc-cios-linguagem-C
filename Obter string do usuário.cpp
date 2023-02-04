#include<stdio.h>

int main(void){
	char caractere;
	int pos = 0;
	char linha[100];
	do{
		caractere = getchar();
		linha[pos] = caractere;
		++pos;
	}while(caractere != '\n');
	linha[pos -1] = '\0';
	
	printf("Voce digitou %s", linha);
	
}
