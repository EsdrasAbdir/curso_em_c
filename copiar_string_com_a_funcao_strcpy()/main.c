#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char palavra1[100] = {"Abacate e uva"};
    char palavra2[100];


    printf("\n\tpalavra1: %s\n",palavra1);
    printf("\n\tpalavra2: %s\n",palavra2);

    strcpy(palavra2,palavra1);


    printf("\n\tpalavra1: %s\n",palavra1);
    printf("\n\tpalavra2: %s\n",palavra2);

    return 0;
}
