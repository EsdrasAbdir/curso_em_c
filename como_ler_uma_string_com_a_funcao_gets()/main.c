#include <stdio.h>
#include <stdlib.h>

int main()
{
    char palavras[50];

    printf("Tamanho em Bytes: %zu\n",sizeof(palavras));
    printf("Digite seu nomes\n");
    gets(palavras);//inseguro por estouro do buffer
    printf("\n\t%s\n",palavras);
    return 0;
}
