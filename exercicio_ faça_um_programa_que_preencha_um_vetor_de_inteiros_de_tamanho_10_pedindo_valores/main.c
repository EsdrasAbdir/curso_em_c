#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
//     Faça um programa que preencha um vetor de inteiros de tamanho 10 pedindo valores
//ao usuário. Em seguida, calcule e salve num segundo vetor o quadrado de cada elemento do
//primeiro vetor. Por fim, imprima os dois vetores

    setlocale(LC_ALL,"Portuguese");
    int i, vetor[10],vetorb[10];

    for(i=0;i<10;i++){
        printf("Digite o valor para ficar na posição %d\n",i);
        scanf("%d",&vetor[i]);
    }

    for(i=0;i<10;i++){
        printf("%d, ",vetor[i]);

    }

    printf("\n");

    for (i=0;i<10;i++){
        vetorb[i] = (vetor[i] * vetor[i]);
    }

    for(i=0;i<10;i++){
        printf("%d, ",vetorb[i]);

    }



    return 0;
}
