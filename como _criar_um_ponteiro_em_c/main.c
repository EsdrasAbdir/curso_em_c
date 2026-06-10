#include <stdio.h>
#include <stdlib.h>
#include <windows.h> // Biblioteca necessária para alterar a página de código do console

int main(){
    // Define a saída do console para UTF-8 (padrão moderno de caracteres)
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);
    SetConsoleCP(CPAGE_UTF8);

    int idade = 30;
    char sexo = 'f';

    int *pi = &idade;

    printf("%d",*pi);

    printf("\n\tEndereço de Idade: %p\n\tIdade : %d\n", &idade, idade);
    printf("\n\tSexo : %c\n", sexo);

    return 0;
}