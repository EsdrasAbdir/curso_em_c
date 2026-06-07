#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
//    Faça um programa que some o conteúdo de dois vetores de tamanho 25 e armazene o
//resultado em um terceiro vetor. Imprima os três vetores na tela

    int i, vetorA[25],vetorB[25],vetorC[25];

    srand(time(NULL));

    for(i=0;i<25;i++){
        vetorA[i] = rand() % 100;

    }
    for(i=0;i<25;i++){
        printf("Vetor A[%d] = %d, ",i,vetorA[i]);
    }

    printf("\n");


    for(i=0;i<25;i++){
        vetorB[i] = rand() % 100;

    }

     for(i=0;i<25;i++){
        printf("Vetor B[%d] = %d, ",i,vetorB[i]);
    }

    printf("\n");

    for(i=0;i<25;i++){
        vetorC[i] = vetorA[i] + vetorB[i];

    }

         for(i=0;i<25;i++){
        printf("Vetor C[%d] = %d, ",i,vetorC[i]);
    }

    return 0;
}
