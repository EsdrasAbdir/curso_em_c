#include <stdio.h>
#include <stdlib.h>

    int fibonacci (int valor){
        if(valor <= 1){
            return 0;
        }
        else if(valor == 2) {
            return 1;
        }
        else
            return fibonacci(valor-1) + fibonacci(valor-2);

    }



int main()
{

    int valor;


    printf("Digite o valor que deseja calcular:\n");
    scanf("%d",&valor);
    printf("%d",fibonacci(valor));

    return 0;

}
