#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{

    setlocale(LC_ALL,"Portuguese");
    int num;
    printf("\tDigite um número para ver se ele é divisível por 2, 3 ou 5\n: ");
    scanf("%d",&num);

    if(num % 2 == 0){
        printf("\tO número %d é divisível por 2\n",num);
    }
    if (num % 5 == 0){
        printf("\tO número %d é divisível por 5\n",num);
    }
    if (num % 3 == 0) {
 printf("\tO número %d é divisível por 3\n",num);
    }
    return 0;
}
