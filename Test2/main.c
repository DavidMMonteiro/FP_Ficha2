#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    printf("Componentes da Avaliação Periódica\n\n");
    printf("Provas Escritas \t\t 50%%\n");
    printf("Projeto         \t\t 50%%");
}
