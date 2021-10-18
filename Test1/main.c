#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 0;
    printf("Insira um numero: ");
    scanf("%d", &x);
    printf("Valor inserido: %d\n", x);
    x*=2;
    printf("O dobro do valor inserido: %d", x);
}
