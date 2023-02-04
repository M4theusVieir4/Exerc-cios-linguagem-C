#include<stdio.h>
#include<stdlib.h>
#include<math.h>

struct Ponto2d{
	float x;
	float y;
};

int main(void){
	struct Ponto2d p1, p2;
	
	printf("Digite a coordenada x do P1 : \n ");
	scanf("%f", &p1.x);
	printf("Digite a coordenada y do P1 : \n");
	scanf("%f", &p1.y);
	printf("Digite a coordenada x do P2 : \n");
	scanf("%f", &p2.x);
	printf("Digite a coordenada y do P2 : \n");
	scanf("%f", &p2.y);
	
	float d = sqrt((p2.x - p1.x)*(p2.x - p1.x) + (p2.y - p1.y)* (p2.y - p1.y));
	printf("\n  Distancia = %.2f", d);
	
}
