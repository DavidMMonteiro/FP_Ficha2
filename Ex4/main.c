#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Print a character Line
void printLine();

void main()
{
    setlocale(LC_ALL, "Portuguese");
    char x;
    printf("Insira um caracter:");
    x = getchar();
    printf("Caracter introduzido: %c\n", x);
    printf("Valor em tabela ASCII: %d", x);
}
