// Faça um programa que receba dois números inteiros e mostre a soma, a subtração, a multiplicação e a divisão entre eles.

#include <stdio.h>

int main(){

    int a, b, soma, sub, multi, div;

    printf("Digite o primerio numero: ");
    scanf("%d", &a);

    printf("Digite o segundo numero: ");
    scanf("%d", &b);

    soma = a + b;
    sub = a - b;
    multi = a * b;
    div = a / b;

    printf("Resultados:\n");
    printf("Soma: %d\n", soma);
    printf("Subtracao: %d\n", sub);
    printf("Multiplicacao: %d\n", multi);
    printf("Divisao: %d", div);

    return 0;
}