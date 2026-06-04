#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){

//Crie um programa em C que permita fazer a conversão cambial entre Reais e Dólares.
//Considere como taxa de câmbio US$1,0 = R$5,30. Leia um valor em Reais e mostre o
//correspondente em Dólares


    setlocale(LC_ALL,"Portuguese");

    double reaisParaConverterEmDolar;
    double ValorConvertidoEmDolar;
    double taxaCambialParaReal = 5.30;
    printf("\tDigite o valor em reais para ser convertido em dólar : \n");
    scanf("%lf",&reaisParaConverterEmDolar);
    ValorConvertidoEmDolar = reaisParaConverterEmDolar / taxaCambialParaReal;
    printf("O valor de %.2lf em reais para dólar fica %.2lf",reaisParaConverterEmDolar,ValorConvertidoEmDolar);
    return 0;
}
