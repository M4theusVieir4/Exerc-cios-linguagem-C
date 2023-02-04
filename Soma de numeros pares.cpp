#include<stdio.h>
#include<stdlib.h>
int main(void){
	int par=0, num=0;
	do{
		
		printf("\nDigite um numero diferente de 0:\n");
		scanf("%i",&num);
		
		if(num%2 == 0){
		par += num;}
		
		
	
	}while(num!=0);
	printf("\nA soma dos numeros pares eh: \n%i\n",par);
	
	
	
	
	
	
}
