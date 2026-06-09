#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"Portuguese");

    char palavra[100] = {"Abacate"};

    char *letra;

    letra = strchr(palavra,'a');

    if(letra){
        printf("\t%c\n",*letra);
        printf("\t%c\n",*(letra + 1));
        printf("\t%c\n",*(letra + 2));
    }
    else{
        printf("\tCaracter não encontrado\n");

    }



        letra = strrchr(palavra,'a');

    if(letra){
        printf("\t%c\n",*letra);
        printf("\t%c\n",*(letra + 1));
        printf("\t%c\n",*(letra + 2));
    }
    else{
        printf("\tCaracter não encontrado\n");

    }


    return 0;
}
