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