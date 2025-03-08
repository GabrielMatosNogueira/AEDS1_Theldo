/*
 Exemplo0215 - v0.1. - 07 / 03 / 2025
 Autor: Gabriel Matos Nogueira

 Para compilar em terminal (janela de comandos):
 Linux : gcc -o Exemplo0215 Exemplo0215.c
 Windows: gcc -o Exemplo0215 Exemplo0215.c

 Para executar em terminal (janela de comandos):
 Linux : ./Exemplo0215
 Windows: Exemplo0215
*/

// Dependencias
#include <stdio.h>

// Declarar funcoes
void identificacao(void);
void leituraNumero(int *numero);
void verificarIntersecoes(int numero);

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
    while (!entrada_valida) {  // Verifica se a entrada e valida
        entrada_valida = (scanf("%d", numero) == 1);  // Verifica se a entrada é válida
        while (getchar() != '\n');  // Limpa o buffer do teclado
        
        if (!entrada_valida) {
            printf("\nEntrada invalida. Por favor, insira um numero inteiro: ");
        }
    }
}

/* Procedimento verificarIntersecoes
Verifica se o numero pertence a interseccao ou apenas a um dos intervalos */
void verificarIntersecoes(int numero) {
    // Intervalo [10,30] (fechado) e intervalo (20,40) (aberto)
    int no_intervalo1 = (numero >= 10 && numero <= 30); // Verifica se esta no intervalo [10,30]
    int no_intervalo2 = (numero > 20 && numero < 40);  // Verifica se esta no intervalo (20,40)

    if (no_intervalo1 && no_intervalo2) {
        printf("\nO numero %d pertence a interseccao dos intervalos [10,30] e (20,40).\n", numero);
    } else if (no_intervalo1) {
        printf("\nO numero %d pertence apenas ao intervalo [10,30].\n", numero);
    } else if (no_intervalo2) {
        printf("\nO numero %d pertence apenas ao intervalo (20,40).\n", numero);
    } else {
        printf("\nO numero %d nao pertence a nenhum dos intervalos.\n", numero);
    }
}

/* Funcao principal
Executa a identificacao, leitura e verificacao do numero */
int main(void) {
    int numero = 0;

    identificacao();         // Exibe a identificacao do autor
    leituraNumero(&numero);  // Le o numero inteiro
    verificarIntersecoes(numero); // Verifica a interseccao dos intervalos

    // Finalizar
    printf("Aperte ENTER para finalizar.");
    getchar(); // Consumir o ENTER que resta
    getchar(); // Esperar mais uma interação para encerrar o programa

    return 0;
}

/*
 Documentacao complementar:
 - O programa solicita ao usuario um numero inteiro.
 - Verifica se o numero pertence a interseccao dos intervalos [10,30] e (20,40),
   ou se pertence a apenas um deles.

 ---------------------------------------------- Historico
 Versao Data        Modificacao
 0.1    07/03/2025 Implementacao inicial da leitura e verificacao do numero.

 ---------------------------------------------- Testes
 Versao Teste
 0.1    Testado com diferentes valores inteiros. Resultados exibidos corretamente.
*/
