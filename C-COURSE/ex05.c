#include <stdio.h>

void main(){
    // truncamento, apaga o numero depois da virgula, nao arredonda

   float b = 3.9;
   int i = (int)b;
   printf("%i\n", i);

    // ou direto na printagem
    
    int c = 3;
    printf("%f", (float)c);

    return 0;
}