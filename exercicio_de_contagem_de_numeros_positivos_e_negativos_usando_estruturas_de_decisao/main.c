#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{

    setlocale(LC_ALL,"Portuguese");


    //para melhorar, importante colocar o 0 como elemento neutro;

//    Exercício 2: Escreva um programa em C que lê 5 números inteiros, um por vez. Conte quantos
//destes valores são negativos e quantos são positivos. Ao final, imprima na tela a quantidade de
//números negativos e positivos.


    int num1,num2,num3,num4,num5;
    int positivos = 0,negativos = 0;

    printf("\tDigite 5 números inteiros\n");
    printf("\tDigite o primeiro número\n");
    scanf("%d",&num1);
     printf("\tDigite o segundo número\n");
    scanf("%d",&num2);
     printf("\tDigite o terceiro número\n");
    scanf("%d",&num3);
     printf("\tDigite o quarto número\n");
    scanf("%d",&num4);
     printf("\tDigite o quinto número\n");
    scanf("%d",&num5);

    if(num1 > 0){
            positivos ++;
            printf("\t%d é positivo\n",num1);
    }
    else{
        negativos ++;
        printf("\t%d é negativo.\n",num1);
    }



    if(num2 > 0){
            positivos ++;
            printf("\t%d é positivo\n",num2);
    }
    else{
        negativos ++;
        printf("%d é negativo.\n",num2);
    }


        if(num3 > 0){
            positivos ++;
            printf("\t%d é positivo\n",num3);
    }
    else{
        negativos ++;
        printf("%d é negativo.\n",num3);
    }

        if(num4 > 0){
            positivos ++;
            printf("\t%d é positivo\n",num4);
    }
    else{
        negativos ++;
        printf("%d é negativo.\n",num4);
    }

        if(num5 > 0){
            positivos ++;
            printf("\t%d é positivo\n",num5);
    }
    else{
        negativos ++;
        printf("%d é negativo.\n",num5);
    }


    printf("foram %d postivos\nForam %d negativos",positivos,negativos);



    return 0;
}
