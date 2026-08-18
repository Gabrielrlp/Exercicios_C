#include <stdio.h>

int main(){

    int n, n100, n50, n20, n10, n5, n2, n100r, n50r, n20r, n10r, n5r, n2r;

    printf("Digite um valor inteiro em dinheiro: ");
    scanf("%d", &n);

    n100 = n / 100;
    n50 = n / 50;
    n20 = n / 20;
    n10 = n / 10;
    n5 = n / 5;
    n2 = n / 2;

    n100r = n % 100;
    n50r = n % 50;
    n20r = n % 20;
    n10r = n % 10;
    n5r = n % 5;
    n2r = n % 2;

    printf("R$%d em notas de 100 seria %d notas com o resto R$%d\n", n, n100, n100r);

    printf("R$%d em notas de 50 seria %d notas com o resto R$%d\n", n, n50, n50r);

    printf("R$%d em notas de 20 seria %d notas com o resto R$%d\n", n, n20, n20r);

    printf("R$%d em notas de 10 seria %d notas com o resto R$%d\n", n, n10, n10r);

    printf("R$%d em notas de 5 seria %d notas com o resto R$%d", n, n5, n5r);

    printf("R$%d em notas de 2 seria %d notas com o resto R$%d\n", n, n2, n2r);

    return 0;
}