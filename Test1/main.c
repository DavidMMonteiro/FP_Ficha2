#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 0;
    printf("Insira um numero: ");
    scanf("%d", &x);
    printf("Valor inserido: %d\n", x);
    printf("O dobro do valor inserido: %d", x*=2);
}
