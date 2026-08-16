#include <stdio.h>

int main(){

    float p1, p2, p3, resul;

    printf("Digite o valor do primeiro produto: ");
    scanf("%f", &p1);

    printf("Digite o valor do segundo produto ");
    scanf("%f", &p2);

    printf("Digite o valor do terceiro produto: ");
    scanf("%f", &p3);

    resul = p1 + p2 + p3;

    printf("O valor total da compra e: %f", resul);

    return 0;
}