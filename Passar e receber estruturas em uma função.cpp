#include<stdio.h>

struct horario{
	int horas;
	int min;
	int seg;
};
	

int main(void){
	struct horario teste(struct horario x);
	struct horario agora;
	agora.horas = 22;
	agora.min = 13;
	agora.seg = 1;
	struct horario proxima;
	
	proxima = teste(agora);
	printf("%d : %d : %d", proxima.horas, proxima.min, proxima.seg);
	

}
struct horario teste(struct horario x){
	
	return x;
}

