#include <stdio.h>
#include <stdlib.h>

int main(){

    int *x,*y;

    x = malloc(2 * sizeof(int));
    y = calloc(2,sizeof(int));


    if(x && y){

        printf("\n\tMemoria alocada com sucesso\n"); 
        printf("\tmalloc = %d %d\n",*(x+1));
        printf("\tcalloc = %d %d\n",*y, *(y+1));
    }

    else{
        printf("\n\tErro ao alocar memoria\n");
        return 1;


    }


    return 0;
}