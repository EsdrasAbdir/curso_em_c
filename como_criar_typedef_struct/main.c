#include <stdio.h>
#include <stdlib.h>
#include <string.h>
    typedef struct{
    int dia, mes, ano;


    }Data;

    typedef struct{
        char nome[100];
        int tamanho;
    }Arquivo;


int main()
{

    Data data;
    Arquivo arquivo;
    data.dia = 20;
    data.mes = 5;
    data.ano = 2005;




    printf("data : %d/%d/%d\n",data.dia,data.mes,data.ano);

    strcpy(arquivo.nome,"teste.txt");

    arquivo.tamanho = 350;

    printf("Arquivo\nNome : %s\nTamanho: %d\n",arquivo.nome,arquivo.tamanho);






    return 0;
}
