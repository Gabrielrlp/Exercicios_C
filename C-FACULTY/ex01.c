#include <stdio.h>

int main(){

    char nome[30], curso[30], tel[50];
    
    printf("Digite seu nome: ");
    scanf("%s", nome);

    printf("Digite seu telefone: ");
    scanf("%s", tel);

    printf("Digite seu curso: ");
    scanf("%s", curso);

    printf("==============================\n");
    printf("      Cartão de visita        \n");
    printf("==============================\n");

    printf("Nome: %s\nTelefone: %s\nCurso: %s\n", nome, tel, curso);
    printf("==============================\n");

    return 0;
}