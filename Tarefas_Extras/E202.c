/*
 02E2 - v0.0. - 27 / 02 / 2025
 Author: Gabriel Matos Nogueira

 Para compilar em terminal (janela de comandos):
 Linux : gcc -o 02E2 02E2.c
 Windows: gcc -o 02E2 02E2.c

 Para executar em terminal (janela de comandos):
 Linux : ./02E2
 Windows: 02E2
*/

// dependencias/bibliotecas utilizadas
#include "io.h"  // // biblioteca criada por @GabrielMatosNogueira

/* Procedimento 02E1
verificar se os numeros estao dentro de um intervalo*/
void Procedimento02E2(void)
{
    // identificar
    printf("%s\n", "\n\tProcedimento 02E2\n");

    // declarar variaveis
    char letra1 = 'a';
    char letra2 = 'a';
    char letra3 = 'a';

    // acoes
    // ler variaveis
    print ("\nDigite somente letras minusculas!\n");

    print ("\nDigite a primeira letra: ");
    scanf ("%c", &letra1 );
    getchar ();

    print ("\nDigite a segunda letra: ");
    scanf ("%c", &letra2);
    getchar ();

    print ("\nDigite a terceira letra: ");
    scanf ("%c", &letra3);
    getchar ();

    // transformando os numeros para tabela ascii
    
    int numero1=letra1;
    int numero2=letra2;
    int numero3=letra3;

    // comparar o tamanho dos inteiros, quanto menor, mais proximo de A
    
    if (numero1==numero2 && numero1 == numero3 && numero3 == numero2)
    {
        print ("\nO primeiro termo esta fora do conjunto\n");
    }
    
    if (numero1 >= numero2 && numero1 <= numero3 )
    {
        printf ("\nA letra %c esta dentro do conjunto entre [%c,%c]\n", letra1, letra2, letra3);
    }

    if (numero2 >= numero1 && numero2 >= numero3)
    {
        printf ("\nA letra %c esta dentro do conjunto entre [%c,%c]\n", letra1, letra2, letra3);
    }   
     
    else
    {
        printf ("\nA letra %c nao esta dentro do conjunto entre [%c,%c]\n", letra1, letra2, letra3);
    }

    // testar com um valor menor
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
    Procedimento02E2 ( );

} // end main ( )

/*
---------------------------------------------- documentacao complementar
---------------------------------------------- notas / observacoes / comentarios
---------------------------------------------- previsao de testes
---------------------------------------------- historico
Versao Data Modificacao
0.1 __/__ esboco

---------------------------------------------- testes
Versao Teste
0.0 00. ( ___ ) identificacao de programa
*/