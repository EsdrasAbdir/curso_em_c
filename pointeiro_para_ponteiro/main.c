#include <stdio.h>
#include <stdlib.h>

int main(){

    int A = 10,*B,**C;

    B = &A;
    C = &B;
    printf("\n\tEndereço de A: %p\tConteudo de A : %d\n",&A, A);
    printf("\n\tEndereço de B: %p\tConteudo de B : %x\tConteudo apontado por B : %d\n",&B, B, *B);
    printf("\n\tEndereço de C: %p\tConteudo de C : %x\tConteudo apontado por C : %d\n",&C, C,**C);
    return 0;

    
}