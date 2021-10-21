#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");
    float minSalary = 600.0, extraByCar = 100.0, extraPorcentage = 1.5;
    float extraCars, factExtra;
    int factVolum = 0, carNum = 0;

    printf("Indique o número de carros vendidos:");
    scanf(" %i", &carNum);
    printf("Indique o volume faturado:");
    scanf(" %i", &factVolum);

    extraCars = carNum * extraByCar;
    factExtra = factVolum * (extraPorcentage/100);

    printf("\n\n");
    printf("VENCIMENTO:\n");
    printf("\t\t\t\t-------\n");
    printf("Salário Base: \t\t\t %.2f\n", minSalary);
    printf("Por Carro Vendido: \t\t %.2f\n", extraCars);
    printf("1.50%% das Vendas Faturadas: \t %.2f\n", factExtra);
    printf("\t\t\t\t-------\n");
    printf("TOTAL \t\t\t\t %.2f", minSalary + extraCars + factExtra);
}
