#include <stdio.h>
#include <stdlib.h>

int main(){

   int *x;
    x = calloc(1,sizeof(int));
    

   if(x){
    printf("\n\tMemoria alocada com sucesso\n");
    *x = 10;
    printf("\n\tValor de x: %d\n",*x); 
   }

   else{
    printf("\n\tErro ao alocar memoria\n");
    return 1;
   }

    return 0;
}