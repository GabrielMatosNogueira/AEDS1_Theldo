/*
 Exemplo0218 - v0.1. - 07 / 03 / 2025
 Autor: Gabriel Matos Nogueira

 Para compilar em terminal (janela de comandos):
 Linux : gcc -o Exemplo0218 Exemplo0218.c
 Windows: gcc -o Exemplo0218 Exemplo0218.c

 Para executar em terminal (janela de comandos):
 Linux : ./Exemplo0218
 Windows: Exemplo0218
*/

// Dependencias
#include <stdio.h>

// Declarar funcoes
void identificacao(void);
void leituraNumero(int *numero);
void verificarNumero(int numero);
void compararValoresReais(float a, float b);

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

/* Procedimento compararValoresReais
Compara o primeiro valor com um quarto do segundo */
void compararValoresReais(float a, float b) {
    float um_quarto_b = b / 4.0;

    if (a < um_quarto_b) {
        printf("\nO primeiro valor (%.2f) e menor que um quarto do segundo valor (%.2f).\n", a, b);
    } else if (a == um_quarto_b) {
        printf("\nO primeiro valor (%.2f) e igual a um quarto do segundo valor (%.2f).\n", a, b);
    } else {
        printf("\nO primeiro valor (%.2f) e maior que um quarto do segundo valor (%.2f).\n", a, b);
    }
}

/* Funcao principal
Executa a identificacao, leitura e verificacao do numero */
int main(void) {
    int numero = 0;
    float valor1 = 0.0, valor2 = 0.0;

    identificacao();         // Exibe a identificacao do autor
    leituraNumero(&numero);  // Le o numero inteiro
    verificarNumero(numero); // Verifica as condicoes do numero

    // Solicita e compara dois valores reais
    printf("\nDigite dois valores reais (ex: 3.5, 1.2): ");
    scanf("%f %f", &valor1, &valor2);
    compararValoresReais(valor1, valor2);  // Compara os valores reais

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
 - Solicita dois valores reais e compara o primeiro valor com um quarto do segundo.

 ---------------------------------------------- Historico
 Versao Data        Modificacao
 0.1    07/03/2025 Implementacao inicial da leitura e verificacao do numero.

 ---------------------------------------------- Testes
 Versao Teste
 0.1    Testado com diferentes valores inteiros. Resultados exibidos corretamente.
        Testado com valores reais como (0.5, 1.5), (3.0, 3.0), (-5.5, 6.4), (7.8, -8.7).
*/
