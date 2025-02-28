/*
 Exemplo0113 - v0.1. - 18 / 02 / 2025
 Author: Gabriel Matos Nogueira

 Para compilar em terminal (janela de comandos):
 Linux : gcc -o 1563147_Gabriel_Matos_Nogueira Exemplo0118.c
 Windows: gcc -o 1563147_Gabriel_Matos_Nogueira Exemplo0118.c

 Para executar em terminal (janela de comandos):
 Linux : ./Exemplo0118
 Windows: Exemplo0118
*/

// dependencias
#include <stdio.h>

// declarar funcoes
void leituraMedidas(double *comprimento, double *largura, double *altura);
double cincoVezesLados(double comprimento, double largura, double altura);

int main(void)
{
    // declarar variaveis
    double comprimento = 0.0;
    double largura = 0.0;
    double altura = 0.0;
    double volume = 0.0;

    // acoes
    // chamar funcao de leitura
    leituraMedidas(&comprimento, &largura, &altura);
    volume = cincoVezesLados(comprimento, largura, altura);
    
    // exibir o volume calculado
    printf("O valor do volume e: %.2lf\n", volume);
    
    // encerrar
    printf("Aperte ENTER para finalizar");
    getchar();
    getchar();
    
    return 0;
}

void leituraMedidas(double *comprimento, double *largura, double *altura)
{
    printf("Digite o valor do comprimento do paralelepipedo: ");
    scanf("%lf", comprimento);

    printf("Digite o valor da largura do paralelepipedo: ");
    scanf("%lf", largura);

    printf("Digite o valor da altura do paralelepipedo: ");
    scanf("%lf", altura);
}

double cincoVezesLados(double comprimento, double largura, double altura)
{
    // multiplicar cada lado por 5
    comprimento *= 5;
    largura *= 5;
    altura *= 5;
    
    // calcular o volume
    double volume = comprimento * largura * altura;

    return volume;
}
