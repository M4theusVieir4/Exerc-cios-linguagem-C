#include<stdio.h>
#include<stdlib.h>

int main(void){
	
	int *p;
	p= (int *) calloc(5, sizeof(int));
	
	*(p+1)=20;
	
	for(int i=0; i< 5; i++){
		printf("\nEndereço de p%i eh = %i / O valor de p%i = %i \n", i,(p+i), i, p[i] );
	}
}
