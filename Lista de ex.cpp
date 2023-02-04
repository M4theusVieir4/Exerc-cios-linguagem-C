#include<stdio.h>

int main()
{
	int num1 , num2;
	
	printf("Digite 2 numeros inteiros:\n");
	scanf("%i %i", &num1, &num2);
	
	
	if(num2==0)
	printf("nao existe divisao por zero");
	else{
		if(num1 % num2==0)
			printf("%i e divisao por %i eh exata\n",num1 , num2);
		else
		
			printf("%i e divisao por %i nao eh exata\n",num1 , num2);
		}
		
	  
	
	
	
	
	
	
	return 0;
}
