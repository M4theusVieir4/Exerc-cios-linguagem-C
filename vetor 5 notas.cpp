#include<stdio.h>

int main(){
	float media, soma;
	float notas[5] = {0};
	printf("Digite 5 notas: \n");
	for(int i=0; i<5; ++i){
		
		scanf("%f", &notas[i]);
	}
	for(int i=0; i<5; ++i){
		soma += notas[i];
	}
	media = soma/5;
	printf("%f", media);
	return 0;
}
