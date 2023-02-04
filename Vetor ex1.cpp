#include<stdio.h>

int main(void){
	float vetor[4];
	float soma = 0;
	for(int i = 0;i<4;i++){
	
		scanf("%f",&vetor[i]);
	}
	for(int i =0;i<4;i++){
		
		printf("Os membros do vetor sao %.1f\n",vetor[i]);
	}
	printf("\n");
	for(int i=3;i>=0;i--){
		printf("%.1f\n",vetor[i]);
	}
	for(int i =0;i<4;i++){
		soma += vetor[i];
		
	}
	printf("Valor da soma dos membros eh: %.2f\n",soma);
	printf("O valor da media eh : %.2f\n",soma/4);
	
	float maior;
	float menor;
	maior=menor=vetor[0];
	for(int i=0;i<4;i++){
		if(maior<vetor[i]){
			maior = vetor[i];
		}
		if(menor>vetor[i]){
			menor = vetor[i];
		}
		
			}
	printf("o maior valor eh %.2f e o menor valor eh %.2f\n",maior,menor);
	
	float num;
	int cont=0;
	printf("Digite o numero q deseja ver a repeticao:");
	scanf("%f",&num);
	for(int i=0;i<4;i++){
		if(vetor[i]==num){
			cont++;
		}
	}
	printf("o valor repetiu: %.2d",cont);
}
