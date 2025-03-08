/*
 Exemplo0115 - v0.1. - 18 / 02 / 2025
 Autor: Gabriel Matos Nogueira

 Para compilar em terminal (janela de comandos):
 Linux : gcc -o 1563147_Gabriel_Matos_Nogueira Exemplo0115.c
 Windows: gcc -o 1563147_Gabriel_Matos_Nogueira Exemplo0115.c

 Para executar em terminal (janela de comandos):
 Linux : ./Exemplo0115
 Windows: Exemplo0115
*/

// Dependencias
#include <stdio.h>  // Para entrada e saida de dados
#include <stdlib.h> // Para funcoes auxiliares, como alocacao de memoria

// Declaracao de funcoes
void identificacao(void);
void lerMedidas(double* comprimento, double* altura);
double calcularAreacomDobrodeAltura(double comprimento, double altura);

/* Funcao identificacao
Exibe a identificacao do autor no terminal */
void identificacao(void) {
    printf("%s\n", "1563147 - Gabriel Matos Nogueira"); // Mostra o ID e nome do autor
}

/* Funcao lerMedidas
Solicita ao usuario as medidas do comprimento e da altura de um retangulo */
void lerMedidas(double* comprimento, double* altura) {
    printf("%s\n", "Digite a medida do comprimento do retangulo: ");
    scanf("%lf", comprimento);

    printf("%s\n", "Digite a medida da altura do retangulo: ");
    scanf("%lf", altura);   
}

/* Funcao calcularAreacomDobrodeAltura
Calcula a area do retangulo apos dobrar a altura informada */
double calcularAreacomDobrodeAltura(double comprimento, double altura) {
    altura *= 2;  // Dobra o valor da altura
    return comprimento * altura;  // Calcula a area com a nova altura
}

/* Funcao principal
- Exibe o autor do programa.
- Le as medidas do retangulo.
- Calcula a area do retangulo com a altura duplicada.
- Exibe os resultados no terminal. */
int main(void) {
    // Declaracao de variaveis
    double area = 0.0;
    double comprimento = 0.0;
    double altura = 0.0;

    // Execucao do programa
    identificacao(); // Chama a funcao para exibir o nome do autor
    lerMedidas(&comprimento, &altura); // Solicita as medidas ao usuario

    area = calcularAreacomDobrodeAltura(comprimento, altura); // Calcula a area com altura dobrada

    // Exibicao da area calculada
    printf("A area do retangulo com altura dobrada e: %.2lf\n", area);

    // Finalizacao
    printf("Aperte ENTER para terminar.");
    getchar();
    getchar();

    return 0;
}

/*
 Documentacao complementar:
 - O programa solicita ao usuario as dimensoes de um retangulo (comprimento e altura).
 - Calcula a area do retangulo apos dobrar a altura fornecida pelo usuario.
 - Utiliza funcoes para modularidade e clareza no codigo.

 ---------------------------------------------- Historico
 Versao Data        Modificacao
 0.1    18/02/2025 Implementacao inicial do calculo da area com altura duplicada.

 ---------------------------------------------- Testes
 Versao Teste
 0.1    Testado com valores reais e inteiros para comprimento e altura. Resultado correto exibido.
*/
