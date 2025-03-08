/*
 Exemplo0217 - v0.2. - 07 / 03 / 2025
 Autor: Gabriel Matos Nogueira

 Para compilar em terminal (janela de comandos):
 Linux : gcc -o Exemplo0217 Exemplo0217.c
 Windows: gcc -o Exemplo0217 Exemplo0217.c

 Para executar em terminal (janela de comandos):
 Linux : ./Exemplo0217
 Windows: Exemplo0217
*/

// Dependencias
#include <stdio.h>

// Declarar funcoes
void identificacao(void);
int lerNumeroInteiro(void);
void verificarCondicoes(int numero1, int numero2);

/* Funcao identificacao
Exibe a identificacao do autor */
void identificacao(void) {
    printf("1563147 - Gabriel Matos Nogueira\n");
}

/* Funcao lerNumeroInteiro
Le um numero inteiro do teclado com validacao da entrada.
Retorna o numero lido.
 */
int lerNumeroInteiro(void) {
    int numero;
    
    // Solicita a entrada do numero
    while (1) {
        printf("Digite um numero inteiro: ");
        
        // Le a entrada
        int resultado = scanf("%d", &numero);
        
        // Verifica se a entrada e um numero valido
        if (resultado == 1) {
            while (getchar() != '\n');  // Limpa o buffer do teclado apos a leitura
            return numero; // Se a entrada for valida, retorna o numero
        } else {
            // Caso a entrada nao seja valida, exibe mensagem de erro e limpa o buffer
            printf("\nEntrada invalida. Por favor, insira um numero inteiro.\n");
            while (getchar() != '\n');  // Limpa o buffer do teclado para nova tentativa
        }
    }
}

/* Procedimento verificarCondicoes
Verifica as condicoes de pertencimento dos numeros a seus conjuntos
 */
void verificarCondicoes(int numero1, int numero2) {
    // Verifica o primeiro numero
    if (numero1 % 2 == 0 && numero1 < 0) {
        printf("\nO primeiro numero %d pertence ao conjunto de numeros pares e negativos.\n", numero1);
    } else {
        if (numero1 % 2 != 0) {
            printf("\nO primeiro numero %d pertence ao conjunto de numeros impares.\n", numero1);
        }
        if (numero1 >= 0) {
            printf("\nO primeiro numero %d pertence ao conjunto de numeros positivos.\n", numero1);
        }
    }

    // Verifica o segundo numero
    if (numero2 % 2 != 0 && numero2 > 0) {
        printf("\nO segundo numero %d pertence ao conjunto de numeros impares e positivos.\n", numero2);
    } else {
        if (numero2 % 2 == 0) {
            printf("\nO segundo numero %d pertence ao conjunto de numeros pares.\n", numero2);
        }
        if (numero2 <= 0) {
            printf("\nO segundo numero %d pertence ao conjunto de numeros negativos.\n", numero2);
        }
    }
}

/* Funcao principal
Responsavel pela execucao do programa: chama as funcoes de identificacao, leitura e verificacao. */
int main(void) {
    int numero1 = 0, numero2 = 0;

    // Passo 1: Exibe a identificação do autor
    identificacao();  

    // Passo 2: Lê o primeiro número inteiro
    printf("Digite o primeiro numero inteiro:\n");
    numero1 = lerNumeroInteiro();
    
    // Passo 3: Lê o segundo número inteiro
    printf("Digite o segundo numero inteiro:\n");
    numero2 = lerNumeroInteiro();
    
    // Passo 4: Verifica as condições dos números e exibe a mensagem correspondente
    verificarCondicoes(numero1, numero2);

    // Passo 5: Finaliza o programa de forma amigável
    printf("Aperte ENTER para finalizar.\n");
    getchar();  // Consumir o ENTER que resta
    getchar();  // Esperar mais uma interação para encerrar o programa

    return 0;
}

/*
 Documentacao complementar:
 - O programa solicita ao usuario dois numeros inteiros.
 - Verifica o conjunto a que cada numero pertence, detalhando suas caracteristicas.
 - O codigo trata entradas invalidas de forma segura e eficiente.
 - As mensagens de erro ajudam o usuario a corrigir entradas invalidas.

 ---------------------------------------------- Historico
 Versao Data        Modificacao
 0.1    07/03/2025 Implementacao inicial da leitura e verificacao dos numeros.
 0.2    07/03/2025 Melhorias na leitura e validacao dos numeros, e melhorias na seguranca e eficiencia.

 ---------------------------------------------- Testes
 Versao Teste
 0.1    Testado com diferentes pares de numeros inteiros. Resultados exibidos corretamente.
 0.2    Testado com entradas validas e invalidas, com mensagens de erro claras e com tratamento eficiente.
*/
