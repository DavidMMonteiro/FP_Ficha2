#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");
    float x = 0.0;
    printf("Insira um numero: ");
    scanf("%f", &x);
    printf("Valor inserido: %f\n", x);
    printf("%.3f \t\t\t\t\t\t alinhado à esquerda\n", x);
    printf("+%.3f \t\t\t\t\t alinhado à esquerda com sinal\n", x);
    printf("%15.3f \t\t\t\t alinhado à direita\n", x);
    printf("%015.3f \t\t\t\t alinhado à direita antecedidos de zeros", x);
}
