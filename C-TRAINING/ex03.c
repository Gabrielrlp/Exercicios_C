#include <stdio.h>

int main(){
    float n1, n2, n3, media;
    int alunos = 3;

    printf("Digite a primeira nota: ");
    scanf("%f", &n1);

    printf("Digite a segunda nota: ");
    scanf("%f", &n2);

    printf("Digite a terceira nota: ");
    scanf("%f", &n3);

    media = (n1 + n2 + n3) / alunos;

    printf("A media da nota dos alunos e: %f", media);

    return 0;
}