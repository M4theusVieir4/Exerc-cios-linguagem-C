#include<stdio.h>

int main(void){
	void funcaoPrint(int x,int vetor[]);
	int vetor[3]={10};
	int x = 10;
	funcaoPrint(x, vetor);
	printf("Na main o x vale %d \n", x);
	printf("Na main o vetor vale %d \n", vetor[1]);
}
void funcaoPrint(int x,int vetor[]){
	x = x+ 10;
	vetor[1]=20;
	printf("Na funcaoPrint o x vale %d \n", x);
	printf("Na funcaoPrint o vetor vale %d \n", vetor[1]);
	
}
