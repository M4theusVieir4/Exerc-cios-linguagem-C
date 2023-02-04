#include<stdio.h>
int main(void){
	float calculoAreaRetang(float base,float altura);
	float area = calculoAreaRetang(10.0,20.0);
	printf("A area vale : %f",area);
	return 0;
}

float calculoAreaRetang(float base,float altura){
	float area = base*altura;
return area;	
	
	
	
}



