#include<stdio.h>

int main(void){
	struct horario{
		int horas;
		int min;
		int seg;
	}agora={22, 24, 10};
	
	printf("%d: %d: %d", agora.horas, agora.min, agora.seg);
}
