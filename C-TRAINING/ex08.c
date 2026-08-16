// Faça um programa que receba dois números inteiros armazenados nas variáveis A e B. Depois, troque os valores entre elas, fazendo com que o valor de A passe para B e o valor de B passe para A.

#include <stdio.h>

int main(){
    int a, b, c; 

    printf("Digite o valor de A: ");
    scanf("%d", &a);
    printf("Digite o valor de B: ");
    scanf("%d", &b);

    printf("%d %d\n", a, b);

    c = a;
    a = b;
    b = c;
    
    printf("%d %d", a, b);

    return 0;
}