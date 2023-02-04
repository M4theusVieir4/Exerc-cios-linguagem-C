#include<stdio.h>
int gVariavelGlobal =2;
void teste(void);
int main(void){
    printf("Global %d \n", gVariavelGlobal);
    teste();
    teste();
    
}
void teste(void){
    int variavel =2;
    variavel*= 2;
    static int variavelestatica = 2;
     variavelestatica *= 2;
     gVariavelGlobal *= 2;
    printf("Local Automatica: %d\n", variavel);
    printf("Estatica: %d \n", variavelestatica);
    printf("Variavel global: %d \n", gVariavelGlobal);
}

