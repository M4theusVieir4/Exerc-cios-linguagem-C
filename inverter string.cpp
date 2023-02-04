#include<stdio.h>

int main(void){
	
	char string[10];
	char *pS;
	printf("Digite uma frase: \n");
	scanf("%s", string);
	pS= string;
	while(*pS!=0){
		++pS;
	}if(*pS==0){
		while(*pS != string){
			printf("%s ", *pS);
			--pS;
		}
	}printf("%s", string);
	
}
