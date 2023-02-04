#include<stdio.h>
#include<windows.h>


int main(void){
	int cont = 10;
	while(cont >= 0){
		printf("%d\n", cont);
		cont -= 1;
		Sleep(1500);//1500 microssegundos = 1,5 segundos
	}
	printf("Fogo!");
}
