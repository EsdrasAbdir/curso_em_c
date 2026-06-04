#include <stdio.h>
#include <stdlib.h>

int main()
{

    int valor1, valor2,copia;
    printf("\tDigite os dois valores inteiros que quer armazenar: \n");
    scanf("%d%d",&valor1,&valor2);

    copia = valor1; // 10
    valor1 = valor2; // 15;
    valor2 = copia;
    printf("\nValor 1 = %d \tValor 2 = %d",valor1,valor2);



    return 0;
}
