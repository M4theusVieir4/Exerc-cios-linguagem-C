#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int ehPrimo(int x){
	
	int divisor=0;
		for(int i =1;i<=x; i++){
		if(x % i ==0){
			divisor++;
		}
	}if(divisor == 2){
			return 1;
		}else{
			return 0;
		}
}
int main(void){
	setlocale(LC_ALL,"Portuguese");
	int limite;
	int divisor;
	printf("Digite até que número você deseja ver o primo: \n");
	scanf("%d", &limite);
	for(int i=1; i<= limite;i++){
		if(ehPrimo(i)==1){
			printf("%d ", i);
		}
	}
	
}
