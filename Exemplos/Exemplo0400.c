/*
 Exemplo0400 - v1.0. - 04 / 03 / 2025
 Author: Gabriel Matos Nogueira

 Para compilar em terminal (janela de comandos):
 Linux : gcc -o 0400 0400.c
 Windows: gcc -o 0400 0400.c

 Para executar em terminal (janela de comandos):
 Linux : ./0400
 Windows: 0400
*/

// dependencias/bibliotecas utilizadas
#include "io.h" // biblioteca padrao que inclui stdio, math.h, stdlib, ctype, iso64, strig.h, entre outras

/**
Method_01 - Repeticao para ler certa quantidade de valores.
*/
void method_01()
{
    // definir dado
    int quantidade = 0;
    int valor = 0;
    int controle = 0;

    // identificar
    IO_id("Method 01 - v0.0");

    // ler do teclado
    quantidade = IO_readint("Entrar com uma quantidade inteira: ");

    // checar se o numero e negativo
    if ( quantidade <= 0 )
    {
        IO_printf ( "\nDigite um valor positivo e nao nulo\n\n");
    }

    // repetir para a quantidade de vezes informada
    controle = 1;
    while (controle <= quantidade)
    {

        // ler valor do teclado
        valor = IO_readint(IO_concat(
            IO_concat("", IO_toString_d(controle)),
            ": "));

        // mostrar valor lido
        printf("\n%s%d", "valor = ", valor);

        // passar ao proximo valor
        controle = controle + 1;
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
    x = IO_readint("Entrar com uma quantidade inteira: ");

    // repetir (x) vezes
    y = x;

    // validacao de entrada
    if (y < 0)
    {
        printf("\nO numero %d e invalido para essa operacao\n\n", y);
    }

    // copiar o valor lido (e' melhor)
    while (y > 0)
    {
        // mostrar valor atual
        IO_println(IO_toString_d(x));

        // passar ao proximo valor
        y = y - 1;

    } // end while

} // end method_02 ( )

/**
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
    x = IO_readint("Entrar com uma quantidade inteira: ");

    // repetir (x) vezes
    y = 1;

    // checar se o numero e menor que zero
    if (x <= 0)
    {
        printf("\nO numero %d e invalido para essa operacao, digite um numero positivo nao nulo\n\n", x);
    }

    // o valor lido devera' ser preservado
    while (y <= x)
    {
        // mostrar valor atual
        IO_printf("%d\n", y);

        // passar ao proximo valor
        y = y + 1;

    } // end while

    // encerrar
    IO_pause("Apertar ENTER para continuar");

} // end method_03 ( )

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
    
    // checar se o numero e menor que zero
    if (x <= 0)
    {
        printf("\nO numero %d e invalido para essa operacao, digite um numero positivo nao nulo\n\n", x);
    }

    // repetir (x) vezes
    //inicio teste variacao 
    for (y = 1; y <= x; y = y + 1)
    {
        // ler valor do teclado
        z = IO_readint("Valor = ");

        // mostrar valor atual
        IO_printf("%d. %d\n", y, z);
        
    } // end for
}

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

    // checar se o numero e menor que zero
    if (x <= 0)
    {
        printf("\nO numero %d e invalido para essa operacao, digite um numero positivo nao nulo\n\n", x);
    }

    // repetir (x) vezes
    // inicio teste variacao
    for (y = x; y >= 1; y = y - 1)
    {
        // ler valor do teclado
        z = IO_readint("Valor = ");

        // mostrar valor atual
        IO_printf("%d. %d\n", y, z);

    } // end for
}

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
    //inicio teste variacao 

    for (y = tamanho; y >= 0; y = y - 1)
    {
        // mostrar valor atual
        IO_printf("%d: [%c]\n", y, palavra[y]);

    } // end for

    // encerrar
    IO_pause("Apertar ENTER para continuar");

} // end method_06 ( )

/**
Method_07 - Verificar e evitar espaços em uma palavra.
*/
void method_07(void)
{
    char palavra[STR_SIZE];
    int espacoEncontrado;

    // identificar
    IO_id("Method07 - v0.3");

    do
    {
        // ler do teclado
        IO_printf("Entrar com uma palavra (sem espacos): ");
        scanf("%s", palavra);
        getchar();

        // verificar se há espaço
        espacoEncontrado = 0;
        for (int i = 0; palavra[i] != '\0'; i++)
        {
            if (palavra[i] == ' ')
            {
                espacoEncontrado = 1;
                IO_printf("Nao utilize espacos entre as palavras!\n");
                break;
            }
        }

    } while (espacoEncontrado); // repete enquanto houver espaços

    // mostrar cada caractere e sua posição
    for (int y = 0; palavra[y] != '\0'; y++)
    {
        IO_printf("%d: [%c]\n", y, palavra[y]);
    }

    // encerrar
    IO_pause("Apertar ENTER para continuar");
} // end method_07

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
int main(void)
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
        printf("\n");

        // testar valor
        switch (x)
        {
        case 0:
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
NOTAS / OBSERVACOES / COMENTARIOS

Metodo 07 - Perguntar para o Theldo como varrer uma sting em busca de espacos ' ' 



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