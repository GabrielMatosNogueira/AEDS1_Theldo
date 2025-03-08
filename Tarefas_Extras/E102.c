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
#include <math.h>

// declarar PI
#define M_PI 3.141519

// declarar funcoes
void leituraVolume(double *volume);
double calcularRaio(double volume);
double calcularArea(double raio);

/* Funcao principal
Ler o volume da esfera inserido pelo usuario, calcular o raio de tres quintos desse volume e a area da superficie correspondente */
int main(void)
{
    // inicializar variaveis
    double volume = 0.0;
    double raio = 0.0;
    double area = 0.0;

    // leitura do volume
    leituraVolume(&volume);

    // calcular raio com tres quintos do volume
    raio = calcularRaio(volume);

    // calcular area da superficie
    area = calcularArea(raio);

    // exibir resultados
    printf("\nO raio da superficie de tres quintos do volume e: %.4lf\n", raio);
    printf("A area da superficie correspondente e: %.4lf\n\n", area);

    // encerrar
    printf("Aperte ENTER para terminar o programa.\n");
    getchar();
    getchar();

    return 0;
}

// funcao para ler o volume
void leituraVolume(double *volume)
{
    printf("Digite o volume da esfera: ");
    scanf("%lf", volume);
}

// funcao para calcular o raio de tres quintos do volume
double calcularRaio(double volume)
{
    double novo_volume = (3.0 / 5.0) * volume;
    return cbrt((3.0 * novo_volume) / (4.0 * M_PI));
}

// funcao para calcular a area da superficie
double calcularArea(double raio)
{
    return 4.0 * M_PI * raio * raio;
}