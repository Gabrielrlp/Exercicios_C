#include <stdio.h>

int main(){
    int a = 5, b = 5, c = 5, d = 5;

    //  pre incremento 
    printf("Pre-incremento: %d \n", ++a);
    // a = a + 1

    //  pos incremento 
    printf("Pos-incremento: %d \n", b++);
    // a = a + 1

    //  pre decremento 
    printf("Pre-decremento: %d \n", --c);

    //  pos decremento 
    printf("Pos-decremento: %d \n", d--);

    printf("Valores finais: %i %i %i %i", a, b, c, d);
    
    return 0;
}