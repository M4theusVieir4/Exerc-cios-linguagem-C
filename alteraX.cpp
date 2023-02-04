#include<stdio.h>
int x;
void alteraX(){
	int x =5;
}
int main(){
	x = 7;
	printf("\n x = %d\n", x);
	alteraX();
	printf("\n x = %d\n", x);
	
}
