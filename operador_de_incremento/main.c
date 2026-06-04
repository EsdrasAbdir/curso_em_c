#include <stdio.h>
#include <stdlib.h>

int main()
{

    int y,x = 35;

    y = ++x; // incremento a esquerda, valor 36 de ambos. incremento a direita de x é x(36) e y(35).
            //  mesma lógica ao decremento.
    printf("\n\tValor de y : %d\tValor de x : %d\n",y,x);
    return 0;


}
