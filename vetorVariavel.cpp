#include<stdio.h>
#include<stdlib.h>

int main(void){
		
	int tamanho;
	int *vetorVariavel;
	int valor;
	printf("\n Digite o numero de elementos do vetor: ");
	scanf("%d", &tamanho);
	vetorVariavel = (int *) malloc(tamanho * sizeof(int));
	for(int i = 0; i < tamanho; i++){
		printf("Digite o valor do elemento vetorVariavel[*d]: ", i);
		scanf("%d", &valor);
		vetorVariavel[i] = valor;		
	}
	printf("\n Exibindo a sequencia dos valores armazenados: ");
	for(int i = 0; i < tamanho; i++){
		printf("\n Vetor[%d] = %d", i, vetorVariavel[i]);		
	}
	printf("\nLiberando memoria alocada...\n");
	free(vetorVariavel);
}
