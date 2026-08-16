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