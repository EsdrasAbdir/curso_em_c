#include <stdio.h>
#include <stdlib.h>


int* alocarM(int qtd){
    int *x = malloc(sizeof(int) * qtd);

    return x;
}


void imprimir(int *v,int tam){
    int i;
    printf("\n\tMemoria alocada com sucesso\n");
        printf("\n");
        for(i=0;i<tam;i++){
            printf("%d ", *(v + i));
        }
}



int main(){

    int *vet,i, tam =10;
    vet = alocarM(tam);


    if(vet) {
        imprimir(vet,tam);
    }

    else{
        printf("\n\tErro ao alocar memoria\n");
        return 1;
    }


    free(vet);
    return 0;
}