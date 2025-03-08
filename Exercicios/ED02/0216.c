/*
 Exemplo0216 - v0.1. - 07 / 03 / 2025
 Autor: Gabriel Matos Nogueira

 Para compilar em terminal (janela de comandos):
 Linux : gcc -o Exemplo0216 Exemplo0216.c
 Windows: gcc -o Exemplo0216 Exemplo0216.c

 Para executar em terminal (janela de comandos):
 Linux : ./Exemplo0216
 Windows: Exemplo0216
*/

// Dependencias
#include <stdio.h>

// Declarar funcoes
void identificacao(void);
void leituraNumeros(int *numero1, int *numero2);
void verificarParImpar(int numero1, int numero2);

/* Funcao identificacao
Exibe a identificacao do autor */
void identificacao(void) {
    printf("1563147 - Gabriel Matos Nogueira\n");
}

/* Procedimento leituraNumeros
Le dois numeros inteiros do usuario com verificacao de entrada valida */
void leituraNumeros(int *numero1, int *numero2) {
    // Leitura do primeiro numero
    printf("Digite o primeiro numero inteiro: ");
    int entrada_valida = 0;
    while (!entrada_valida) { // Verifica se a entrada e valida
        entrada_valida = (scanf("%d", numero1) == 1); // Verifica se a entrada e valida
        while (getchar() != '\n'); // Limpa o buffer do teclado
        
        if (!entrada_valida) {
            printf("\nEntrada invalida. Por favor, insira um numero inteiro: ");
        }
    }

    // Leitura do segundo numero
    printf("Digite o segundo numero inteiro: ");
    entrada_valida = 0;
    while (!entrada_valida) { // Verifica se a entrada e valida
        entrada_valida = (scanf("%d", numero2) == 1); // Verifica se a entrada e valida
        while (getchar() != '\n'); // Limpa o buffer do teclado
        
        if (!entrada_valida) {
            printf("\nEntrada invalida. Por favor, insira um numero inteiro: ");
        }
    }
}

/* Procedimento verificarParImpar
Verifica se o primeiro numero e impar e o segundo numero e par */
void verificarParImpar(int numero1, int numero2) {
    if (numero1 % 2 != 0 && numero2 % 2 == 0) {
        printf("\nO primeiro numero %d e impar e o segundo numero %d e par.\n", numero1, numero2);
    } else {
        printf("\nO primeiro numero %d nao e impar ou o segundo numero %d nao e par.\n", numero1, numero2);
    }
}

/* Funcao principal
Executa a identificacao, leitura e verificacao dos numeros */
int main(void) {
    int numero1 = 0, numero2 = 0;

    // Passo 1: Exibe a identificacao do autor
    identificacao();  
    
    // Passo 2: Leitura dos dois numeros inteiros
    leituraNumeros(&numero1, &numero2);  
    
    // Passo 3: Verifica se o primeiro numero é impar e o segundo é par
    verificarParImpar(numero1, numero2); 

    // Finaliza
    printf("Aperte ENTER para finalizar.");
    getchar(); // Consumir o ENTER que resta
    getchar(); // Esperar mais uma interação para encerrar o programa

    return 0;
}

/*
 Documentacao complementar:
 - O programa solicita ao usuario dois numeros inteiros.
 - Verifica se o primeiro numero e impar e o segundo numero e par.

 ---------------------------------------------- Historico
 Versao Data        Modificacao
 0.1    07/03/2025 Implementacao inicial da leitura e verificacao dos numeros.

 ---------------------------------------------- Testes
 Versao Teste
 0.1    Testado com diferentes pares de numeros inteiros. Resultados exibidos corretamente.
*/
