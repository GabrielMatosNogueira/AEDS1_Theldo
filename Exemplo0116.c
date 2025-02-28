/*
 Exemplo0113 - v0.1. - 18 / 02 / 2025
 Author: Gabriel Matos Nogueira

 Para compilar em terminal (janela de comandos):
 Linux : gcc -o 1563147_Gabriel_Matos_Nogueira Exemplo0116.c
 Windows: gcc -o 1563147_Gabriel_Matos_Nogueira Exemplo0116.c

 Para executar em terminal (janela de comandos):
 Linux : ./Exemplo0116
 Windows: Exemplo0116
*/

// Dependencias
#include <stdio.h>  // Para entrada e saida
#include <stdlib.h> // Para funcoes gerais

// Declarar funcoes utilizadas
void identificacao(void);
void lerMedidas(double* comprimento, double* altura);
double calcularAreacomDobrodeAltura(double comprimento, double altura);


/* Funcao identificacao
Exibir identificacao do autor */
void identificacao(void) {
    printf("%s\n", "1563147 - Gabriel Matos Nogueira"); // Exibir identificador do autor
}

/* Funcao lerMedidas
Requisitar medidas para o usuario */
void lerMedidas(double* comprimento, double* altura) {
    printf("%s\n", "Digite a medida do comprimento do retangulo: ");
    scanf("%lf", comprimento);

    printf("%s\n", "Digite a medida da altura do retangulo: ");
    scanf("%lf", altura);   
}

/* Funcao calcularAreacomDobrodeAltura
Calcular area do retangulo duplicando sua altura */
double calcularAreacomDobrodeAltura(double comprimento, double altura) {
    altura *= 2;  // Duplicar a altura
    return comprimento * altura;  // Calcular a area
}


/* Funcao principal
Exibir o autor do programa, chamar a funcao para ler as medidas, chamar a funcao para calcular a nova area */
int main(void) {
    // declarar as variaveis
    double area = 0.0;
    double comprimento = 0.0;
    double altura = 0.0;

    // acoes
    identificacao(); // Exibir identificacao do autor
    lerMedidas(&comprimento, &altura); // Ler as medidas do retangulo

    area = calcularAreacomDobrodeAltura(comprimento, altura); // Calcular a area

    printf("A area do retangulo com altura dobrada e: %.2lf\n", area); // Exibir a area calculada

    // encerrar
    printf("Aperte ENTER para terminar.");
    getchar();
    getchar();

    return 0;
}
