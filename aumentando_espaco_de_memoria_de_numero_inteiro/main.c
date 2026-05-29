#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int valor;
    long long int a,b,c;

    a = 2147483647;
    b = 1;
    c = a + b;

    printf("\n\tTamanho : %d\n\n",sizeof valor);
    printf("\n\ta = %lld\tb = %lli\tc = %lld",a,b,c);
    return 0;
}
