#include <stdio.h>
#include <stdlib.h>

int main()
{
    char palavras[10];


    printf("\tDigite uma frase: \n");

    scanf("%10[^\n]",palavras); //sem necessidade do & comercial por ser um ponteiro.

    printf("\n\t%s\n\n",palavras);

    return 0;
}
