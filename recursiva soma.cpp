#include<stdio.h>

int main(void){
	int n2, n3, n4, resultado, soma;
	n2 = 2;
	n3 = 3;
	n4 = 4;
	int F(int x);
	resultado = F(n2);
	printf(" F2 vale = %d\n", resultado);
	resultado = F(n3);
	printf(" F3 vale = %d\n", resultado);
	resultado = F(n4);
	printf(" F4 vale = %d\n", resultado);
	soma = F(n2) + F(n3) + F(n4);
	printf(" Soma vale = %d", soma);
	
}
int F(int x){
	if(x>=2){
		return (x-1)*(x-1)*F(x-1) + (x-1);
	}
}

