#include <stdio.h>
#include <stdlib.h>
#include <time.h>

 int somarLinha(int m[][3],int linha,int colunas){

    int soma = 0,c;


    for(c=0;c<colunas;c++){
        soma += m[linha][c];

    }
    return soma;
 }



 void imprimirMatriz(int m[][3],int linhas,int colunas){
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
    int tam = 3;
    int l,c,mat[tam][tam];

    srand(time(NULL));

    for(l = 0; l<tam;l++){
        for(c = 0; c<tam;c++){
            mat[l][c] = 10 + rand() % 90;
        }

    }

    printf("Soma da linha 0 : %d\n",somarLinha(mat,0,tam));

    imprimirMatriz(mat,tam,tam);

    somarLinha(mat,tam,tam);


    return 0;
}
