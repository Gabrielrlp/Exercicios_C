// Faça um programa que peça ao usuário dois números inteiros e mostre na tela a soma deles.

#include <stdio.h>

int main(){

    float a, b, soma;

    printf("Digite o primeiro numero: ");
    scanf(" %f", &a);

    printf("Digite o segundo numero: ");
    scanf(" %f", &b);

    soma = a + b;

    printf("Resultado: %f", soma);
    
    return 0;
}