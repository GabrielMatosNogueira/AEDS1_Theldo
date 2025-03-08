/*
 Exemplo0214 - v0.1. - 07 / 03 / 2025
 Autor: Gabriel Matos Nogueira

 Para compilar em terminal (janela de comandos):
 Linux : gcc -o Exemplo0214 Exemplo0214.c
 Windows: gcc -o Exemplo0214 Exemplo0214.c

 Para executar em terminal (janela de comandos):
 Linux : ./Exemplo0214
 Windows: Exemplo0214
*/

// Dependencias
#include <stdio.h>

// Declarar funcoes
void identificacao(void);
void leituraNumero(int *numero);
void verificarIntervaloFechado(int numero);

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

/* Procedimento verificarIntervaloFechado
Verifica se o numero pertence ao intervalo fechado entre [20 e 55] */
void verificarIntervaloFechado(int numero) {
    if (numero >= 20 && numero <= 55) {
        printf("\nO numero %d pertence ao intervalo fechado entre 20 e 55.\n", numero);
    } else {
        printf("\nO numero %d nao pertence ao intervalo fechado entre 20 e 55.\n", numero);
    }
}

/* Funcao principal
Executa a identificacao, leitura e verificacao do numero */
int main(void) {
    int numero = 0;

    identificacao();         // Exibe a identificacao do autor
    leituraNumero(&numero);  // Le o numero inteiro
    verificarIntervaloFechado(numero); // Verifica se o numero esta no intervalo

    // Finalizar
    printf("Aperte ENTER para finalizar.");
    getchar(); // Consumir o ENTER que resta
    getchar(); // Esperar mais uma interação para encerrar o programa

    return 0;
}

/*
 Documentacao complementar:
 - O programa solicita ao usuario um numero inteiro.
 - Verifica se o numero pertence ao intervalo fechado entre [20 e 55].

 ---------------------------------------------- Historico
 Versao Data        Modificacao
 0.1    07/03/2025 Implementacao inicial da leitura e verificacao do numero.

 ---------------------------------------------- Testes
 Versao Teste
 0.1    Testado com diferentes valores inteiros. Resultados exibidos corretamente.
*/
