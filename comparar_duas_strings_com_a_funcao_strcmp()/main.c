#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char palavra1[100] = {"Cacau"};
    char palavra2[100] = {"Abobora"};

    int resultado;

    resultado = strcmp(palavra1,palavra2);
    // 0 = igual; -1 = primeira string é primeira na ocorrência e 1 a segunda string aparece primeiro na ordem alfabética.
    printf("\n\tResultado = %d \n",resultado);
    return 0;
}
