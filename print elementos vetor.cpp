#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(void){
	int vetor[4];
	vetor[0]=5;
	vetor[1]=3;
	vetor[2]=2;
	vetor[3]= 8;
	for(int i = 0;i<4;i++){
		printf("\n%d", vetor[i]);
	}
}
