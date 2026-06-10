#include <stdio.h>
#include <stdlib.h>


    void imprimirString(char frase[]){
        int i = 0;


        while(frase[i] != '\0'){
            printf("%c",frase[i]);
            i++;
        }
    }


int main()
{
    char frase[100] = {"Vamos aprender programacao com a linguagem C!"};

    imprimirString(frase);

    return 0;
}
