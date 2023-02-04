#include<stdio.h>

int SomarVetor(int vetor[], const int n){
	int *pVetor;
	int soma = 0;
	int *const finalVetor = vetor + n;
	for(pVetor = vetor; pVetor<finalVetor; ++pVetor){		
		soma+= *(pVetor);
	}
	return soma;
}
int main(void){
	int vetor[10] = {5, 5, 5, 5, 5, 5, 5, 5, 5, 5};	
	
	printf("Os membros do vetor sao %d", SomarVetor(vetor, 10));
	
	
}
