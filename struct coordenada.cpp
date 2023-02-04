#include<stdio.h>
#include<stdlib.h>

struct Ponto2d{
	int x;
	int y;
};

int main(void){
	struct Ponto2d ponto1;
	struct Ponto2d ponto2;
	ponto1.x = 5;
	ponto1.y = 8;
	
	ponto2.x = 2*ponto1.x;
	ponto2.y = 2*ponto1.y;
	printf("\n Ponto1 (%d, %d) ", ponto1.x, ponto1.y);
	printf("\n Ponto2 (%d, %d) ", ponto2.x, ponto2.y);
	
	
}
