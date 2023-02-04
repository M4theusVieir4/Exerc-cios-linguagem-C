#include<stdio.h>

int main(void){
	int F(int x);
	int n, resultado;
	resultado = F(F(F(F(2))) +1);
	printf("Resultado %d", resultado);
	
}
int F(int x){
	if(x == 1){
		return 1;
	}else if(x == 2){
		return 2;
	}else if(x >= 3){
		return F(x-1) + F(x-2);
	}
}
