#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{

    char frase[100] ={"Batatinha quando nasce espalha rama pelo chao."};
    char *pt;

    pt = strtok(frase," ");



    while(pt != NULL){
         printf("\n\t%s\n",pt);
         pt = strtok(NULL, " ");

    }

    return 0;
}
