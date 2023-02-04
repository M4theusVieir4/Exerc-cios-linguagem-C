#include<stdio.h>
#include<locale.h>
#define LIMITE 200

int main(void){
	setlocale(LC_ALL, "Portuguese");
	float distancia, tarifa;
	
	printf("Que distância irá percorrer : \n");
	scanf("%f", &distancia);
	
	tarifa = (distancia <= LIMITE) ? distancia * 0.5 : distancia * 0.45;
	printf("O valora da passagem é: R$ %.2f", tarifa);
}
