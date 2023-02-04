#include<stdio.h>
int main()
{
	//5.4.3.2.1
	int fatorial;
	scanf("%i",&fatorial);
	int resposta =1;
	for(;fatorial>=1;--fatorial){
		
		resposta*=fatorial;
		
	}
	
	printf("O numero fatorial eh = %i",resposta);
	
	
	
	
	
	
	
	
	
	return 0;
}
