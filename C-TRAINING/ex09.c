// Faça um programa que receba dois números e informe qual deles é maior. Caso os dois números sejam iguais, informe que eles possuem o mesmo valor.

#include <stdio.h>

int main(){
    int a, b; 

    printf("Digite o valor de A: ");
    scanf("%d", &a);
    printf("Digite o valor de B: ");
    scanf("%d", &b);

    if (a > b)
    {
        printf("O numero A e maior");
    }
    else
    {
        printf("O numero B e maior");
    }
    
    return 0;
}