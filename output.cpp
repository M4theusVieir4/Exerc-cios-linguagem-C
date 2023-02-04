#include<stdio.h>
int main(void){
    
    int intVar = 9999999;
    int intVar2 = 10;
    double doubleVar = 100.123456789;
    //Formatação variáveis inteiras
    printf("Variavel inteira (%%d) = %7d\n", intVar2);
    printf("Variavel inteira (%%i) = %i\n", intVar);
    printf("Variavel inteira (%%x) = %x\n", intVar);
    printf("Variavel inteira (%%o) = %o\n", intVar);
}
