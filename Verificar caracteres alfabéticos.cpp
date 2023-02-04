#include<stdio.h>

int main(void){
	void alphabetic(char variavel);
	char lista[20];
	int i =0;
	printf("Digite uma frase: ");
	scanf("%s", lista);
	while(lista[i] != '\0'){
		alphabetic(lista[i]);
		++i;
	}
	
	
	
	
	
}
void alphabetic(char variavel){
	if(variavel >='a' && variavel <='z' || 
	variavel >='A' && variavel <= 'Z'){
		printf("Eh uma letra \n");
	}else{
	printf("N eh uma letra! \n");
}
} 

