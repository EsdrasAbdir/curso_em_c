#include <stdio.h>
#include <stdlib.h>



typedef struct{
    int dia,mes,ano;

}Data;

void imprimirData(Data data){

    printf("\n\t%d/%d/%d\n",data.dia,data.mes,data.ano);
}

void imprimirDataP(Data *data){

    printf("\n\t%d/%d/%d\n",data->dia,data->mes,data->ano);
}

Data preencherData(){
    Data d;
    
    d.dia = 10;
    d.mes = 3;
    d.ano = 1998;
    return d;

}


void preencherDataP(Data *d){
    d->dia = 10;
    d->mes = 3;
    d->ano = 1998;
    printf("\n\t%d/%d/%d\n\n",d->dia,d->mes,d->ano);

}


int main(){

    Data data;


    preencherDataP(&data);
    // data = preencherData();
    imprimirData(data);
    imprimirDataP(&data);


    return 0;
}