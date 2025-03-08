/*
 Exemplo0120 - v0.1 - 20 / 02 / 2025
 Autor: Gabriel Matos Nogueira

 Para compilar em terminal (janela de comandos):
 Linux : gcc -o 1563147_Gabriel_Matos_Nogueira Exemplo0120.c
 Windows: gcc -o 1563147_Gabriel_Matos_Nogueira Exemplo0120.c

 Para executar em terminal (janela de comandos):
 Linux : ./Exemplo0120
 Windows: Exemplo0120
*/

// dependencias
#include <stdio.h>

// declarar pi
#define M_PI 3.141519

// declarar funcoes
void leituraRaio(double *raio);
double volumeEsfera(double raio);

int main(void)
{
    // declarar variaveis
    double raio = 0.0;
    double volume = 0.0;

    // acoes
    // chamar funcao de leitura
    leituraRaio(&raio);
    volume = volumeEsfera(raio);
    
    // exibir o volume calculado
    printf("O volume da esfera com cinco oitavos do raio e: %.2lf\n", volume);
    
    // encerrar
    printf("Aperte ENTER para finalizar");
    getchar();
    getchar();
    
    return 0;
}

void leituraRaio(double *raio)
{
    printf("Digite o valor do raio da esfera: ");
    scanf("%lf", raio);
}

double volumeEsfera(double raio)
{
    // calcular o volume da esfera com cinco oitavos do raio
    double raioNovo = (5.0 / 8.0) * raio;
    double volume = (4.0 / 3.0) * M_PI * (raioNovo * raioNovo * raioNovo);

    return volume;
}

/*
---------------------------------------------- documentacao complementar
---------------------------------------------- notas / observacoes / comentarios
---------------------------------------------- previsao de testes
---------------------------------------------- historico
Versao Data Modificacao
0.1 20/02/2025 esboco inicial
---------------------------------------------- testes
Versao Teste
0.1 00. ( OK ) Exemplo0120.c - Calcular o volume de uma esfera com cinco oitavos do raio fornecido
*/