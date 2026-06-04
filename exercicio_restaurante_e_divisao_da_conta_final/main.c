#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main()
{

    setlocale(LC_ALL,"Portuguese");
//    Escreva um programa que leia um valor de despesa de restaurante, o valor da gorjeta
//(em porcentagem) e o número de pessoas para dividir a conta. Imprima o valor que cada um deve
//pagar. Assuma que a conta será dividida igualmente

    double valorDespesa,porcentagem,valorGorjeta,valorTotalDaDespesa,valorIndividual;
    int numeroPessoas;


    printf("\tDigite a porcentagem da gorjeta do funcionário:   \n");
    scanf("%lf",&porcentagem);

    porcentagem /= 100;

    printf("\tDigite o valor da despesa : \n");
    scanf("%lf",&valorDespesa);
    valorGorjeta = valorDespesa * porcentagem;
    printf("\tDigite o número de pessoas para dividir a conta: \n");
    scanf("%d",&numeroPessoas);
    valorTotalDaDespesa = valorDespesa + valorGorjeta;
    valorIndividual = valorTotalDaDespesa / numeroPessoas;
    printf("\tValor total é %.2f e cada um das %d pessoas tem que pagar é %.2f\n",valorTotalDaDespesa,numeroPessoas,valorIndividual);
    return 0;
}
