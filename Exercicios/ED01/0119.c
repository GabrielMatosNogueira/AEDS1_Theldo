/*
 Exemplo0119 - v0.1. - 20 / 02 / 2025
 Author: Gabriel Matos Nogueira

 Para compilar em terminal (janela de comandos):
 Linux : gcc -o 1563147_Gabriel_Matos_Nogueira Exemplo0119.c
 Windows: gcc -o 1563147_Gabriel_Matos_Nogueira Exemplo0119.c

 Para executar em terminal (janela de comandos):
 Linux : ./Exemplo0119
 Windows: Exemplo0119
*/

// dependencias
#include <stdio.h>
#include <math.h>

// declarar pi
#define M_PI 3.141519

// declarar funcoes
void leituraRaio(double *raio);
double areaSemicirculo(double raio);

int main(void)
{
    // declarar variaveis
    double raio = 0.0;
    double area = 0.0;

    // acoes
    // chamar funcao de leitura
    leituraRaio(&raio);
    area = areaSemicirculo(raio);
    
    // exibir a area calculada
    printf("A area do semicirculo com quatro vezes o raio e: %.2lf\n", area);
    
    // encerrar
    printf("Aperte ENTER para finalizar");
    getchar();
    getchar();
    
    return 0;
}

void leituraRaio(double *raio)
{
    printf("Digite o valor do raio do circulo: ");
    scanf("%lf", raio);
}

double areaSemicirculo(double raio)
{
    // calcular a area do semicirculo com quatro vezes o raio
    double raioNovo = 4 * raio;
    double area = (M_PI * raioNovo * raioNovo) / 2;

    return area;
}
/*
---------------------------------------------- documentacao complementar
---------------------------------------------- notas / observacoes / comentarios
---------------------------------------------- previsao de testes
---------------------------------------------- historico
Versao Data Modificacao
0.1 __/__ esboco
---------------------------------------------- testes
Versao Teste
0.1 00. ( OK ) Exemplo0119.c - Calcular a area de um semicirculo com 4 vezes o raio fornecido
*/