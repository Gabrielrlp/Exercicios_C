// Faça um programa que receba uma temperatura em Celsius e converta para Fahrenheit usando a fórmula:
// F = (C × 9 / 5) + 32

#include <stdio.h>

int main(){

    int c,f;

    printf("Digite a temperatura em graus: ");
    scanf("%d", &c);

    f = (c * 9 / 5) + 32;

    printf("A tempertura em Fahrenheit e: %d", f);

    return 0;
}