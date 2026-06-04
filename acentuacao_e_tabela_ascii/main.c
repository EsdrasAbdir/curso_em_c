#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

//    setlocale(LC_ALL,NULL); padrão da linguagem c ansi.
//     setlocale(LC_ALL,""); padrão do SO.
    setlocale(LC_ALL,"Portuguese");

    printf("\tCoração...\n");
    printf("\tPaixão...\n");

    int i;
    // tabela asc mas agora com unsigned para alocar mais de um byte e ir além do limite do char.
    for(i = 0; i <=256;i++){
        printf("%c , ",i);

    }
    return 0;
}
