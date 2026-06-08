#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mat[3][3];
    int l,c;

    for(l=0;l<3;l++){
        for(c=0;c<3;c++){
            printf("Digite o valor da matriz[%d][%d]\n",l,c);
            scanf("%d",&mat[l][c]);
        }
    }

        for(l=0;l<3;l++){
        for(c=0;c<3;c++){
            printf("%d ",mat[l][c]);
        }
        printf("\n");
    }



    printf("Hello world!\n");
    return 0;
}
