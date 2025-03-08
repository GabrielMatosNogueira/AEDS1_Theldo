/*
 02E1 - v0.0. - 27 / 02 / 2025
 Author: Gabriel Matos Nogueira

 Para compilar em terminal (janela de comandos):
 Linux : gcc -o 02E1 02E1.c
 Windows: gcc -o 02E1 02E1.c

 Para executar em terminal (janela de comandos):
 Linux : ./02E1
 Windows: 02E1
*/

// dependencias/bibliotecas utilizadas
#include "io.h"  // // biblioteca criada por @GabrielMatosNogueira

/* Procedimento 02E1
Ler tres caracteres separadamente*/
void Procedimento02E1(void)
{
    // identificar
    printf("%s\n", "\n\tProcedimento 02E1\n");

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
        print ("\nTodas as letras sao iguais\n");
    }
    
    if (numero1<numero2)
    {
        if(numero2<numero3)
        {
            printf ("\nAs letras %c, %c, %c estao em ordem alfabetica\n", letra1, letra2, letra3);
        }
        else
        {
            printf ("\nAs letras nao estao em ordem alfabetica\n");
        }
    }

    else if (numero1>numero2)
    {
        if (numero2>numero3)
        {
            printf ("\nAs letras %c, %c, %c estao em ordem oposta do alfabeto\n", letra1, letra2, letra3);
        }
        else
        {
            printf ("\nAs letras nao estao em ordem alfabetica\n");
        }
    }

    // testar com um valor menor
    // encerrar
    printf("%s\n", "\nApertar ENTER para continuar\n");
    getchar();
}

/*
 */
void method_02(void)
{
    // identificar
    printf("%s\n", "\n\tProcedimento 02E1\n");

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

    // checar a disponibilidade entre os elementos
    // tabela ascii tem a ordem inversa onde A=65 e B=67
    /*
    if (numero1<numero2) //ordem 
    {
        if (numero2<numero3)
        {
            print("A ordem da letras sao %c, %c, %c", letra1, letra2, letra3);
        }
        else
        {
            print("A ordem da letras sao %c, %c, %c", letra1, letra3, letra2);
        }
    }
    */ // CONTINUAR ESSE PLANEJAMENTO DEPOIS
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
    Procedimento02E1 ( );

} // end main ( )

/*
documentacao complementar:
programa testado no compilador : gcc version 8.1.0 (x86_64-posix-seh-rev0, Built by MinGW-W64 project)

notas / observacoes / comentarios:
finalizar a versao do if com a identificacao da ordem de cada elemento dos caracteres

previsao de testes
        Codigo de Pessoa: 1563147 | Matricula: 870863
                   Gabriel Matos Nogueira

        Procedimento 02E1


Digite somente letras minusculas!
Digite a primeira letra: a

Digite a segunda letra:
Digite a terceira letra: b
znAs letras nao estao em ordem alfabetica
Apertar ENTER para continuar

PS C:\Users\1563147\Documents\1563147_Gabriel_Matos_Nogueira> ./02E1

        Codigo de Pessoa: 1563147 | Matricula: 870863
                   Gabriel Matos Nogueira

        Procedimento 02E1


Digite somente letras minusculas!
Digite a primeira letra: a

Digite a segunda letra:
Digite a terceira letra: b
znAs letras nao estao em ordem alfabetica
Apertar ENTER para continuar

PS C:\Users\1563147\Documents\1563147_Gabriel_Matos_Nogueira> gcc -o 02E1 02E1.c
PS C:\Users\1563147\Documents\1563147_Gabriel_Matos_Nogueira> ./02E1

        Codigo de Pessoa: 1563147 | Matricula: 870863
                   Gabriel Matos Nogueira

        Procedimento 02E1


Digite somente letras minusculas!
Digite a primeira letra: a

Digite a segunda letra: b

Digite a terceira letra: c

As letras a, b, c estao em ordem alfabetica
Apertar ENTER para continuar


PS C:\Users\1563147\Documents\1563147_Gabriel_Matos_Nogueira> ./02E1

        Codigo de Pessoa: 1563147 | Matricula: 870863
                   Gabriel Matos Nogueira

        Procedimento 02E1


Digite somente letras minusculas!
Digite a primeira letra: c

Digite a segunda letra: b

Digite a terceira letra: a

As letras c, b, a estao em ordem oposta do alfabeto
Apertar ENTER para continuar


PS C:\Users\1563147\Documents\1563147_Gabriel_Matos_Nogueira> ./02E1

        Codigo de Pessoa: 1563147 | Matricula: 870863
                   Gabriel Matos Nogueira

        Procedimento 02E1


Digite somente letras minusculas!
Digite a primeira letra: a

Digite a segunda letra: c

Digite a terceira letra: b

Os numeros nao estao em ordem alfabetica
Apertar ENTER para continuar


PS C:\Users\1563147\Documents\1563147_Gabriel_Matos_Nogueira> gcc -o 02E1 02E1.c
PS C:\Users\1563147\Documents\1563147_Gabriel_Matos_Nogueira> ./02E1

        Codigo de Pessoa: 1563147 | Matricula: 870863
                   Gabriel Matos Nogueira

        Procedimento 02E1


Digite somente letras minusculas!
Digite a primeira letra: a

Digite a segunda letra: c

Digite a terceira letra: b

As letras nao estao em ordem alfabetica
Apertar ENTER para continuar


PS C:\Users\1563147\Documents\1563147_Gabriel_Matos_Nogueira> gcc -o 02E1 02E1.c
PS C:\Users\1563147\Documents\1563147_Gabriel_Matos_Nogueira> ./02E1

        Codigo de Pessoa: 1563147 | Matricula: 870863
                   Gabriel Matos Nogueira

        Procedimento 02E1


Digite somente letras minusculas!
Digite a primeira letra: a

Digite a segunda letra: b

Digite a terceira letra: c

As letras a, b, c estao em ordem alfabetica
Apertar ENTER para continuar

 
PS C:\Users\1563147\Documents\1563147_Gabriel_Matos_Nogueira> gcc -o 02E1 02E1.c
PS C:\Users\1563147\Documents\1563147_Gabriel_Matos_Nogueira> ./02E1

        Codigo de Pessoa: 1563147 | Matricula: 870863
                   Gabriel Matos Nogueira

        Procedimento 02E1


Digite somente letras minusculas!

Digite a primeira letra: a

Digite a segunda letra: b

Digite a terceira letra: c

As letras a, b, c estao em ordem alfabetica
Apertar ENTER para continuar


PS C:\Users\1563147\Documents\1563147_Gabriel_Matos_Nogueira> gcc -o 02E1 02E1.c
PS C:\Users\1563147\Documents\1563147_Gabriel_Matos_Nogueira> ./02E1

        Codigo de Pessoa: 1563147 | Matricula: 870863
                   Gabriel Matos Nogueira

        Procedimento 02E1


Digite somente letras minusculas!

Digite a primeira letra: a

Digite a segunda letra: b

Digite a terceira letra: c

As letras a, b, c estao em ordem alfabetica

Apertar ENTER para continuar

---------------------------------------------- historico
Versao Data Modificacao
0.1 27/02 esboco
1.0 27/02 atualizacao do esboco e utilizacao de novas funcoes
2.0 27/02 teste e ajustes do programa atualizado a biblioteca funcutils.h

---------------------------------------------- testes
Versao Teste       identificacao de programa
0.1 00. ( Not OK ) - esboco irregular com o programa
1.0 00. ( Not OK ) - conferir a comparacao utilizada no if else
2.0 00. ( OK )     - testes finalizados
*/