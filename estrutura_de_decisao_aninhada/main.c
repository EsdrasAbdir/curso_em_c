#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
+
    setlocale(LC_ALL,"Portuguese");
    int x = -1;
    if(x>0){
        printf("\tPositivo\n\n");
        if(x < 100){
            printf("Valor entre 1 e 99\n");
        }
        else{
            printf("Valor maior ou igual a 100\n");
        }

    }
    else {
        if(x == 0){
            printf("\tValor é zero\n");
            }
        else {
            printf("\tValor é negativo\n");
        }
    }



    return 0;
}
