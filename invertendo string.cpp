#include<stdio.h>

int main(void){
	
	char texto[80], textoInv[80];
	int i, j, fim;
	
	fgets(texto, 80, stdin);
	
	fim = 0;
	
	while(texto[fim] != '\0' && texto[fim] != '\n'){
		fim++;
	}
	j=0;
	i = fim -1;
	while(j< fim){
		textoInv[j] = texto[i];
		j++;
		i--;
	}
	textoInv[j] = '\0';
	printf("Inversa: \n%s\n",textoInv);
}


