#include <stdio.h>
#include <stdlib.h>

int main()
{

    char nomes[5][100];
    int i;

    for(i = 0; i<5;i++){
       printf("\n\tDigite o nome: \n");
       scanf("%100[^\n]",nomes[i]);
       getchar();

    }

    for(i = 0;i<5;i++){
        printf("\n\tLinha %d: %s \n",i,nomes[i]);
    }


    return 0;
}
