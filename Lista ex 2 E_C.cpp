#include<stdio.h>
#include<locale.h>

int main(void){
	setlocale(LC_ALL,"Portuguese");
	float vel, multa;
	
	printf("Digite a velocidade que voc� estava: \n");
	scanf("%f", &vel);
	
	if(vel > 80){
		multa = (vel - 80) * 5;
		printf("Voc� ultrapassou o limite sua multa ser� = %.2f !", multa);
	}else{
		printf("Parab�ns voc� respeitou a lei! ");
	}
	
}
