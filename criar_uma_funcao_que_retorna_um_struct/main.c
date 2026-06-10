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

    Data lerData(){
    Data data;
    printf("Digite uma data com dia,mes e ano:");
    scanf("%d%d%d",&data.dia,&data.mes,&data.ano);

    return data;
    }

    void imprimirData(Data data){
        printf("data ---> : %d/%d/%d\n",data.dia,data.mes,data.ano);
    }


int main()
{

    Data data;
    Arquivo arquivo;

    data = lerData(data);
    imprimirData(data);
    getchar();
    getchar();

    printf("Digite o nome e o tamanho do arquivo: ");

    scanf("%100[^\n] %d",arquivo.nome,&arquivo.tamanho);

    printf("Arquivo\nNome : %s\nTamanho: %d\n",arquivo.nome,arquivo.tamanho);






    return 0;
}
