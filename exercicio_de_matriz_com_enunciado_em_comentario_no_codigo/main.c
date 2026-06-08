#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
//    Faça um programa que calcule e imprima a soma de todos os elementos de uma matriz
// 2 x 3
    setlocale(LC_ALL,"Portuguese");
    srand(time(NULL));

    int mat[2][3];

    int l,c,soma = 0;

    for(l=0;l<2;l++){
        for(c=0;c<3;c++){
           printf("Digite um número da mat[l][c]\n");
            scanf("%d",&mat[l][c]);
            }
    }

        for(l=0;l<2;l++){
        for(c=0;c<3;c++){
           printf("%d ",mat[l][c]);

            }
            printf("\n");
    }

    printf("\n\n");

    for(l=0;l<2;l++){
        for(c=0;c<3;c++){
        soma += mat[l][c];
        }
    }


    printf("%d\n",soma);
    return 0;
}
