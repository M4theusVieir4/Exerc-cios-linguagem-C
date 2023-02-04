#include<stdio.h>
int main(){
	
	int x =10;
	double y =20.50;
	char z ='a';
	
	int *pX;
	pX = &x;
	double *pY= &y;
	char *pZ= &z;
	
	int *resultado;
	resultado = &x;
	double soma = *pX + *pY;
	
	printf("Endereço x=%d - Valor x = %d",pX, *pX)
	
	
	
	
	
	return 0;
}
