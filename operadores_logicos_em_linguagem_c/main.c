#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{

    setlocale(LC_ALL,"Portuguese");

    int x = 5;

    printf("\t10 < 15 --> %d\n",10<15);
    // output 1 significa que é verdadeiro.
    printf("\t10 > 15 --> %d\n",10>15);
    // output 0 significa que é falso.
    printf("\t10 <=15 --> %d\n",10<=15);
    // output 1.
    printf("\t10 >= 15 --> %d\n",10>=15);
    // output 0.
    printf("\t10 == 15 --> %d\n",10==15);
    // output 0.
    printf("\t10 != 15 --> %d\n",10!=15);
    // output 1.

    // operadores iguais a demais linguagens de programação.

    return 0;
}
