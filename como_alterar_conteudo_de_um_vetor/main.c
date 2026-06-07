#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i,valores[5] = {10,20,30,40,50};


    for(i = 0;i<5;i++){
        valores[i] = valores[i] * 2;

    }


    for(i=0;i<5;i++){
    printf("%d, ",valores[i]);

    }

    return 0;
}
