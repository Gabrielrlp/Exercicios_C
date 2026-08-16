#include <stdio.h>

int main(){

    float salario, hrext, total, resul;
    int horas;

    printf("Digite o salario atual: ");
    scanf("%f", &salario);

    printf("Digite o valor das horas extras: ");
    scanf("%f", &hrext);

    printf("Digite a quantidade de hrs extras: ");
    scanf("%d", &horas);
 
    resul = hrext * horas;
    total = salario + resul;

    printf("O valor total do salario e: %f", total);

    return 0;
}