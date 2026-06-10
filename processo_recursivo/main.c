#include <stdio.h>
#include <stdlib.h>


    void imprimirR(int v[],int i,int f){
        if(i <= f){
            printf("%d ",v[i]);
            imprimirR(v,i+1,f);

        }

    }




int main()
{
    int vet[4] = {7,4,9,10};

    imprimirR(vet,0,3);



    return 0;
}
