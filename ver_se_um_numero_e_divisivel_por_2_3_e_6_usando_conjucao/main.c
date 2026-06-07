#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"Portuguese");
    int numeroDigitado;
    printf("\tDigite um número inteiro e veremos se ele é divisível por 2,3 e 6:\n");
    scanf("%d",&numeroDigitado);

    if (numeroDigitado % 2 == 0 && numeroDigitado % 3 ==0 && numeroDigitado % 6 ==0){
        printf("\tO %d é divisível por 2,3 e 6\n",numeroDigitado);
    }
    else{
        printf("\tNúmero não divisível por 2,3 e 6\n");
    }


    return 0;
}
