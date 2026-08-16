#include <stdio.h>

int main(){
    float a, l, area, p;

    printf("Digite a altura do retngulo: ");
    scanf("%f", &a);

    printf("Digite a largura do retngulo: ");
    scanf("%f", &l);

    area = a * l;
    p = (a * 2) + (l * 2);

    printf("A altura e: %f\n\
    A largura e: %f\n\
    A area e: %f\n\
    O perimetro e: %f", a, l, area, p);
}