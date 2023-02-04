#include<stdio.h>

int main(void){
	int n = 5;
	int resultado;
	int T(int x);
	resultado = T(n);
	printf("%d ", resultado);
	
}
int T(int x){
	if(x>=2){
		return 2*T(x-1) +1;
	}
}
