#include<stdio.h>

int main(void){
	struct horario{
		int horas;
		int min;
		int seg;		
	};
	struct horario agora, *depois;
	depois = &agora;
	depois->horas = 20;
	depois->min = 30;
	depois->seg = 15;
	int somatorio = 100;
	struct horario antes;
	antes.hora = somatorio + depois->seg;
	antes.min = agora.horas + depois->min;
	antes.seg = depois->horas + depois->min;
	
	printf("%d:%d:%d \n", antes.horas, antes.min, antes.seg);
}

