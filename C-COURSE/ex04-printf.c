#include <stdio.h>

void main(){
    // caracteres
    char nome_da_variavel = 'a'; // -127 a 127
    unsigned char nome_da_variavel1 = 'a'; // 0 a 256

    // imprimir
    printf("%c\n", nome_da_variavel1);
    unsigned // nao deixa atribuir valor negativo a variavel e pode ser usado no char e int

    // numeros inteiros
    short int nome_da_variavel2 = 1;
    int nome_da_variavel3 = 2;
    long int nome_da_variavel4 = 3;

    // imprimir
    printf("%i\n", nome_da_variavel2);
    printf("%i\n", nome_da_variavel3);
    printf("%lu\n", nome_da_variavel4);

    // numeros reais
    float nome_da_variavel5 = 1.1f;
    double nome_da_variavel6 = 1.2;
    long double nome_da_variavel7 = 3.9e-23L;

    // imprimir
    printf("%f\n", nome_da_variavel5);
    printf("%f\n", nome_da_variavel6);
    printf("%e\n", (double)nome_da_variavel7);

    // impressao de uma string
    char nome[] = "Caio";
    printf("%s\n", nome);

    // impressao de um endereço de memoria
    int a;
    printf("%x", &a);

    // constante nomeada
    const int MAX = 100; // variavel constante é algo que nao podera ser auterado no decorrer do codigo, gerando erro

    printf("%i\n", MAX);

    return 0;
}