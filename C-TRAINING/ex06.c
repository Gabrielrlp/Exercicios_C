#include <stdio.h>

int main(){

    int s;
    float m,h;

    printf("Digite a quantidade de segundos: ");
    scanf("%d", &s);

    m = s / 60;
    h = m / 60;

    printf("A quantidade de segundos e: %d\n\
    A quantidade de minutos e: %f\n\
    A quantidade de horas e: %f", s, m, h);

    return 0;
}