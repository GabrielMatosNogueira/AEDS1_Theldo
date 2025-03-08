/*
Exemplo0300 - v1.0. - 03 / 03 / 2025
Author: Gabriel Matos Nogueira

Para compilar em terminal (janela de comandos):
Linux : gcc -o Exemplo210 Exemplo210.c
Windows: gcc -o Exemplo210 Exemplo210.c

Para executar em terminal (janela de comandos):
Linux : ./Exemplo210
Windows: Exemplo210
*/
// dependencias
#include "io.h" // para definicoes proprias

/**
 Method_00 - nao faz nada.
*/
void method_00(void)
{
    // nao faz nada
} // end method_00 ( )
/**
 Method_01 - Repeticao com teste no inicio.
*/
void method_01(void)
{
    // definir dado
    int x = 0;
    // identificar
    IO_id("Method_01 - v0.0");

    // ler do teclado o valor inicial
    x = IO_readint("Entrar com uma quantidade: ");
    // repetir (x) vezes
    while (x > 0)
    {
        // mostrar valor atual
        IO_println(IO_toString_d(x));
        // passar ao proximo valor
        x = x - 1;
    } // end while
    // encerrar
    IO_pause("Apertar ENTER para continuar");
} // end method_01 ( )

/**
 Method_02 - Repeticao com teste no inicio.
*/
void method_02(void)
{
    // definir dado
    int x = 0;
    int y = 0;

    // identificar
    IO_id("Method_02 - v0.0");

    // ler do teclado
    x = IO_readint("Entrar com uma quantidade: ");

    // repetir (x) vezes
    y = x; // copiar o valor lido (e' melhor)

    if (y < 0)
    {
        printf("\n%d", y);
        while (y < 0)
        {
            // passar ao proximo valor
            y = (y + 1);
            printf("\n%d", y);
        } // end while
        printf("\n");
    }

    if (y > 0)
    {
        printf("\n%d", y);
        while (y > 0)
        {
            // passar ao proximo valor
            y = (y - 1);
            printf("\n%d", y);
        } // end while
        printf("\n");
    }

    if (y == 0)
    {
        IO_print("\n0\n");
    }
    // encerrar
    IO_pause("Apertar ENTER para continuar");
} // end method_02 ( )

/*
 Method_03 - Repeticao com teste no inicio.
*/
void method_03(void)
{
    // definir dado
    int x = 0;
    int y = 0;

    // identificar
    IO_id("Method_03 - v0.0");

    // ler do teclado
    x = IO_readint("Entrar com uma quantidade: ");

    // repetir (x) vezes
    y = 1; // o valor lido devera' ser preservado

    if (x >= 0)
    {
        while (x > 0)
        {
            // mostrar valor atual
            IO_printf("%d\n", x);

            // passar ao proximo valor
            x = x - 1;
        } // end while
    }

    if (x <= 0)
    {
        while (x <= 0)
        {
            // mostrar valor atual
            IO_printf("%d\n", x);

            // passar ao proximo valor
            x = x + 1;
        } // end while
    }

    // encerrar
    IO_pause("Apertar ENTER para continuar");
} // end method_03 (

/**
 Method_04 - Repeticao com teste no inicio e variacao.
*/
void method_04(void)
{
    // definir dado
    int x = 0;
    int y = 0;
    int z = 0;

    // identificar
    IO_id("Method_04 - v0.0");

    // ler do teclado
    x = IO_readint("Entrar com uma quantidade: ");

    // repetir (x) vezes
    // inicio teste variacao

    if (x < 0)
    {
        IO_print("\nValor invalido de repeticoes\n");
    }

    if (x > 0)
    {
        for (y = 1; y <= x; y = y + 1)
        {
            // ler valor do teclado
            z = IO_readint("Valor = ");
            // mostrar valor atual
            IO_printf("%d. %d\n", y, z);
        } // end for
    }

    // encerrar
    IO_pause("Apertar ENTER para continuar");
} // end method_04 ( )

/**
 Method_05 - Repeticao com teste no inicio e variacao.
*/
void method_05(void)
{
    // definir dado
    int x = 0;
    int y = 0;
    int z = 0;
    // identificar
    IO_id("Method_05 - v0.0");
    // ler do teclado
    x = IO_readint("Entrar com uma quantidade: ");
    // repetir (x) vezes
    // inicio teste variacao

    if (x < 0)
    {
        IO_print("\nValor invalido de repeticoes\n");
    }

    for (y = x; y >= 1; y = y - 1)
    {
        // ler valor do teclado
        z = IO_readint("Valor = ");
        // mostrar valor atual
        IO_printf("%d. %d\n", y, z);
    } // end for
    // encerrar
    IO_pause("Apertar ENTER para continuar");
} // end method_05 ( )

/**
 Method_06 - Repeticao sobre cadeia de caracateres.
*/
void method_06(void)
{
    // definir dado
    int x = 0;
    int y = 0;

    chars palavra = IO_new_chars(STR_SIZE);
    int tamanho = 0;
    // identificar
    IO_id("Method_06 - v0.0");
    // ler do teclado
    palavra = IO_readstring("Entrar com uma palavra: ");
    // repetir para cada letra
    tamanho = strlen(palavra) - 1;
    // OBS: A cadeia de caracteres iniciam suas posições em zero.
    // inicio teste variacao
    for (y = tamanho; y >= 0; y = y - 1)
    {
        // mostrar valor atual
        IO_printf("%d: [%c]\n", y, palavra[y]);
    } // end for
    // encerrar
    IO_pause("Apertar ENTER para continuar");
} // end method_06 ( )

/**
 Method_07 - Repeticao sobre cadeia de caracateres.
*/
void method_07(void)
{
    // definir dado
    int x = 0;
    int y = 0;

    char palavra[100];
    int tamanho = 0;
    // identificar
    IO_id("Method07 - v0.0");
    // ler do teclado
    IO_printf("Entrar com uma palavra: ");
    scanf("%s", palavra);
    getchar();
    // OBS: A cadeia de caracteres dispensa a indicacao de endereco (&) na leitura.
    // repetir para cada letra
    tamanho = strlen(palavra);
    // OBS: A cadeia de caracteres iniciam suas posições em zero.
    // inicio teste variacao
    for (y = 0; y < tamanho; y = y + 1)
    {
        // mostrar valor atual
        IO_printf("%d: [%c]\n", y, palavra[y]);
    } // end for
    // encerrar
    IO_pause("Apertar ENTER para continuar");
} // end method_07 ( )

/**
 Method_08 - Repeticao com intervalos.
*/
void method_08(void)
{
    // definir dado
    int inferior = 0;
    int superior = 0;
    int x = 0;
    // identificar
    IO_id("Method08 - v0.0");
    // ler do teclado
    inferior = IO_readint("Limite inferior do intervalo: ");
    superior = IO_readint("Limite superior do intervalo : ");
    // inicio teste variacao
    for (x = inferior; x <= superior; x = x + 1)
    {
        // mostrar valor atual
        IO_printf("%d\n", x);
    } // end for
    // encerrar
    IO_pause("Apertar ENTER para continuar");
} // end method_08 ( )

/**
 Method_09 - Repeticao com intervalos.
*/
void method_09(void)
{
    // definir dado
    double inferior = 0;
    double superior = 0;
    double passo = 0;
    double x = 0;
    // identificar
    IO_id("Method_09 - v0.0");
    // ler do teclado
    inferior = IO_readdouble("Limite inferior do intervalo : ");
    superior = IO_readdouble("Limite superior do intervalo : ");
    passo = IO_readdouble("Variacao no intervalo (passo): ");
    // inicio teste variacao
    for (x = superior; x >= inferior; x = x - passo)
    {
        // mostrar valor atual
        IO_printf("%lf\n", x);
    } // end for
    // encerrar
    IO_pause("Apertar ENTER para continuar");
} // end method_09 ()

/**
 Method_10 - Repeticao com confirmacao.
*/
void method_10(void)
{

    // definir dado
    double inferior = 0;
    double superior = 0;
    double passo = 0;
    double x = 0;

    // identificar
    IO_id("Method10 - v0.0");

    // ler do teclado
    inferior = IO_readdouble("Limite inferior do intervalo : ");

    // repetir ate' haver confirmacao de validade
    do
    {
        superior = IO_readdouble("Limite superior do intervalo: ");
    } while (inferior >= superior);

    // repetir ate' haver confirmacao de validade
    do
    {
        passo = IO_readdouble("Variacao no intervalo (passo): ");
    } while (passo <= 0.0);

    // inicio teste variacao
    for (x = inferior; x <= superior; x = x + passo)
    {
        // mostrar valor atual
        IO_printf("%lf\n", x);
    } // end for

    // encerrar
    IO_pause("Apertar ENTER para continuar");
} // end method_10 ( )

/*
 Funcao principal.
 @return codigo de encerramento
*/

int main()
{
    // definir dado
    int x = 0;

    // repetir até desejar parar
    do
    {

        // identificar
        IO_id("Exemplo 300 - Programa - v1.0");

        // ler do teclado
        IO_println("Opcoes");
        IO_println("0 - parar");
        IO_println("1 - repeticao com teste no inicio");
        IO_println("2 - repeticao com teste no inicio");
        IO_println("3 - repeticao com teste no inicio");
        IO_println("4 - repeticao com teste no inicio");
        IO_println("5 - repeticao com teste no inicio");
        IO_println("6 - repeticao com teste no inicio");
        IO_println("7 - repeticao com teste no inicio");
        IO_println("8 - repeticao com teste no inicio");
        IO_println("9 - repeticao com teste no inicio");
        IO_println("10 - repeticao com teste no inicio");
        IO_println("");
        x = IO_readint("Entrar com uma opcao: ");

        // testar valor
        switch (x)
        {
        case 0:
            method_00();
            break;
        case 1:
            method_01();
            break;
        case 2:
            method_02();
            break;
        case 3:
            method_03();
            break;
        case 4:
            method_04();
            break;
        case 5:
            method_05();
            break;
        case 6:
            method_06();
            break;
        case 7:
            method_07();
            break;
        case 8:
            method_08();
            break;
        case 9:
            method_09();
            break;
        case 10:
            method_10();
            break;
        default:
            IO_pause(IO_concat("Valor diferente das opcoes [0,10] (",
                               IO_concat(IO_toString_d(x), ")")));
        } // end switch
    } while (x != 0);
    // encerrar
    IO_pause("Apertar ENTER para terminar");
    return (0);
} // end main ( )

/*----------------------------------------------
DOCUMENTACAO COMPLEMENTAR


----------------------------------------------
PREVISAO DE TESTES

Metodo 02 - 0, 1, 5, -5
Metodo 03 - 0, 1, 5, -5
Metodo 04 - 0, 1, 5, -5
Metodo 05 - 0, 1, 5, -5

Metodo 06 -
a.) "a"
b.) "abc"
c.) "abc def"


Metodo 07 -
a.) "a"
b.) "abc"
c.) "abc def"

Metodo 08 -
a.) 0 e 1
b.) 1 e 5
c.) 3 e 5
d.) -5 e 5

Metodo 09 -
a.) 0 e 1, passo 1
b.) 1 e 5, passo 1
c.) 1 e 5, passo 2
d.) 3 e 5, passo 1
e.) 3 e 5, passo 2
f. ) -5 e 5, passo 1
g.) -5 e 5, passo 2
h.) -5 e 5, passo 5
i.) -5 e 5, passo -1

Metodo 10
a.) [ 0.1 : 0.5 ] e passo = 0.1
b.) [ 0.5 : 0.1 ] e passo = -0.1
c.) [ 0.5 : 0.1 ] e passo = 0.1
d.) [ 0.1 : 0.5 ] e passo = -0.1

----------------------------------------------
NOTAS / OBSERVACOES / COMENTARIOS

Metodo 02 - Resolver a saida do numero cinco o qual exibe o numero 5, 5 vezes
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