#include <stdio.h>
#include <stdlib.h>
#include <string.h>






int main()
{

    char frase[100] = {"Batatinha quando nasce espalha rama pelo chao... "};

    char str[100] = {"espalha"};
    char *ponteiro;

    ponteiro = strstr(frase,str);


    if(ponteiro){
        printf("\t\n%c\n",*ponteiro);
        printf("\t\n%c\n",*(ponteiro + 1));
        printf("\t\n%c\n",*(ponteiro + 2));
        printf("\t\n%c\n",*(ponteiro + 3));
        printf("\t\n%c\n",*(ponteiro + 4));
        printf("\t\n%c\n",*(ponteiro + 5));
        printf("\t\n%c\n",*(ponteiro + 6));
    }

    else {
        printf("Substring não encontrada");
    }
    return 0;
}
