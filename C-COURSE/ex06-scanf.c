#include <stdio.h>

int main(){
    
    int idade;
    float altura;
    char letra_favorita;

    printf("Qual a sua idade?\n");
    scanf(" %i", &idade);
    printf("Qual sua altura?\n");
    scanf(" %f", &altura);
    printf("Qual sua letra favorita?\n");
    scanf(" %c", &letra_favorita);

    printf("A sua altura e: %i\n"\
    "A sua altura e: %f\n"\
    "A sua letra favorita e: %c\n", idade, altura, letra_favorita);

    return 0;    
}