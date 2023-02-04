#include<stdio.h>


int main(void){
	float calculaAreaRetang();
	float area = calculaAreaRetang(10.0, 20.0);
	printf("%f", area);
	return 0;
	
	
}
float calculaAreaRetang(float base, float altura){
	float area = base*altura;
	return area;
}
