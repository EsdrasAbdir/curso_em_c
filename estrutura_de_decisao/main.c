#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"Portuguese");

    if (-5<0){
    printf("\tValor Negativo\n");
   }
    else{
        printf("\tValor Positivo\n");
    }



    return 0;
}
