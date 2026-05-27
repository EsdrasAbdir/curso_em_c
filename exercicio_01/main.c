#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Exercício 1. Como ler do teclado sexo,idade,peso e altura do usuário?

    char sexo;
    int idade;
    float peso,altura;

    printf("\n\tDigite seu sexo [m]asculino ou [f]eminino, idade , peso e altura, respectivamente.\n");

    scanf("%c%d%f%f",&sexo,&idade,&peso,&altura);

    printf("\n\tSexo : %c\n\tidade: %d\n\tPeso: %f\n\tAltura:%f",sexo,idade,peso,altura);
    return 0;
}
