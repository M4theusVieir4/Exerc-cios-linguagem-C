#include<stdio.h>
#include<stdlib.h>
int main(void){
	char *string = "Giovanni";
	char *ptr = string;
	
	printf("Nome = %s", string);
	do{
		printf("\n %c", *ptr);
	}while(*++ptr);
	
}
