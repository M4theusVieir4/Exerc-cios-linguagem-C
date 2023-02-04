#include<stdio.h>
#include<stdlib.h>

int main(void){
	
	int *p = (int *) malloc(10*sizeof(int));
	*p = 1000;
	free(p);
	printf("%li", p);
	

	
	
	
	
	
	
}
