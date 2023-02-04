#include<stdio.h>

int main(void){
	char x[] = "coxinha";
	int i = 0;
	
while((x[i] = putc(x[i], stdout)) != '\0'){
	i++;
}
}
