#include<stdio.h>

int main(void){
	
	struct horario{
		int horas;
		int min;
		int seg;
		double teste;
		char letra;
	};
	struct horario agora;
	agora.horas = 21;
	agora.min = 45;
	agora.seg = 10;
	
	struct horario depois;
	depois.horas = agora.horas + 10;
	depois.min = agora.min;
	depois.teste = 55.55/100;
	depois.letra = 'a';
	
	printf("%d \n", depois.horas);
	printf("%d \n", depois.min);
	printf("%f \n", depois.teste);
	printf("%c", depois.letra);
	 
	
}
