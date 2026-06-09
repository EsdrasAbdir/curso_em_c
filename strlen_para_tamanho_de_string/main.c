#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{

    char palavras[500];
    int tam;
    int i = 0;
    printf("Digite a frase\n");
//    scanf("%500[^\n]",palavras);

    fgets(palavras,500,stdin);

    while(palavras[i] != '\n'){
        i++;
    }
    palavras[i] = '\0';

    tam = strlen(palavras);

    printf("\tTamanho = %d\n",tam);

    return 0;
}
