#include <stdio.h>
#include <stdlib.h>

int main(){

    int *idade;
    idade = malloc(sizeof(int));

    if(idade){
        printf("\n\tMemoria alocada com sucesso\n");
        printf("\n\tIdade : %d\n",*idade);
        *idade = 35;
        printf("\n\tIdade : %d\n",*idade);
    }
    else{
        printf("\n\tErro ao alocar memoria\n");
        return 1;
    }

    free(idade);

    return 0;
}