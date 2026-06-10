#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>





int main()
{
    char letra = 'c';
    char ma,mi;

    mi = tolower(letra);
    ma = toupper(letra);

    printf("\n\%c\t\n\t%c\n",mi,ma);

    return 0;
}
