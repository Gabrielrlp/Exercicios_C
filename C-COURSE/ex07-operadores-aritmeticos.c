#include <stdio.h>

int main(){
    // operadores artmeticos
    int a = 1, b = -2, c = 3;

    // positivo
    printf("resultado: %i\n", +a);
    printf("resultado: %i\n", +b);

    // negativo
    printf("resultado: %i\n", -a);
    printf("%i\n", -b);

    // adicao
    printf(" %i\n", a + b);

    // subtração
    printf(" %i\n", a - b);

    // multiplicacao
    printf(" %i\n", 2 * 5);

    // divisao
    printf(" %i\n", b / a);

    // modulo (resto da divisao)
    printf(" %i\n", c % 2);

    return 0;
}