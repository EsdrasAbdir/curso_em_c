#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    int totalSegundos;
    int horas,minutos,segundos;
    int resto;


    setlocale(LC_ALL,"Portuguese");
//    Faça um programa para ler do teclado uma quantidade de segundos e imprimir na tela
//a conversão para horas, minutos e segundos.
//Exemplo:
//Entrada: 3672
//Saída: 1:1:12
    printf("\tDigite a quantidade de segundos para ter a hora,minutos e segundos: \n");
    scanf("%d",&totalSegundos);

    horas = totalSegundos / 3600;
    resto = totalSegundos % 3600;
    minutos = resto / 60;
    segundos = resto % 60;

    printf("\tDeu %d:%d:%d\n",horas,minutos,segundos);
    return 0;
}
