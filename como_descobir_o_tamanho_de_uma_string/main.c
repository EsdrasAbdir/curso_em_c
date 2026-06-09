#include <stdio.h>
#include <stdlib.h>

int main()
{
    char palavras[500];
    int i = 0;

    printf("Digite uma frase:\n");
//    scanf("%500[^\n]",palavras);
    fgets(palavras,500,stdin);

    while(palavras[i]!='\n'){
        i++;
    }

    palavras[i] = '\0';
    i= 0;




    while(palavras[i] != '\0'){
        printf("\t i = %d\t%c\t%d\n",i,palavras[i],palavras[i]);
        i++;

    }

    printf("\n\t\tI = %d\n",i);



    return 0;
}
