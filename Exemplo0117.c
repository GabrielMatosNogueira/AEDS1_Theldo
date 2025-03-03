/*
 Exemplo0113 - v0.1. - 18 / 02 / 2025
 Author: Gabriel Matos Nogueira

 Para compilar em terminal (janela de comandos):
 Linux : gcc -o 1563147_Gabriel_Matos_Nogueira Exemplo0117.c
 Windows: gcc -o 1563147_Gabriel_Matos_Nogueira Exemplo0117.c

 Para executar em terminal (janela de comandos):
 Linux : ./Exemplo0117
 Windows: Exemplo0117
*/

// Dependencias
#include <stdio.h>  // Para entrada e saida
#include <stdlib.h> // Para funcoes gerais

// Declarar funcoes utilizadas
void identificacao(void);
void lerLado(double *lado);
double calcularQuadruploLado(double lado);


/* Funcao identificacao
Exibir identificacao do autor */
void identificacao(void) {
    printf("%s\n", "1563147 - Gabriel Matos Nogueira"); // Exibir identificador do autor
}

/* Funcao lerLado
Requisitar medidas para o usuario */
void lerLado(double *lado) {
    printf("%s\n", "Digite a medida do lado do cubo: ");
    scanf("%lf", lado); // Alterar para usar ponteiro para modificar o valor diretamente
}

/* Funcao calcularQuadruploLado
Calcular o quadruplo do lado */
double calcularQuadruploLado(double lado) {
    lado = lado * 4;  // Quadruplicar o lado
    lado = lado * lado * lado; // Calcular o volume
    return lado;
}


/* Funcao principal
Exibir o autor do programa, chamar a funcao para ler as medidas, chamar a funcao para calcular a nova area */
int main(void) {
    // declarar as variaveis
    double lado = 0.0;
    double volume = 0.0;

    // acoes
    identificacao(); // Exibir identificacao do autor
    lerLado(&lado); // Passar a variavel lado por ponteiro

    volume = calcularQuadruploLado(lado); // Calcular o volume

    printf("O volume do cubo e: %.2lf\n", volume); // Exibir o volume calculado

    // encerrar
    printf("Aperte ENTER para terminar.");
    getchar();
    getchar();

    return 0;
}

/*
Documentacao complementar:
- O programa calcula o volume do cubo a partir da multiplicacao de todos os seus lados por 4.

---------------------------------------------- Historico
Versao Data Modificacao

0.1 - 18/02/2025 - Implementacao inicial, calculo da area e perimetro com reducao dos lados.
1.1 - 19/02/2025 - Reajuste na função de calculo do volume

---------------------------------------------- Testes
Versao Teste

0.1 - Testado com valores inteiros para os lados do retangulo e a execucao apresentou problemas de tipo e problemas
na utilização de ponteiros
1.1 - A execução foi ótimo e o tempo de resposta também
*/

