#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL,"Portuguese");

    int i = 0;


    char palavra[20] = {"Olá mundo!"};

    palavra[15] = 'x';

    printf("%s\n",palavra);

    printf("\n");


    while(palavra[i] != '\0'){
        printf("%c",palavra[i]);
        i++;
    }


//    for(i=0;i<20;i++){
//        if(palavra[i] != '\0')
//            printf("%c",palavra[i]);
//        else
//            break;
//    }


    return 0;
}
