#include<stdio.h>

int main(void){
	
	char x[10];
	int i = 0;
	
	while(x[i] != '\n' && i < 8){
		x[i] = getchar();
		++i;
	}
	printf("%s", x);
	return 0;

}
