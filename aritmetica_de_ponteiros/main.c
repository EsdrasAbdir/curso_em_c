#include <stdio.h>
#include <stdlib.h>


void imprimir(int *v,int tam){

    int i;
    printf("\n\t");

    for(i = 0; i<tam;i++){

        printf("%d", *(v + i));
        printf("\n");
    }
}



int main(){


int vet[9] = {10,20,30,40,50,60,70,80};

imprimir(vet,9);

// printf("\n\tt0 = %d\n",*vet);
// printf("\n\tt0 = %d\n",*(vet + 1));
// printf("\n\tt0 = %d\n",*(vet + 2));




}