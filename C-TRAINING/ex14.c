#include <stdio.h>

int main(){

    float n1, n2, media;

    printf("Digite a primeiro nota: ");
    scanf("%f", &n1);
    
    printf("Digite a segunda nota: ");
    scanf("%f", &n2);

    media = n1 * n2;

    if (media >= 7 && media <= 10)
    {
        printf("Aprovado");
    }
    else if (media >= 5 && media <= 6.9)
    {
        printf("Recuperação");
    }
    else if (media >= 0 && media <= 4.9)
    {
        printf("Reprovado");
    }
    else
    {
        printf("Numero Invalido");
    }
    
    return 0;
}