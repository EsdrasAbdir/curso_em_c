#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;


    while(x <1 || x>99){
    printf("Digite um valor entre 1 e 99\n");
    scanf("%d",&x);

    }

    printf("Valor digitado : %d\n",x);
    return 0;
}
