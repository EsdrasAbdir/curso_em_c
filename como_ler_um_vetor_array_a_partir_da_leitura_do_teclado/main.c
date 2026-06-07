#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int i, num[15];

    for (i = 0;i<15;i++){
        printf("\tDigite o valor da posição %d\n",i);
        scanf("%d",&num[i]);

    }

    printf("\n\t");
    for (i=0;i<15;i++)
        printf("%d, ",num[i]);
    return 0;
}
