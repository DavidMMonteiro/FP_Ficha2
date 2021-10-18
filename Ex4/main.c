#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Print a character Line
void printLine();

void main()
{
    char character = "*";
    int firstValue,secondValue;
    setlocale(LC_ALL, "Portuguese");
    printf("Insira o primeiro valor:");
    scanf("%d", &firstValue);
    printf("Insira o segundo valor:");
    scanf("%d", &secondValue);

    printLine(character);

    printf("%c Soma \t\t\t\t\t\t\t\t %d + %d = \t\t %d %c",character, firstValue, secondValue, firstValue + secondValue, character);

    printLine(character);
}

void printLine(char character)
{
    int contador;
    for(contador = 0; contador <= 15; contador++)
    {
        printf("%c", character);
    }
    print("\n")
}
