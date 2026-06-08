#include <stdio.h>
#include <stdlib.h>

int main()
{

    int matriz[5][3];
    int mat2[3][3] = {0};
    int mat3[2][4] = {{1,2,3,4},{5,6,7,8}};
    int l,c;

    for(l=0;l<2;l++){
            for(c=0;c<4;c++){
                printf("%d",mat3[l][c]);

            }
            printf("\n");

    }





//    printf("%d,",mat3[0][0]);
//    printf("%d,",mat3[0][1]);
//    printf("%d,",mat3[0][2]);
//    printf("%d,",mat3[0][3]);
//    printf("\n");
//    printf("%d,",mat3[1][0]);
//    printf("%d,",mat3[1][1]);
//    printf("%d,",mat3[1][2]);
//    printf("%d,",mat3[1][3]);
    return 0;
}
