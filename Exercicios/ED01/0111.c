/*
 Exemplo0111 - v0.2. - 18 / 02 / 2025
 Author: Gabriel Matos Nogueira

 Para compilar em terminal (janela de comandos):
 Linux : gcc -o Semana02 Exemplo0111.c
 Windows: gcc -o Semana02 Exemplo0111.c

 Para executar em terminal (janela de comandos):
 Linux : ./Exemplo0111
 Windows: Exemplo0111
*/

// Dependências
#include <stdio.h>  // Para entradas e saidas
#include <stdlib.h> // Para outras funcoes de uso geral
#include <math.h>   // Para função matemática pow()

// Declarar funções
void identificacao ( void );
void lerValor ( int *lado );
int areaQuadrado (int *lado );
int triplicarLadoeArea ( int *lado );

// Método identificacao
// Exibe a identificação para visualizacao do professor
void identificacao ( void )
{
    printf("%s\n", "1563147 - Gabriel Matos Nogueira");
}

// Método lerValor
// Requisita ao usuário digitar um valor e armazena o valor inteiro
void lerValor ( int *lado )
{
    printf("Digite o somente o valor inteiro do lado: ");
    scanf("%d", lado);
}

// Método areaQuadrado
// Calcula e retorna o valor da area do quadrado, elevando o número a segunda potencia
int areaQuadrado ( int *lado )
{
    int area = 0;
    area = (*lado) * (*lado); // Calculando a area do quadrado
    printf("\nO valor da area e: %d\n", area);
    return area;
}

// Método triplicarLadoeArea
// Triplica o valor fornecido e exibe a nova area
int triplicarLadoeArea ( int *lado )
{
    int novaArea = 0;
    *lado = *lado * 3; // Triplicando o valor do lado
    novaArea = (*lado) * (*lado); 
    printf("\nO valor da area triplicada e: %d\n", novaArea);
    return novaArea;
}

// Funcao principal
// Chama os metodos feitos anteriormente para o calculo de ambas as areas
int main ( void )
{
    int lado = 0; 
    identificacao(); 
    lerValor(&lado); 
    areaQuadrado(&lado); 
    triplicarLadoeArea(&lado); 

    // Encerrar
    printf("\n\nDigite ENTER para finalizar o programa\n");
    getchar(); // Captura o ENTER apos a exibicao do texto
    getchar(); // Captura o ENTER pressionado para finalizar

    return 0;
}
/*
Programa divido em modulos para execucao de tarefas como identificacao, calculo do area a partir do lado, triplicacao do lado e calculo da nova area - documentacao complementar
problemas com a biblioteca math.h e a utilizacao de ponteiros com passagem de parametros dentro de um parametro - notas / observacoes / comentarios
foram feitos 6 testes para a verificacao de seguranca e velocidade do programa - previsao de testes

---------------------------------------------- historico
Versao Data Modificacao
0.1 - 17 / 02 / 2025 esboco
0.2 - 18 / 02 / 2025 planejamento, analise, execucao e teste

---------------------------------------------- testes
Versao Teste
0.0 1. ( X ) falha no uso de ponteiro
0.0.2 ( X ) falha no uso da biblioteca <math.h> 
0.0.2 ( OK ) sucesso na execucao do programa com velocidade ok e exemplo de teste ' retornando um valor '
*/