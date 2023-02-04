#include<stdio.h>
#include<stdlib.h>

int main(void){
	int tamanho;
	float *vetorVariavel;
	float soma = 0;
	float valor;
	
	printf("Digite a quantidade de elementos que deseja salvar: \n ");
	scanf("%d", &tamanho);
	vetorVariavel = (float *) malloc(tamanho * sizeof(float));
	
	for(int i=0; i<tamanho; i++ ){
		printf("Digite o valor do vetorVariavel[%d]: \n", i);
		scanf("%f", & valor);
		vetorVariavel[i] = valor;
		soma += valor;
	}
	printf("Exibindo a sequencia de valores: \n");
	for(int i = 0; i < tamanho; i++){
		printf("vetorVariavel[%d] = %.2f \n", i, vetorVariavel[i]);
	}
	printf("A soma dos elementos vale %.2f\n", soma);
	printf("A media dos elementos vale %.2f\n", soma/tamanho);
	printf("Liberando memoria...");
	free(vetorVariavel);
	
}
