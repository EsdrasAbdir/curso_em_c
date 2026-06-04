#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
//    Como imprimir um triângulo de asteriscos
//    com espaços à esquerda?

    setlocale(LC_ALL,"Portuguese");

    printf("\t    *\n");
    printf("\t   **\n");
    printf("\t  ***\n");
    printf("\t ****\n");
    printf("\t*****\n");

    return 0;
}
