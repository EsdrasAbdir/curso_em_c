#include <stdio.h>
#include <stdlib.h>
#include <time.h>

    void imprimirMatriz(int m[][5],int linhas,int colunas){
        int i,j;

        for(i=0; i<linhas;i++){
            for(j=0;j<colunas;j++){
               printf("%d, ",m[i][j]);
            }
            printf("\n");
        }

    }





int main()
{
    int tam = 5;
    int l,c,mat[tam][tam];

    srand(time(NULL));

    for(l = 0; l<tam;l++){
        for(c = 0; c<tam;c++){
            mat[l][c] = 10 + rand() % 90;
        }

    }

    imprimirMatriz(mat,tam,tam);


    return 0;
}
