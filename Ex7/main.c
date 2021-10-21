#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");

    const float valeuProva1 = 50, valeuProva2 = 50, totalvaleuProva = 50;
    const float valueProje1 = 65, valueProje2 = 35, totalvaleuProje = 50;
    int provaEsc1, provaEsc2, projeto1, projeto2;
    float finalValueProva, finalValueProject, totalValeu;

    printf("Componente TEÓRICO-PRÁTICA\n");
    printf("Classificações nas Provas Escritas [0;100]\n");
    printf("Introduza a nota na Prova Escrita 1 (%.0f%%):",valeuProva1);
    scanf(" %i", &provaEsc1);
    printf("Introduza a nota na Prova Escrita 2 (%.0f%%):",valeuProva2);
    scanf(" %i", &provaEsc2);
    finalValueProva = 20 * (provaEsc1 * (valeuProva1 / 100) + provaEsc2 * (valeuProva2 / 100))/100;

    printf("Componente PRÁTICA\n");
    printf("Classificações no Projeto [0;100]\n");
    printf("Introduza a nota na Entrega1 (%.0f%%):",valueProje1);
    scanf(" %i", &projeto1);
    printf("Introduza a nota na Entrega2 (%.0f%%):",valueProje2);
    scanf(" %i", &projeto2);
    finalValueProject = 20 * (projeto1 * (valueProje1 / 100) + projeto2 * (valueProje2 / 100))/100;

    printf("\n");
    printf("ÉPOCA DE AVALIAÇÃO PERIÓDICA\n");
    printf("Componente Teórico-Prática (%i%%):\t %.2f\n", totalvaleuProva, finalValueProva);
    printf("Componente Prática (%i%%):\t\t %.2f\n", totalvaleuProje, finalValueProject);
    totalValeu = (finalValueProva * (totalvaleuProva/100)) + (finalValueProject * (totalvaleuProje/100));
    printf("CLASSIFICAÇÃO FINAL [0;20]:\t\t %.2f (%.0f valores)\n", totalValeu, totalValeu);
}
