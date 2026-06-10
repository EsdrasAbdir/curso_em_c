#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
int main()
{

    setlocale(LC_ALL,"Portuguese");

    char frase[100] = {"Batatinha Quando Nasce Espalha Rama Pelo Chao"};

    printf("\n\tFrase original : %s\n",frase);

    strupr(frase);

    printf("\n\tFrase maiúscula : %s\n",frase);

    strlwr(frase);

    printf("\n\tFrase minúscula : %s\n",frase);
    return 0;
}
