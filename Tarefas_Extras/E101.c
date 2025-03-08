/*
 Exemplo01E2 - v0.1 - 20 / 02 / 2025
 Autor: Gabriel Matos Nogueira

 Para compilar em terminal (janela de comandos):
 Linux : gcc -o 1563147_Gabriel_Matos_Nogueira 01E2.c
 Windows: gcc -o 1563147_Gabriel_Matos_Nogueira 01E2.c

 Para executar em terminal (janela de comandos):
 Linux : ./01E2
 Windows: 01E2
*/

// dependencias
#include <stdio.h>

// declarar PI
#define M_PI 3.141519

// declarar funcoes
void leituraRaio(double *raio);
double seteVezesRaio(double raio);

/* Funcao principal
Ler o raio inserido pelo usuario, calcular a area da circunferencia e multiplicar por 5*/
int main(void)
{
    // inicializar variaveis
    double raio=0.0;
    double area=0.0;

    leituraRaio(&raio);
    area = seteVezesRaio(raio);

    printf("\nO valor do sextuplo da area e: %.2lf\n\n", area);

    // encerrar
    printf("Aperte ENTER para terminar o programa.\n");
    getchar();
    getchar();

    return 0;
}

void leituraRaio(double *raio)
{
    printf("Digite o valor do raio da esfera: ");
    scanf("%lf", raio);
}

double seteVezesRaio(double raio)
{
    // calcular o quintuplo da area
    double area = M_PI * raio * raio * 7;
    return area;
}
