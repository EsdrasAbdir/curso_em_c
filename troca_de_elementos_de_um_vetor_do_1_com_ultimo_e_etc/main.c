#include <stdio.h>
#include <stdlib.h>

int main()
{
//     Escrever um programa que lê um vetor N de tamanho 20 e o imprime na tela. Em
//seguida, troque o 1º elemento com o último, o 2º com o penúltimo, … até o 10º com o 11º. Imprima
//o vetor N modificado.

    int i ,a = 0,f=19 ,vetor[20],copia;


    for(i=0;i<20;i++){
        printf("Digite o valor do vetor[%d]\n",i);
        scanf("%d",&vetor[i]);
    }

    for(i=0;i<20;i++){
        printf("%d, ",vetor[i]);
    }

    printf("\t\n\n");
    while(a<f){
        copia = vetor[a];
        vetor[a] = vetor[f];
        vetor[f] = copia;
        a++;
        f--;

    }

        for(i=0;i<20;i++){
        printf("%d, ",vetor[i]);
    }


    return 0;
}
