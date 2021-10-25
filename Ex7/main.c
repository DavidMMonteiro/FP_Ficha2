/*
    INFO
    Programme to calc the final grades of Fundamentos de Programação
    This program will get the input from the prova escrita 1 and 2 and from the Projeto Entrega 1 and 2
    At the end will calc the final grade by the porcentage declare

    OWNER INFO
    Class: 4515 Curso Técnico Superior Profissional de Programação de Sistemas de informação
    Student number: 22118749
    Creator: David Machado Monteiro
    Date: 25/10/2021
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

void calc_grade();
int verificationInput(int value);
bool verificationGrade(float grade);

void main()
{
    setlocale(LC_ALL, "Portuguese");

    int input = 0;
    // Loop the main function
    do {
        // Clear the window
        system("cls");
        // Call the main function
        calc_grade();
        // Input to loop
        printf("\n\nInsira o numero correspondente: \n0. Sair \n1. Voltar a calcular\n");
        scanf("%i", &input);
    } while(input);
}

// Function to get the inputs and calc the grades
void calc_grade() {
    // Constant values from Prova
    const float VALUE_PROVA_1 = 50, VALUE_PROVA_2 = 50, TOTAL_VALUE_PROVA = 50;
    // Constant values from Projeto
    const float VALUE_PROJETO_1 = 65, VALUE_PROJETO_2 = 35, TOTAL_VALUE_PROJETO = 50;
    // Input values
    int provaEsc1, provaEsc2, projeto1, projeto2;
    // Calc values
    float finalValueProva, finalValueProject, totalvalue;

    printf("Componente TEÓRICO-PRÁTICA\n");
    printf("Classificações nas Provas Escritas [0;100]\n");

    printf("Introduza a nota na Prova Escrita 1 (%.0f%%):",VALUE_PROVA_1);
    scanf(" %i", &provaEsc1);
    provaEsc1 = verificationInput(provaEsc1);

    printf("Introduza a nota na Prova Escrita 2 (%.0f%%):",VALUE_PROVA_2);
    scanf(" %i", &provaEsc2);
    provaEsc2 = verificationInput(provaEsc2);

    // Cacl of the final grade of Prova
    finalValueProva = 20 * (provaEsc1 * (VALUE_PROVA_1 / 100) + provaEsc2 * (VALUE_PROVA_2 / 100))/100;

    if (verificationGrade(finalValueProva)){
        return;
    }

    printf("Componente PRÁTICA\n");
    printf("Classificações no Projeto [0;100]\n");

    printf("Introduza a nota na Entrega1 (%.0f%%):",VALUE_PROJETO_1);
    scanf(" %i", &projeto1);
    projeto1 = verificationInput(projeto1);

    printf("Introduza a nota na Entrega2 (%.0f%%):",VALUE_PROJETO_2);
    scanf(" %i", &projeto2);
    projeto2 = verificationInput(projeto2);

    if (projeto2/5 < 8.0) {
        system("cls");
        printf("O aluno não passo na segunda entrega. Não tem nota final.");
        return;
    }

    // Cacl of the final grade of Projeto
    finalValueProject = 20 * (projeto1 * (VALUE_PROJETO_1 / 100) + projeto2 * (VALUE_PROJETO_2 / 100))/100;

    if (verificationGrade(finalValueProject)){
        return;
    }

    printf("\n");
    printf("ÉPOCA DE AVALIAÇÃO PERIÓDICA\n");
    printf("Componente Teórico-Prática (%.0f%%):\t %.2f\n", TOTAL_VALUE_PROVA, finalValueProva);
    printf("Componente Prática (%.0f%%):\t\t %.2f\n", TOTAL_VALUE_PROJETO, finalValueProject);
    totalvalue = (finalValueProva * (TOTAL_VALUE_PROVA/100)) + (finalValueProject * (TOTAL_VALUE_PROJETO/100));
    printf("CLASSIFICAÇÃO FINAL [0;20]:\t\t %.2f (%.0f valores)\n", totalvalue, totalvalue);
}

// Class to check if the input value its not higher than 100
int verificationInput(int value) {
    if (value < 0 || value > 100) {
        printf("Valor inserido é menor que 0 ou maior que 100.\n");
        do {
            printf("Insira de novo:");
            scanf(" %i", &value);
        } while (value < 0 || value > 100);
    }
    return value;
}

// Check if the input its higher than 9.5, if not will return as true
bool verificationGrade(float grade) {
    if (grade < 9.5) {
        // Clear the window
        system("cls");
        printf("O aluno não passo. Não tem nota final.");
        return true;
    }
    return false;
}
