#include<stdio.h>

int main(void){
	bool stringIguais(char s1[], char s2[]);
	
	if(stringIguais("casA", "casa")){
		printf("As strings sao iguais");
	}
	else{
		printf("As strings sao diferentes");
	}
}
bool stringIguais(char s1[], char s2[]){
	int pos= 0;
	while(s1[pos] == s2[pos] && s1[pos] != '\0' && s2[pos] != '\0'){
		++pos;
	}
	if(s1[pos]=='\0' && s2[pos]=='\0'){
		return 1;
	}
	else{
		return 0;
	}
}
