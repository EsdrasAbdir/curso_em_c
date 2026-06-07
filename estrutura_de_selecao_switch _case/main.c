#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{

    setlocale(LC_ALL,"Portuguese");
    int cod = 2;

    switch(cod){
        case 1:
            printf("\tJaneiro\n\n");
            break;
        case 2:
            printf("\tFevereiro\n\n");
            break;
        case 3:
            printf("\tMarço\n\n");
            break;
        default:
            printf("\tValor inesperado.\n\n");
            break;

    }

    return 0;
}
