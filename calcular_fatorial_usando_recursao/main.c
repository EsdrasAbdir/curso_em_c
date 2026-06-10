#include <stdio.h>
#include <stdlib.h>



    int fatorial(int num){
        if(num == 1){
            return 1;
        }
        else{
            return num * fatorial(num-1);

        }

    }




int main()
{
    int valor;

    printf("Digite um valor inteiro maior que zero:\n");
    scanf("%d",&valor);

    printf("%d ",fatorial(valor));

    return 0;
}
