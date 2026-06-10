#include <stdio.h>
#include <stdlib.h>


    int TamanhoString(char frase[100]){
        int tam = 0;

        while(frase[tam] != '\0'){
            tam++;
        }

        return tam;

    }


int main()
{

    char frase[] = {"batatinha quando nasce..."};

    printf("\n\t%d\n",TamanhoString(frase));

    return 0;
}
