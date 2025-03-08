/*
 Exemplo0219 - v0.1. - 07 / 03 / 2025
 Autor: Gabriel Matos Nogueira

 Para compilar em terminal (janela de comandos):
 Linux : gcc -o Exemplo0219 Exemplo0219.c
 Windows: gcc -o Exemplo0219 Exemplo0219.c

 Para executar em terminal (janela de comandos):
 Linux : ./Exemplo0219
 Windows: Exemplo0219
*/

// Dependencias
#include <stdio.h>

// Declarar funcoes
void identificacao(void);
void leituraNumero(int *numero);
void verificarNumero(int numero);
void verificarIntervalo(float a, float b, float c);

/* Funcao identificacao
Exibe a identificacao do autor */
void identificacao(void) {
    printf("1563147 - Gabriel Matos Nogueira\n");
}

/* Procedimento leituraNumero
Le um numero inteiro do usuario com verificacao de entrada valida */
void leituraNumero(int *numero) {
    int entrada_valida = 0;
    printf("Digite um numero inteiro: ");
    while (!entrada_valida) {  // Verifica se a entrada é válida
        entrada_valida = (scanf("%d", numero) == 1);  // Verifica se a entrada é válida
        while (getchar() != '\n');  // Limpa o buffer do teclado
        
        if (!entrada_valida) {
            printf("\nEntrada invalida. Por favor, insira um numero inteiro: ");
        }
    }
}

/* Procedimento verificarNumero
Determina se o numero e par e positivo ou impar e negativo */
void verificarNumero(int numero) {
    if (numero % 2 == 0) { // Número par
        printf("\nO numero e par");
        if (numero > 0) {
            printf(" e positivo.\n");
        } else if (numero == 0) {
            printf(" (zero).\n");
        } else {
            printf(" e negativo.\n");
        }
    } else { // Número ímpar
        printf("\nO numero e impar");
        if (numero > 0) {
            printf(" e positivo.\n");
        } else {
            printf(" e negativo.\n");
        }
    }
}

/* Procedimento verificarIntervalo
Verifica se o segundo valor esta entre o primeiro e o terceiro */
void verificarIntervalo(float a, float b, float c) {
    if (a != c) {  // Verifica se o primeiro e o terceiro valor são diferentes
        if ((b > a && b < c) || (b < a && b > c)) {
            printf("\nO segundo valor (%.2f) esta entre o primeiro valor (%.2f) e o terceiro valor (%.2f).\n", b, a, c);
        } else {
            printf("\nO segundo valor (%.2f) NAO esta entre o primeiro valor (%.2f) e o terceiro valor (%.2f).\n", b, a, c);
        }
    } else {
        printf("\nO primeiro e o terceiro valor sao iguais, nao eh possivel fazer a verificacao.\n");
    }
}

/* Funcao principal
Executa a identificacao, leitura e verificacao do numero */
int main(void) {
    int numero = 0;
    float valor1 = 0.0, valor2 = 0.0, valor3 = 0.0;

    identificacao();         // Exibe a identificacao do autor
    leituraNumero(&numero);  // Le o numero inteiro
    verificarNumero(numero); // Verifica as condicoes do numero

    // Solicita os três valores reais
    printf("\nDigite tres valores reais (ex: 3.5, 1.2, 5.1): ");
    scanf("%f %f %f", &valor1, &valor2, &valor3);
    verificarIntervalo(valor1, valor2, valor3);  // Verifica se o segundo valor está entre o primeiro e o terceiro

    // Finalizar
    printf("Aperte ENTER para finalizar.");
    getchar(); // Consumir o ENTER que resta
    getchar(); // Esperar mais uma interação para encerrar o programa

    return 0;
}

/*
 Documentacao complementar:
 - O programa solicita ao usuario um numero inteiro.
 - Verifica se o numero e par e positivo ou impar e negativo.
 - Considera o zero como par.
 - Solicita três valores reais e verifica se o segundo valor está entre o primeiro e o terceiro (quando são diferentes).

 ---------------------------------------------- Historico
 Versao Data        Modificacao
 0.1    07/03/2025 Implementacao inicial da leitura e verificacao do numero.

 ---------------------------------------------- Testes
 Versao Teste
 0.1    Testado com diferentes valores inteiros. Resultados exibidos corretamente.
        Testado com valores reais como (0.75, 0.5, 1.8), (3.6, 4.5, 2.4), (6.3, 7.2, 6.5), (9.8, 8.9, 8.9).
*/
