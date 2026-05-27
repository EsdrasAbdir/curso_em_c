#include <stdio.h>
#include <stdlib.h>

int main()
{

    char sexo = 'a';
    printf("\n\tDigite[m]asculino ou [f]eminino:\n");

    sexo = getc(stdin);

    printf("\n\tSexo: %c",sexo);

    return 0;
}
