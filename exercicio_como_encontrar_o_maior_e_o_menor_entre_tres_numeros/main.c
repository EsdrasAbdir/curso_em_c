#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"Portuguese");

    int num1,num2,num3;
    int maior, menor;

    printf("\tDigite 3 números inteiros: \n");
    scanf("%d%d%d",&num1,&num2,&num3);

    if (num1 >= num2 && num1 >= num3){
            maior = num1 ;
            printf("\tNúmero %d é maior\n",num1);
    }

    else if(num2 >= num1 && num2 >= num3){
            maior = num2;
            printf("\tNúmero %d é maior\n",num2);
    }

    else{
            maior = num3;
        printf("\tNúmero %d é maior\n",num3);
    }

    if (num1 <= num2 && num1 <= num3){
            menor = num1 ;
            printf("\tNúmero %d é menor\n",num1);
    }

    else if(num2 <= num1 && num2 <= num3){
            menor = num2;
            printf("\tNúmero %d é menor\n",num2);
    }

    else{
            menor = num3;
        printf("\tNúmero %d é menor\n",num3);
    }






    return 0;
}
