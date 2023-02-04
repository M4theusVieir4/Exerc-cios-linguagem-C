#include<stdio.h>

int main(void){
	
	struct horario{
		int horas;
		int min;
		int seg;
	};
	struct horario vetor[5]=
	{{22, 30, 40}, {50, 60, 80},{ 90, 100, 450},{500, 600, 700},{80, 1, 70}};
	for(int i=0; i<5; ++i){
		printf("%d:%d:%d\n",vetor[i].horas,
						    vetor[i].min,
						    vetor[i].seg);
	}
}
