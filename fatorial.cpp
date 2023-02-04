#include<stdio.h>

int fatorial(int n){
	return n >1 ? n*fatorial(n-1) : 1;
	
	
}
int main(void){
	int num;
printf("Digite um numero: ");
scanf("%d", &num);
printf("o fatorial vale %d",fatorial(num));
}


