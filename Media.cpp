#include<stdio.h>

int main(){
	
	float nota1, nota2 , nota3 , nota4 , media , recuperacao;
	printf("\ndigite nota1 depois nota2 depois nota3 depois nota4\n");
	scanf("%f %f %f %f",&nota1, &nota2 , &nota3 , &nota4);
	media =(nota1 + nota2 +nota3 +nota4)/4;
	if(media>=7) 
	printf("\nAprovado\n");
	else{
		recuperacao = 12 - media;
		printf("\nVc esta de recuperacao e precisa tirar nota %f na prova\n",recuperacao);
	}
	
	
	
	
	
	
	
	return 0;
}
