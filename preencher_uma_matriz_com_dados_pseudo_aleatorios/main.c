#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(NULL));

    int mat[3][3];
    int l,c;

    for(l=0;l<3;l++){
        for(c=0;c<3;c++){
           mat[l][c] = rand() %10;
        }
    }

        mat[0][1] = 0; // alteração por atribuição em um array bidimensional.
        for(l=0;l<3;l++){
        for(c=0;c<3;c++){
            printf("%d ",mat[l][c]);
        }
        printf("\n");
    }




    return 0;
}
