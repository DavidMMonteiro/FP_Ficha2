#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void printLine(char character);


int main()
{
    setlocale(LC_ALL, "Portuguese");
    char character = '*';
    int firstValue,secondValue;
    printf("Insira o primeiro valor:");
    scanf("%d", &firstValue);
    printf("Insira o segundo valor:");
    scanf("%d", &secondValue);

    printLine(character);

    printf("%c Soma \t\t\t\t %d + %d = \t\t %d \t%c",character, firstValue, secondValue, firstValue + secondValue, character);
    printf("\n%c Subtração \t\t\t %d - %d = \t\t %d \t%c",character, firstValue, secondValue, firstValue - secondValue, character);
    printf("\n%c Multiplicação \t\t %d x %d = \t\t %d \t%c",character, firstValue, secondValue, firstValue * secondValue, character);
    printf("\n%c Divisão \t\t\t %d / %d = \t\t %d \t%c",character, firstValue, secondValue, firstValue / secondValue, character);
    printf("\n%c Resto da divisão inteira \t %d %% %d = \t\t %d \t%c",character, firstValue, secondValue, firstValue % secondValue, character);

    printLine(character);
}

void printLine(char character)
{
    int contador;
    printf("\n");
    for(contador = 0; contador <= 65; contador++)
    {
        printf("%c", character);
    }
    printf("\n");
}
