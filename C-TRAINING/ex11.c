#include <stdio.h>

int main(){
    int a, b, c;

    printf("Digite um numero: ");
    scanf("%d", &a);

    b = a - 1;
    c = a + 1;

    printf("O valor e: %d\n\
    O antecessor e: %d\n\
    O sucessor e: %d", a, b, c);

    return 0;
}