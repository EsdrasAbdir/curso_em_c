#include <stdio.h>
#include <stdlib.h>

int main()
{
    char palavras[10];


    printf("Digite seu nome\n");
    fgets(palavras,10,stdin);
    printf("\n\t%s\n\n",palavras);
    return 0;
}
