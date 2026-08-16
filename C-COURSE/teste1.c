#include <stdio.h>

int main(){
    float n1, n2, soma;

    printf("Digite um numero: ");
    scanf("%f", &n1);
    printf("Digite outro numero: ");
    scanf("%f", &n2);

    soma = n1 + n2;

    printf("O resultado e: %f\n", soma);

    if (soma > 50 && soma < 100)    
    {
        printf("ricao\n");
    }
    else if (soma < 0)
    {
        printf("nmr invalido\n");
    }
    else if (soma > 100)
    {
        printf("nmr mt grande\n");
    }
    else
    {
        printf("pobraozao fudidao\n");
    }
    
    if (soma == 1 || soma == 2)
    {
        printf("Nmr invalido\n");
    }
    else
    {
        printf("Nmr dentro dos parametros\n");
    }
    
    return 0;
}