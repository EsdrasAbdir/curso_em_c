#include <stdio.h>
#include <stdlib.h>

int main()
{
    char palavras[500];
    int i = 0;

    printf("Digite uma frase: \n");
//    fgets(palavras,500,stdin);
    scanf("%500[^\n]",palavras);
    printf("\n\t%s\n",palavras);

    // '\0' fim da string

    while(palavras[i] != '\0'){
        printf("\t%d = %c\n",i,palavras[i]);
        i++;
    }


    return 0;
}
