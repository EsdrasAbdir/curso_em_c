#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1,num2;


printf("\n\tDigite dois valores inteiros: :\n ");

    scanf("%d",&num1);
    scanf("%d",&num2);

    printf("\n\tSoma = %d + %d = %d\n",num1,num2,num1+num2);
    printf("\n\tSubtracao = %d - %d = %d\n",num1,num2,num1-num2);
    printf("\n\tMultiplicacao = %d * %d = %d\n",num1,num2,num1*num2);
    printf("\n\tDivisao =%d / %d = %d\n",num1,num2,num1/num2);
    return 0;
}
