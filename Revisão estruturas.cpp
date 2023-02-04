#include<stdio.h>

struct horario{
	int horas;
	int min;
	int seg;
};
int main(void){
	void  mostrar(struct horario lista[5]);
	void receber(struct horario lista[5]);
	struct horario vetorhorario[5];
	receber(vetorhorario);
	mostrar(vetorhorario);
	
	
	
	
	
}
void receber(struct horario lista[5]){
	for(int i = 0; i<5; ++i){
		printf("Digite %d horario (hh:mm:ss) \n", i+1);
		scanf("%d%d%d", &lista[i].horas,
					    &lista[i].min,
						&lista[i].seg);
	}
	
	
}
void mostrar(struct horario lista[5]){
	for(int i = 0;i<5;++i){
		printf("O %d horario eh:  %d:%d:%d \n", i+1,
											   lista[i].horas,
										       lista[i].min,
										       lista[i].seg);
	}
}
