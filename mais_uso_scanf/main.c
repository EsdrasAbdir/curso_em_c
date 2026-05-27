#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade;
    float peso, altura;
    printf("\n\tDigite sua idade, seu peso,sua altura:");
    scanf("%d%f%f",&idade,&peso,&altura);
    printf("\n\tIdade: %d\tPeso: %f\tAltura: %f",idade,peso,altura);
    return 0;
}
