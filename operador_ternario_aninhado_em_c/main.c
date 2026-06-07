#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = -10;
    x > 15 ? printf("\tVerdadeiro\n"):x < 0?printf("\tNegativo\n"):printf("\tPositivo ou zero.\n");

    return 0;
}
