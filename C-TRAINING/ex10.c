// Faça um programa que receba a idade de uma pessoa e informe sua classificação:

// De 0 a 12 anos: criança
// De 13 a 17 anos: adolescente
// De 18 a 59 anos: adulto
// 60 anos ou mais: idoso

#include <stdio.h>

int main(){
    
    int idd; 

    printf("Digite sua idd: ");
    scanf("%d", &idd);

    if (idd >= 0 && idd <= 12)
    {
        printf("Criança");
    }
    else if (idd >= 13 && idd <= 17)
    {
        printf("adolescente");
    }
    else if (idd >= 18 && idd <= 59)
    {
        printf("adulto");
    }
    else if (idd >= 60)
    {
        printf("idoso");
    }
    else{
        printf("idade invalida");
    }

    return 0;
}