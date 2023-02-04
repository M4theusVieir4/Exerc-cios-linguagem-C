#include<stdio.h>


float somaNumeros(float a, float b);
int main(void){
	float soma = somaNumeros(5, 10);
	printf("A soma vale %.2f", soma);
	
	
	
}
float somaNumeros(float a, float b){
	float positivo(float x);
	float soma;
	if (a<0 && b>0){
		 a= positivo(a);
		soma = a + b;
		return soma;
	}
	else if(b<0 && a>0){
		 b= positivo(b);
		soma = a + b;
		return soma;
	}
	else if(a< 0 && b<0){
		 a= positivo(a);
		 b= positivo(b);
		soma = a + b;
		return soma;
	}
	else{
		soma = a+b;
		return soma;
	}
	
}
float positivo(float x){
	x*=-1;
	return x;
}
