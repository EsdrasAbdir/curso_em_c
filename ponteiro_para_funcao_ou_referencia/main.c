#include <stdio.h>
#include <stdlib.h>
#include <string.h>

 void imprimir(int *idade){

    printf("\n\tIdade 1 : %d\n",*idade);
    *idade = 10;
    printf("\n\tIdade 2 : %d\n",*idade);
 }



int main(){

    int idade = 40;

    imprimir(&idade);

    printf("\n\tIdade de main: %d\n",idade);



}