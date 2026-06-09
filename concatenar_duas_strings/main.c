#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char vet[50] = {"Ola"};
    char vet2[50] = {" mundo"};

    printf("\t%s\n",vet);
    printf("\t%s\n",vet2);

    strcat(vet,vet2);



    printf("\t%s\n",vet);
    printf("\t%s\n",vet2);
    return 0;
}
