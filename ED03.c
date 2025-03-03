/*
 ED03 - v0.0. - 28 / 02 / 2025
 Author: Gabriel Matos Nogueira

 Para compilar em terminal (janela de comandos):
 Linux : gcc -o ED03 ED03.c
 Windows: gcc -o ED03 ED03.c

 Para executar em terminal (janela de comandos):
 Linux : ./ED03
 Windows: ED03
*/

// dependencias/bibliotecas utilizadas
#include "funcutils.h"  // // biblioteca criada por @GabrielMatosNogueira

// declarar funcoes

/* Metodo0311
ler um valor do teclado e comparar se ele e maior que a letra K na tabela ascii (75)*/
void Metodo0311(void)
{
    // identificar
    printf("%s\n", "Metodo0311");

    // declarar variaveis
    char letra01 = 'a';

    // acoes
    // ler o dado do teclado
    letra01 = readchar ("\nDigite o caractere desejado: ");

    // transformar o caractere em inteiro (tabela ascii)
    int letra02 = letra01; 

    // comparar as letras maisculas 
    if (letra02 > 75 && letra02 < 91)
    {
        printf ("\n%s'%c'%s", "A letra ", letra01, " e maior que a letra 'K' na tabela ASCII\n");
    }
    else if (letra02 > 96 && letra02 < 123)
    {
        printf ("\n%s'%c'%s", "A letra minuscula ", letra01, " e maior que a letra 'K' na tabela ASCII\n");
    }
    else
    {
        print ("\nO caractere digitado possui um valor menor que o caractere 'K' na tabela ASCII\n");
    }


    // encerrar
    printf("%s\n", "\nApertar ENTER para continuar\n");
    getchar();
}

/* Metodo 0312
 Contar e mostrar apenas as letras minusculas menor que 'k'*/
void Metodo0312(void)
{
    // identificar
    printf("%s\n", "\nMetodo_02\n");

    // declarar variaveis
    char letra01 = 'a';

    // acoes
    // ler o dado do teclado
    letra01 = readchar ("\nDigite o caractere desejado: ");

    // transformar o caractere em inteiro (tabela ascii)
    int letra02 = letra01; 

    // comparar as letras maisculas 
    if (letra02 > 75 && letra02 < 91)
    {
        printf ("\n%s'%c'%s", "A letra ", letra01, " e maior que a letra 'K' na tabela ASCII\n");
    }
    else if (letra02 > 96 && letra02 < 123)
    {
        printf ("\n%s'%c'%s", "A letra minuscula ", letra01, " e maior que a letra 'K' na tabela ASCII\n");
    }
    else
    {
        print ("\nO caractere digitado possui um valor menor que o caractere 'K' na tabela ASCII\n");
    }


    // encerrar
    printf("%s\n", "\nApertar ENTER para continuar\n");
    getchar();
}

/*
 */
void method_03(void)
{
    // identificar
    printf("%s\n", "\nMetodo_03\n");
    // encerrar
    printf("%s\n", "\nApertar ENTER para continuar\n");
    getchar();
}

/*
 */
void method_04(void)
{
    // identificar
    printf("%s\n", "\nMetodo_04\n");
    // encerrar
    printf("%s\n", "\nApertar ENTER para continuar\n");
    getchar();
}

/*
 */
void method_05(void)
{
    // identificar
    printf("%s\n", "\nMetodo_05\n");
    // encerrar
    printf("%s\n", "\nApertar ENTER para continuar\n");
    getchar();
}

/*
 */
void method_06(void)
{
    // identificar
    printf("%s\n", "\nMetodo_06\n");
    // encerrar
    printf("%s\n", "\nApertar ENTER para continuar\n");
    getchar();
}

/*
 */
void method_07(void)
{
    // identificar
    printf("%s\n", "\nMetodo_07\n");
    // encerrar
    printf("%s\n", "\nApertar ENTER para continuar\n");
    getchar();
}

/*
 */
void method_08(void)
{
    // identificar
    printf("%s\n", "\nMetodo_08\n");
    // encerrar
    printf("%s\n", "\nApertar ENTER para continuar\n");
    getchar();
}

/*
 */
void method_09(void)
{
    // identificar
    printf("%s\n", "\nMetodo_09\n");
    // encerrar
    printf("%s\n", "\nApertar ENTER para continuar\n");
    getchar();
}

/*
 */
void method_10(void)
{
    // identificar
    printf("%s\n", "\nMetodo_10\n");
    // encerrar
    printf("%s\n", "\nApertar ENTER para continuar\n");
    getchar();
}

/*
 Funcao principal.
 @return codigo de encerramento
 @param argc - quantidade de parametros na linha de comandos
 @param argv - arranjo com o grupo de parametros na linha de comandos
*/
int main ( void )
{
    // identificar
    Identificacao ( );
    Metodo0311 ( );

    return (0);
} // end main ( )

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