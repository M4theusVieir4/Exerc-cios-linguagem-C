#include<stdio.h>


int main(void){
	int fatorial(int x);
	int x;
	printf("Digite um numero inteiro: ");
	scanf("%d", &x);
	int fat = fatorial(x);
	printf("O fatorial de %d eh %d", x, fat);
}
int fatorial(int x){
	int f = 1;
	if(x == 0){
		f =1 ;
	}else{
		f = x*fatorial(x-1);
	}
	 return f;
	
}
