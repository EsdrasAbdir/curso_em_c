#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
//    Uma empresa contrata um encanador a R$ 45,00 por dia. Faça um programa que
//solicite o número de dias trabalhados pelo encanador e imprima a quantia líquida que deverá ser
//paga, sabendo que são descontados 8% para imposto de renda.

    setlocale(LC_ALL,"Portuguese");

    int diasTrabalhados;
    double salarioLiquidoDoEncanador;
    double impostoDeRenda = 8.0/100;
    double desconto;
    double salarioBrutoPorDiaDoEncanador = 45.00;
    printf("\tDigite o número de dias trabalhados pelo encanador para saber o valor a ser pago descontando o imposto de renda: \n");
    scanf("%d",&diasTrabalhados);
    desconto = (salarioBrutoPorDiaDoEncanador * diasTrabalhados) * impostoDeRenda;
    salarioLiquidoDoEncanador = salarioBrutoPorDiaDoEncanador * diasTrabalhados - desconto;
    printf("O salário líquido do funcionário será %.2lf",salarioLiquidoDoEncanador);
    return 0;
}
