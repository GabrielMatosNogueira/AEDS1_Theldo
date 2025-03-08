/*
 Standart - v1.0. - 28 / 02 / 2025
 Author: Gabriel Matos Nogueira

 Para compilar em terminal (janela de comandos):
 Linux : gcc -o standart standart.c
 Windows: gcc -o standart standart.c

 Para executar em terminal (janela de comandos):
 Linux : ./standart
 Windows: standart
*/

#include "io.h" // biblioteca criada por @GabrielMatosNogueira
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// declarar pi
#define M_PI 3.141519

// Declarar todas as funções/procedimentos
void identificacao(void);
void lerValor(int *lado);
int areaQuadrado(int *lado);
int triplicarLadoeArea(int *lado);
void calcularAreaPerimetroQuadrado(int lado);
void leituraRaio(double *raio);
double volumeEsfera(double raio);
void pause(void);  // Adicionado pause

void method_01(void);
void method_02(void);
void method_03(void);
void method_04(void);
void method_05(void);
void method_06(void);
void method_07(void);
void method_08(void);
void method_09(void);
void method_10(void);

// Metodo identificacao
void identificacao(void)
{
    printf("%s\n", "1563147 - Gabriel Matos Nogueira");
}

// Metodo pause (adicionado)
void pause(void)
{
    printf("Pressione ENTER para continuar...\n");
    getchar();
}

// Metodo lerValor
void lerValor(int *lado)
{
    printf("Digite o valor inteiro do lado: ");
    scanf("%d", lado);
}

// Metodo areaQuadrado
int areaQuadrado(int *lado)
{
    int area = (*lado) * (*lado);
    printf("\nO valor da area e: %d\n", area);
    return area;
}

// Metodo triplicarLadoeArea
int triplicarLadoeArea(int *lado)
{
    *lado = (*lado) * 3;
    int novaArea = (*lado) * (*lado);
    printf("\nO valor da area triplicada e: %d\n", novaArea);
    return novaArea;
}

// Metodo calcularAreaPerimetroQuadrado
void calcularAreaPerimetroQuadrado(int lado)
{
    int novoLado = lado / 2;
    int area = novoLado * novoLado;
    int perimetro = 4 * novoLado;

    printf("\nQuadrado com metade do lado:\n");
    printf("Lado: %d\n", novoLado);
    printf("Area: %d\n", area);
    printf("Perimetro: %d\n", perimetro);
}

// Funcoes da esfera
void leituraRaio(double *raio)
{
    printf("Digite o valor do raio da esfera: ");
    scanf("%lf", raio);
}

double volumeEsfera(double raio)
{
    double raioNovo = (5.0 / 8.0) * raio;
    double volume = (4.0 / 3.0) * M_PI * (raioNovo * raioNovo * raioNovo);
    return volume;
}

// Metodos numerados (method_01 ao method_10)
void method_01(void) { printf("\nMetodo_01\n"); }
void method_02(void) { printf("\nMetodo_02\n"); }
void method_03(void) { printf("\nMetodo_03\n"); }
void method_04(void) { printf("\nMetodo_04\n"); }
void method_05(void) { printf("\nMetodo_05\n"); }
void method_06(void) { printf("\nMetodo_06\n"); }
void method_07(void) { printf("\nMetodo_07\n"); }
void method_08(void) { printf("\nMetodo_08\n"); }
void method_09(void) { printf("\nMetodo_09\n"); }
void method_10(void) { printf("\nMetodo_10\n"); }

// Menu interativo com switch case
void menu(void)
{
    int opcao = 0;
    int lado = 0;

    do
    {
        printf("\nSelecione uma opcao: \n");
        printf("\n1 - Identificacao\n");
        printf("2 - Ler Valor\n");
        printf("3 - Calcular Area Quadrado\n");
        printf("4 - Triplicar Lado e Area\n");
        printf("5 - Calcular Area e Perimetro Quadrado com metade do lado\n");
        printf("6 - Calcular Volume da Esfera com 5/8 do raio\n");
        printf("7 - Metodo 01\n");
        printf("8 - Metodo 02\n");
        printf("9 - Metodo 03\n");
        printf("10 - Metodo 04\n");
        printf("11 - Metodo 05\n");
        printf("12 - Metodo 06\n");
        printf("13 - Metodo 07\n");
        printf("14 - Metodo 08\n");
        printf("15 - Metodo 09\n");
        printf("16 - Metodo 10\n");
        printf("0 - Sair\n");
        printf("\nEscolha uma opcao: ");
        scanf("%d", &opcao);
        getchar();

        switch (opcao)
        {
        case 1:
            identificacao();
            pause();
            break;
        case 2:
            lerValor(&lado);
            pause();
            break;
        case 3:
            areaQuadrado(&lado);
            pause();
            break;
        case 4:
            triplicarLadoeArea(&lado);
            pause();
            break;
        case 5:
            calcularAreaPerimetroQuadrado(lado);
            pause();
            break;
        case 6:
        {
            double raio = 0.0;
            leituraRaio(&raio);
            double volume = volumeEsfera(raio);
            printf("O volume da esfera com cinco oitavos do raio e: %.2lf\n", volume);
            pause();
            break;
        }
        case 7:
            method_01();
            pause();
            break;
        case 8:
            method_02();
            pause();
            break;
        case 9:
            method_03();
            pause();
            break;
        case 10:
            method_04();
            pause();
            break;
        case 11:
            method_05();
            pause();
            break;
        case 12:
            method_06();
            pause();
            break;
        case 13:
            method_07();
            pause();
            break;
        case 14:
            method_08();
            pause();
            break;
        case 15:
            method_09();
            pause();
            break;
        case 16:
            method_10();
            pause();
            break;
        case 0:
            printf("Encerrando programa...\n");
            break;
        default:
            printf("Opcao invalida! Tente novamente.\n");
            pause();
            break;
        }
    } while (opcao != 0);
}

// Funcao principal
int main(void)
{
    menu();
    return 0;
}

/*----------------------------------------------
DOCUMENTACAO COMPLEMENTAR


----------------------------------------------
NOTAS / OBSERVACOES / COMENTARIOS


----------------------------------------------
PREVISAO DE TESTES


----------------------------------------------
HISTORICO


----------------------------------------------
Versao    Data      Modificacao
0.1       __/__     Esboco

----------------------------------------------
RESULTADOS TESTES
----------------------------------------------
Versao    Teste
0.0       00. ( ___ ) Identificacao de Programa
*/