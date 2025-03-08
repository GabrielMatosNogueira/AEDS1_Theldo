/*
 Exemplo0114 - v0.1. - 18 / 02 / 2025
 Author: Gabriel Matos Nogueira

 Para compilar em terminal (janela de comandos):
 Linux : gcc -o 1563147_Gabriel_Matos_Nogueira Exemplo0114.c
 Windows: gcc -o 1563147_Gabriel_Matos_Nogueira Exemplo0114.c

 Para executar em terminal (janela de comandos):
 Linux : ./Exemplo0114
 Windows: Exemplo0114
*/

// Dependencias
#include <stdio.h>  // Para entrada e saida
#include <stdlib.h> // Para funcoes gerais

// Declarar funcoes utilizadas
void identificacao(void);                              // Exibir identificacao do autor
void lerValores(int *lado1, int *lado2);               // Ler os valores dos lados do retangulo
void perimetroeAreacomUmQuartoTotal(int *lado1, int *lado2); // Calcular perimetro e area com 25% dos lados

// Funcao identificacao
// Exibir identificacao do autor
void identificacao(void) {
    printf("%s\n", "1563147 - Gabriel Matos Nogueira"); // Exibir identificador do autor
}

// Funcao lerValores
// Ler os valores dos lados do retangulo
void lerValores(int *lado1, int *lado2) {
    // Requisitar os valores dos lados
    printf("Digite o comprimento do retangulo (em inteiro): ");
    scanf("%d", lado1);  // Ler valor para o comprimento (lado 1)
    printf("Digite a altura do retangulo (em inteiro): ");
    scanf("%d", lado2);  // Ler valor para a altura (lado 2)
}

// Funcao perimetroeAreacomUmQuartoTotal
// Calcular perimetro e area do retangulo com lados reduzidos a 25% do tamanho original
void perimetroeAreacomUmQuartoTotal(int *lado1, int *lado2) {
    // Declarar as variaveis para os novos lados (25% dos originais)
    int novoLado1 = *lado1 / 4;  // Calcular um quarto do comprimento
    int novoLado2 = *lado2 / 4;  // Calcular um quarto da altura
    
    // Calcular o perimetro e a area usando os novos lados
    int perimetro = 2 * (novoLado1 + novoLado2); // Formula do perimetro de um retangulo
    int area = novoLado1 * novoLado2; // Formula da area de um retangulo

    // Exibir os resultados
    printf("\nRetangulo com 25%% dos lados:\n");
    printf("Comprimento: %d\n", novoLado1);  // Exibir o valor do comprimento reduzido
    printf("Altura: %d\n", novoLado2);  // Exibir o valor da altura reduzida
    printf("Perimetro: %d\n", perimetro);  // Exibir o perimetro do retangulo
    printf("Area: %d\n", area);  // Exibir a area do retangulo
}

// Funcao principal
// Ponto de entrada do programa
int main(void) {
    int lado1, lado2;  // Declarar variaveis para o comprimento e altura do retangulo

    identificacao();  // Exibir identificacao do autor (eu mesmo)
    
    lerValores(&lado1, &lado2);  // Ler os valores dos lados do retangulo

    perimetroeAreacomUmQuartoTotal(&lado1, &lado2);  // Calcular e exibir perimetro e area com lados reduzidos

    // Solicitar para pressionar ENTER para finalizar
    printf("\nAperte ENTER para finalizar o programa.\n");
    getchar();
    getchar();

    return 0;
}

/*
Documentacao complementar:
- O programa calcula a area e o perimetro de um retangulo com lados reduzidos a 25% de seu tamanho original.
- Utiliza ponteiros para manipular diretamente os valores dos lados e calcular os resultados.

---------------------------------------------- Historico
Versao Data Modificacao

0.1 - 18/02/2025 - Implementacao inicial, calculo da area e perimetro com reducao dos lados.

---------------------------------------------- Testes
Versao Teste

0.1 - Testado com valores inteiros para os lados do retangulo e a execucao foi correta.
*/