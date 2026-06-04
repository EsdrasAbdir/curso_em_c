#include <stdio.h>
#include <stdlib.h>
#include <locale.h>;
int main()
{

    int valor1, valor2,copia;
    printf("\tDigite os dois valores inteiros que quer armazenar: \n");
    scanf("%d%d",&valor1,&valor2);

    valor1 = valor1 + valor2;
    valor2 = valor1 - valor2;
    valor1 = valor1 - valor2;
    printf("\nValor 1 = %d \tValor 2 = %d",valor1,valor2);


    return 0;
}
