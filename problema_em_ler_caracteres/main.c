#include <stdio.h>
#include <stdlib.h>

int main()
{
    char sexo;
    int idade;
    float peso,altura;

    printf("\n\tDigite sua idade, peso,altura, sexo [f] ou [m], respectivamente\n");
    scanf("%d%f%f%c",&idade,&peso,&altura,&sexo);
    printf("\n\tSexo: %d\n\tIdade: %d\n\tPeso:%f\n\tAltura:%f",sexo,idade,peso,altura);


    return 0;
}
