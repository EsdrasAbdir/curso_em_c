#include <stdio.h>
#include <stdlib.h>
#include <string.h>
    typedef struct{
    int dia, mes, ano;


    }Data;

    typedef struct{
        char nome[100];
        int tamanho;
        Data criacao,edicao;
    }Arquivo;


int main()
{

    Data data;
    Arquivo arquivo;

    printf("Digite uma data com dia,mes e ano:");
    scanf("%d%d%d",&data.dia,&data.mes,&data.ano);
    printf("data : %d/%d/%d\n",data.dia,data.mes,data.ano);

    getchar();

    printf("Digite o nome e o tamanho do arquivo: ");

    scanf("%100[^\n]",arquivo.nome);
    arquivo.tamanho = 417;
    arquivo.criacao.dia = 17;
    arquivo.criacao.mes = 5;
    arquivo.criacao.ano = 2025;
    arquivo.edicao.dia = 20;
    arquivo.edicao.mes = 6;
    arquivo.edicao.ano = 2025;

    printf("Arquivo\nNome : %s\nTamanho: %d\n",arquivo.nome,arquivo.tamanho);
    printf("Data de criacao : %d/%d/%d\n",arquivo.criacao.dia,arquivo.criacao.mes,arquivo.criacao.ano);






    return 0;
}
