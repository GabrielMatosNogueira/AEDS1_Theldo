/*
 Exemplo0112 - v0.1. - 18 / 02 / 2025
 Author: Gabriel Matos Nogueira

 Para compilar em terminal (janela de comandos):
 Linux : gcc -o Semana02 Exemplo0112.c
 Windows: gcc -o Semana02 Exemplo0112.c

 Para executar em terminal (janela de comandos):
 Linux : ./Exemplo0112
 Windows: Exemplo0112
*/

// Dependencias
#include <stdio.h>  // Para entradas e saidas
#include <stdlib.h> // Para outras funcoes de uso geral

// Declarar funcoes
void identificacao ( void );
void lerValor ( int *lado );
void calcularAreaPerimetroQuadrado (int lado);

// Metodo identificacao
// Exibe a identificacao para visualizacao do professor
void identificacao ( void )
{
    printf("%s\n", "1563147 - Gabriel Matos Nogueira");
}

// Metodo lerValor
// Requisita ao usuario digitar um valor e armazena o valor inteiro
void lerValor ( int *lado )
{
    printf("Digite o valor inteiro do lado do quadrado: ");
    scanf("%d", lado);
}

// Metodo calcularAreaPerimetroQuadrado
// Calcula e mostra a area e o perimetro de um quadrado com metade do lado
void calcularAreaPerimetroQuadrado (int lado)
{
    int novoLado = lado / 2;
    int area = novoLado * novoLado;
    int perimetro = 4 * novoLado;  

    // Exibe os resultados
    printf("\nQuadrado com metade do lado:\n");
    printf("Lado: %d\n", novoLado);
    printf("Area: %d\n", area);
    printf("Perimetro: %d\n", perimetro);
}

// Funcao principal
// Chama os metodos feitos anteriormente para calculo da area e perimetro
int main ( void )
{
    int lado = 0; 
    identificacao(); 
    lerValor(&lado); 
    calcularAreaPerimetroQuadrado(lado); 

    // Encerrar
    printf("\n\nDigite ENTER para finalizar o programa\n");
    getchar(); // Captura o ENTER apos a exibicao do texto
    getchar(); // Captura o ENTER pressionado para finalizar

    return 0;
}

/*
Programa dividido em modulos para execucao de tarefas como identificacao, calculo do area a partir do lado, triplicacao do lado e calculo da nova area - documentacao complementar
problemas com a biblioteca math.h e a utilizacao de ponteiros com passagem de parametros dentro de um parametro - notas / observacoes / comentarios
foram feitos 6 testes para a verificacao de seguranca e velocidade do programa - previsao de testes

---------------------------------------------- historico
Versao Data Modificacao

0.1 - 17 / 02 / 2025 ( OK )

---------------------------------------------- testes
Versao Teste

0.1 ( OK ) Sem problemas de execucao e tempo de resposta ok

*/