#include <stdio.h>
#include <stdlib.h>

int main()
{
    char sexo;
    printf("\n\tDigite [m]asculino ou [f]eminino\n");

    sexo = fgetc(stdin);

    printf("\n\tSexo: %c",sexo);

    return 0;
}
