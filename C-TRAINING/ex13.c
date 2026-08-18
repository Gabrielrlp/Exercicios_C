#include <stdio.h>

int main(){

    float real, cota, dolar;
    printf("Digite o valor em reais: ");
    scanf("%f", &real);

    printf("Digite a cotacao do dolar: ");
    scanf("%f", &cota);

    dolar = real * cota;

    printf("O valor de R$%f com a cotação de %f, fica %f em dolar", real, cota, dolar);

    return 0;
}