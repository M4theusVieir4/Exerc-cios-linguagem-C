#include<stdio.h>
#include<locale.h>

int main(void){
	setlocale(LC_ALL,"Portuguese");
	float vetor[3];
	float maior, menor;
	
	for(int i=0; i < 3; i++){
		printf("Digite um n�mero na posi��o do vetor[%d]: \n", i);
		scanf("%f", &vetor[i]);
		
		if(i == 0){
			maior = menor = vetor[i];
		}else if(maior < vetor[i]){
			maior = vetor[i];
		}else if(menor > vetor[i]){
			menor = vetor[i];
		}
	}
	printf("O maior n�mero � %.2f e o menor � %.2f \n", maior , menor);
}
