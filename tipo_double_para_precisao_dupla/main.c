#include <stdio.h>
#include <stdlib.h>

int main()
{

    long double x = 3.141519; //possível colocar um long.


    printf("\n\tValor de x = %Lf\n",x);
    __mingw_printf("\n\tValor de x = %Le\n",x);
    printf("\n\tTamanho de um double = %d\n",sizeof x);
    return 0;
}
