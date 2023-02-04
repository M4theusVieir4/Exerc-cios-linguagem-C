#include<stdio.h>
#include<locale.h>

int main(void){
	setlocale(LC_ALL,"Portuguese");
	float vel, multa;
	
	printf("Digite a velocidade que você estava: \n");
	scanf("%f", &vel);
	
	if(vel > 80){
		multa = (vel - 80) * 5;
		printf("Você ultrapassou o limite sua multa será = %.2f !", multa);
	}else{
		printf("Parabéns você respeitou a lei! ");
	}
	
}
