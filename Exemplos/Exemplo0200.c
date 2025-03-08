/*
 Standart - v2.0. - 24 / 02 / 2025
 Author: Gabriel Matos Nogueira

 Para compilar em terminal (janela de comandos):
 Linux : gcc -o Exemplo210 Exemplo210.c
 Windows: gcc -o Exemplo210 Exemplo210.c

 Para executar em terminal (janela de comandos):
 Linux : ./Exemplo210
 Windows: Exemplo210
*/

// dependencias/bibliotecas utilizadas
#include "io.h" // biblioteca criada por @GabrielMatosNogueira

// declarar funcoes

/* Procedimento 211
 Ler um numero inteiro, identificar se e par ou impar além de positivo e negativo*/
void Procedimento211(void)
{
    // Identificar
    printf("\n\tProcedimento 0211\n");

    // declarar variavel
    int numero;

    // Acoes
    // Tentar ler um numero inteiro de forma segura
    printf("Digite o numero desejado: ");
    scanf("%d", &numero);
    getchar();

    // Identificar se e positivo ou negativo
    if (numero > 0)
    {
        if (numero % 2 == 0)
        {
            printf("O numero %d e positivo e par.\n", numero);
        }
        else
        {
            printf("O numero %d e positivo e impar.\n", numero);
        }
    }
    else if (numero < 0)
    {
        if (numero % 2 == 0)
        {
            printf("O numero %d e negativo e par.\n", numero);
        }
        else
        {
            printf("O numero %d e negativo e impar.\n", numero);
        }
    }
    else
    {
        // Caso o numero seja zero
        printf("O numero %d e zero e par.\n", numero);
    }

    // Encerrar
    printf("\nApertar ENTER para continuar\n");
    getchar(); // Para consumir a nova linha que fica no buffer
}

/* Procedimento 212
Identificar se o numero e par e menor que -25 ou impar e maior que 25 */
void Procedimento212(void)
{
    // identificar
    printf("%s\n", "\n\tProcedimento 212\n");

    // declarar variavel
    int numero;

    // acoes
    // ler a variavel do teclado
    printf("Digite o valor da variavel: ");
    scanf("%d", &numero);
    getchar();

    // condicional para verificar se o numero e maior ou menos que 25 e se e par ou impar
    if (numero > 25) // condicional para o numero maior que 25
    {
        if (numero % 2 == 0) // verifica se o numero e par
        {
            printf("O numero %d e maior que 25 e par\n", numero);
        }
        else // caso nao for par, ele sera identificado como impar
        {
            printf("O numero %d e maior que 25 e impar\n", numero);
        }
    }
    if (numero < 25 && numero > -25)
    {
        if (numero % 2 == 0) // verifica se o numero e par
        {
            printf("O numero %d esta entre (-25,25) e e par\n", numero);
        }
        else // caso nao for par, ele sera identificado como impar
        {
            printf("O numero %d esta entre (-25,25) e e impar\n", numero);
        }
    }
    if (numero < -25)
    {
        if (numero % 2 == 0) // verifica se o numero e par
        {
            printf("O numero %d e menor que -25 e par\n", numero);
        }
        else // caso nao for par, ele sera identificado como impar
        {
            printf("O numero %d e maior que 25 e impar\n", numero);
        }
    }

    // encerrar
    printf("%s\n", "\nApertar ENTER para continuar\n");
    getchar();
}

/* Procedimento 213
 Ler um valor inteiro do teclado e checar se faz parte do intervalo aberto (20, 55)*/
void Procedimento213(void)
{
    // identificar
    printf("%s\n", "\n\tProcedimento 213\n");

    // declarar variaveis
    int numero = 0;

    // acoes
    // ler o numero do teclado
    printf("Digite o valor do numero desejado: ");
    scanf("%d", &numero);
    getchar();

    if (numero < 20 || numero > 55)
    {
        printf("O numero %d nao pertence ao intervalo aberto (20,55)", numero);
    }
    else
    {
        printf("O numero %d pertence ao intervalo aberto (20,55)", numero);
    }

    // encerrar
    printf("%s\n", "\nApertar ENTER para continuar\n");
    getchar();
}
/* Procedimento 214
Ler um dado inserido pelo teclado e indentificar se pertence ao conjunto [20,55]*/
void Procedimento214(void)
{
    // identificar
    printf("%s\n", "\n\tProcedimento 214\n");

    // declarar variavel
    int numero = 0;

    // ler dado do teclado
    printf("Digite o valor desejado: ");
    scanf("%d", &numero);
    getchar();

    // descobrir se o numero se encontra na intersecao (20 ate 55)
    if (numero >= 20 && numero <= 55)
    {
        printf("\nO numero %d se encontra na intersecao do intervalo entre os dois conjuntos\n", numero);
    }
    else
    {
        printf("\nO numero %d nao pertence ao intervalo de [20,50]", numero);
    }
    // encerrar
    printf("%s\n", "\nApertar ENTER para continuar\n");
    getchar();
}

/* Procedimento 215
Ler um dado inserido pelo teclado e indentificar se pertence a intersecao do junto [10,30] e (20,40)
ou se pertence a somente um deles ou a nenhum */
void Procedimento215(void)
{
    // declarar variavel
    int numero = 0;

    // identificar
    printf("%s\n", "\n\tProcedimento 215\n");

    // ler dado do teclado
    printf("Digite o valor desejado: ");
    scanf("%d", &numero);

    // descobrir se o numero se encontra na intersecao entre [10,30] e (20,40)
    // intersecao = 21 ate 30
    if (numero >= 21 && numero <= 30)
    {
        printf("\nO numero %d se encontra na intersecao do intervalo entre os dois conjuntos\n", numero);
    }

    if (numero >= 10 && numero <= 30)
    {
        printf("\nO numero %d se encontra no intervalo entre [10,30]\n", numero);
    }

    if (numero >= 21 && numero <= 39)
    {
        printf("\nO numero %d se encontra no intervalo entre (20,40)\n", numero);
    }

    // encerrar
    printf("%s\n", "\nApertar ENTER para continuar\n");
    getchar();
}

/* Procedimento 216
Ler dois valores inteiros do teclado e dizer se o primeiro e impar e o segundo e par*/
void Procedimento216(void)
{
    // identificar
    printf("%s\n", "\n\tProcedimento 216\n");

    // acoes
    // declarar variaveis
    int numero1 = 0;
    int numero2 = 0;

    // ler os dados do teclado
    printf("%s", "Digite o valor do primeiro numero: \n");
    scanf("%d", &numero1);
    printf("%s", "Digite o valor do segundo numero: \n");
    scanf("%d", &numero2);

    // conferir a divisibilidade dos numeros por meio de if
    if (numero1 % 2 != 0 && numero2 % 2 == 0)
    {
        // exibir o resultado da verificacao do if
        printf("%s%d%s%d%s", "O numero ", numero1, " e impar e o numero ", numero2, " e par\n");
    }
    else
    {
        printf("%s", "Os numeros digitados nao correspondem a ordem : impar e par");
    }

    // encerrar
    printf("%s\n", "\nApertar ENTER para continuar\n");
    getchar();
}

/* Procedimento 217
Ler dois valores inteiros e dizer se o primeiro e impar e negativo e o segundo e impar e positivo*/
void Procedimento217(void)
{
    // identificar
    printf("%s\n", "\n\tProcedimento 217\n");

    // declarar variaveis
    int numero1 = 0;
    int numero2 = 0;

    // acoes
    // ler os dados do teclado
    /*printf ("%s", "Digite o valor do primeiro numero: \n");
    scanf ("%d", &numero1);
    printf ("%s", "Digite o valor do segundo numero: \n");
    scanf ("%d", &numero2);*/

    numero1 = readint("Digite o primeiro numero: ");  // testando as funcoes da biblioteca
    numero2 = readint("\nDigite o segundo numero: "); // testando as funcoes da biblioteca

    // conferir a divisibilidade
    if (numero1 < 0)
    {
        if (numero1 % 2 != 0)
        {
            printf("%s%d%s", "\nO numero ", numero1, " e negativo e impar\n");
        }
        else
        {
            printf("%s%d%s", "\nO numero ", numero1, " e negativo e par\n");
        }
    }
    else
    {
        if (numero1 % 2 == 0)
        {
            printf("%s", "\nO primeiro numero digitado e positivo e par\n");
        }
        else
        {
            printf("%s", "\nO primeiro numero digitado e positivo e impar\n");
        }
    }

    // conferir o segundo numero
    if (numero2 > 0)
    {
        if (numero1 % 2 != 0)
        {
            printf("%s%d%s", "\nO numero ", numero1, " e positivo e impar\n");
        }
        else
        {
            printf("%s%d%s", "\nO numero ", numero1, " e positivo e par\n");
        }
    }
    else
    {
        if (numero2 % 2 == 0)
        {
            printf("%s", "\nO primeiro numero digitado e negativo e par\n");
        }
        else
        {
            printf("%s", "\nO primeiro numero digitado e negativo e impar\n");
        }
    }

    // encerrar
    printf("%s\n", "\nApertar ENTER para continuar\n");
    getchar();
}

/* Procedimento 218
Ler dois valores reais do teclado e dizer se e menor, igual ou maior que a um quarto do segundo*/
void Procedimento218(void)
{
    // identificar
    printf("%s\n", "\n\tProcedimento 218\n");

    // declarar as variaveis
    double numero1 = 0.0;
    double numero2 = 0.0;

    // acoes
    // ler os dados do teclado
    numero1 = readdouble("Digite o primeiro numero: ");  // testando as funcoes da biblioteca
    numero2 = readdouble("\nDigite o segundo numero: "); // testandoas funcoes da biblioteca

    /*  printf ("%s", "Digite o primeiro numero: ");
        scanf ("%lf", &numero1);

        printf ("%s", "Digite o primeiro numero: ");
        scanf ("%lf", &numero2);
    */

    // calcular 1/4 do segundo
    numero2 = numero2 / 4;

    // verificar se e menor, igual ou maior que a um quarto do segundo e exibi-lo
    if (numero1 > numero2)
    {
        printf("%s%d%s%d", "\nO numero ", numero1, " e maior que o numero ", numero2);
    }
    if (numero1 == numero2)
    {
        printf("%s%d%s%d", "\nO numero ", numero1, " e igual ao numero ", numero2);
    }
    if (numero1 < numero2)
    {
        printf("%s%d%s%d", "\nO numero ", numero1, " e menor que o numero ", numero2);
    }

    // encerrar
    printf("%s\n", "\nApertar ENTER para continuar\n");
    getchar();
}

/* Procedimento 219
 Ler tres valores reais, conferir a posicao do segundo caso forem diferentes*/
void Procedimento219(void)
{
    // identificar
    printf("%s\n", "\n\tProcedimento 219\n");

    // declarar variaveis
    double numero1 = 0.0;
    double numero2 = 0.0;
    double numero3 = 0.0;

    // acoes
    // ler os dados do teclado

    numero1 = readdouble("\nDigite o valor do primeiro numero: ");
    numero2 = readdouble("\nDigite o valor do segundo numero: ");
    numero3 = readdouble("\nDigite o valor do terceiro numero: ");

    // comparar os valores das variaveis
    if (numero1 != numero2 && numero1 != numero3 && numero2 != numero3)
    {
        if (numero1 > numero2)
        {
            if (numero2 > numero3)
            {
                printf("%s%.4lf, %.4lf, %.4lf%s", "Os numeros: ", numero1, numero2, numero3, " estao em ordem decrescente\n");
            }
            else
            {
                printf("%s", "\nOs numeros estao em ordem aleatoria\n");
            }
        }
        else if (numero1 < numero2)
        {
            if (numero2 < numero3)
            {
                printf("%s%.4lf, %.4lf, %.4lf%s", "Os numeros: ", numero1, numero2, numero3, " estao em ordem crescente\n");
            }
            else
            {
                printf("%s", "\nOs numeros estao em ordem aleatoria\n");
            }
        }
        else
        {
            printf("%s", "\nOs numeros estao em ordem aleatoria\n");
        }
    }
    else
    {
        if (numero2 > numero1 || numero3 > numero1)
        {
            printf("%s", "\nOs numeros estao em ordem aleatoria");
        }
        else
        {
            printf("%s", "\nUm dos numeros sao iguais");
        }
    }

    // encerrar
    printf("%s\n", "\nApertar ENTER para continuar\n");
    getchar();
}

/* Procedimento 220
Ler tres valores reais e dizer se o segundo nao esta entre o primeiro e o ultimo */
void Procedimento220(void)
{
    // identificar
    printf("%s\n", "\n\tProcedimento 220\n");

    // declarar variaveis
    double numero1 = 0.0;
    double numero2 = 0.0;
    double numero3 = 0.0;

    // acoes
    // ler os dados do teclado

    numero1 = readdouble("\nDigite o valor do primeiro numero: ");
    numero2 = readdouble("\nDigite o valor do segundo numero: ");
    numero3 = readdouble("\nDigite o valor do terceiro numero: ");

    // comparar as variaveis
    if (numero1 != numero2 && numero1 != numero3 && numero2 != numero3)
    {
        if (numero1 > numero2)
        {
            if (numero2 > numero3)
            {
                printf("%s%.4lf, %.4lf, %.4lf%s", "Os numeros: ", numero1, numero2, numero3, " estao em ordem decrescente\n");
            }
            else
            {
                printf("%s", "\nOs numeros estao em ordem aleatoria\n");
            }
        }
        else if (numero1 < numero2)
        {
            if (numero2 < numero3)
            {
                printf("%s%.4lf, %.4lf, %.4lf%s", "Os numeros: ", numero1, numero2, numero3, " estao em ordem crescente\n");
            }
            else
            {
                printf("%s", "\nOs numeros estao em ordem aleatoria\n");
            }
        }
        else
        {
            printf("%s", "\nOs numeros estao em ordem aleatoria\n");
        }
    }
    else
    {
        if (numero2 > numero1 || numero3 > numero1)
        {
            printf("%s", "\nOs numeros estao em ordem aleatoria");
        }
        else
        {
            printf("%s", "\nUm dos numeros sao iguais");
        }
    }

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
    // declarar variavel
    int opcao = 0;

    // identificar
    Identificacao();

    // switch case com opcoes
    printf("\n1- Procedimento 211\t(Conferir se numero e positivo e par ou impar e negativo)\n");
    printf("2- Procedimento 212\t(Conferir se e par e menor que -25 ou impar e maior que 25)\n");
    printf("3- Procedimento 213\t(Conferir se pertence ao intervalo (20,55)\n");
    printf("4- Procedimento 214\t(Conferir se pertence ao intervalo [20,55]\n");
    printf("5- Procedimento 215\t(Conferir se pertence a intersecao entre [10,30] e (20,55)\n");
    printf("6- Procedimento 216\t(Conferir se o primeiro e impar e o segundo e par)\n");
    printf("7- Procedimento 217\t(Conferir se o primeiro e par e negativo e se o segundo e impar e positivo)\n");
    printf("8- Procedimento 218\t(Conferir se o primeiro e menor, igual ou maior que um quarto do segundo)\n");
    printf("9- Procedimento 219\t(Conferir se o segundo esta entre o primeiro e o ultimo numero)\n");
    printf("10- Procedimento 220\t(Conferir se o segundo nao esta entre o primeiro e o ultimo)\n");
    opcao = readint("\nEscolha a opcao desejada: ");

    // Chama o procedimento 0211
    switch (opcao)
    {
    case 1:
        Procedimento211();
        break;
    case 2:
        Procedimento212();
        break;
    case 3:
        Procedimento213();
        break;
    case 4:
        Procedimento214();
        break;
    case 5:
        Procedimento215();
        break;
    case 6:
        Procedimento216();
        break;
    case 7:
        Procedimento217();
        break;
    case 8:
        Procedimento218();
        break;
    case 9:
        Procedimento219();
        break;
    case 10:
        Procedimento220();
        break;
    default:
        printf("Opcao invalida!\n");
        break;
    }

    return 0;
} // end main ( )

/*
Programa documentacao complementar

notas / observacoes / comentarios:
Programa testado na versao gcc version 8.1.0 do MinGW

previsao de testes
211 - { -6, -3, 0, 3, 6, 9 }
212 -  { -60, -13, 0, 13, 26, 39 }
213 - { 15, 25, 30, 35, 65, 70 }
214 - { 5, 15, 20, 45, 60, 65 }
215 - { 5, 15, 20, 25, 30, 60 }
216 -  { (5, 15), (35, 40), (60, 72), (50, 63), (89, 98) }
217 -  { (-5, -15), (-13, 20), (-30, 45), (60, 72), (-89, -98) }
218 -  { (0.5, 1.5), (3.0, 3.0), (-5.5, 6.4), (7.8, -8.7) }
219 -  { (0.75, 0.5, 1.8), (3.6, 4.5, 2.4), (6.3, 7.2, 6.5), (9.8, 8.9, 8.9) }
220 - { (0.75, 0.5, 1.8), (3.6, 4.5, 2.4), (6.3, 7.2, 6.5), (9.8, 8.9, 8.9) }

historico
1.0 - Utilizou funcoes da biblioteca padrao da linguagem c
2.0 - Utilizacao de funcoes da biblioteca padrao e funcoes criadas fora da biblioteca padrao

Versao Data Modificacao
0.1 24/02/2025 esboco
1.0 25/02/2025 criacao do programa com funcoes padrao da biblioteca c (<stdio.h> e <stdlib.h>)
2.0 26/02/2025 troca para as funcoes da biblioteca "funcutils.h" e teste de programa

---------------------------------------------- testes
Versao Teste
0.2 00. ( Procedimento 211 ) identificacao de programa
PS C:\Users\1563147\Documents\1563147_Gabriel_Matos_Nogueira> gcc -o Exemplo0210 Exemplo0210.c
PS C:\Users\1563147\Documents\1563147_Gabriel_Matos_Nogueira> ./Exemplo0210

        Codigo de Pessoa: 1563147 | Matricula: 870863
                   Gabriel Matos Nogueira

1- Procedimento 211     (Conferir se numero e positivo e par ou impar e negativo)
2- Procedimento 212     (Conferir se e par e menor que -25 ou impar e maior que 25)
3- Procedimento 213     (Conferir se pertence ao intervalo (20,55)
4- Procedimento 214     (Conferir se pertence ao intervalo [20,55]
5- Procedimento 215     (Conferir se pertence a intersecao entre [10,30] e (20,55)
6- Procedimento 216     (Conferir se o primeiro e impar e o segundo e par)
7- Procedimento 217     (Conferir se o primeiro e par e negativo e se o segundo e impar e positivo)
8- Procedimento 218     (Conferir se o primeiro e menor, igual ou maior que um quarto do segundo)
9- Procedimento 219     (Conferir se o segundo esta entre o primeiro e o ultimo numero)
10- Procedimento 220    (Conferir se o segundo nao esta entre o primeiro e o ultimo)

Escolha a opcao desejada: 1

        Procedimento 0211
Digite o numero desejado: -3
O numero -3 e negativo e impar.

Apertar ENTER para continuar

PS C:\Users\1563147\Documents\1563147_Gabriel_Matos_Nogueira> gcc -o Exemplo0210 Exemplo0210.c
PS C:\Users\1563147\Documents\1563147_Gabriel_Matos_Nogueira> ./Exemplo0210

        Codigo de Pessoa: 1563147 | Matricula: 870863
                   Gabriel Matos Nogueira

1- Procedimento 211     (Conferir se numero e positivo e par ou impar e negativo)
2- Procedimento 212     (Conferir se e par e menor que -25 ou impar e maior que 25)
3- Procedimento 213     (Conferir se pertence ao intervalo (20,55)
4- Procedimento 214     (Conferir se pertence ao intervalo [20,55]
5- Procedimento 215     (Conferir se pertence a intersecao entre [10,30] e (20,55)
6- Procedimento 216     (Conferir se o primeiro e impar e o segundo e par)
7- Procedimento 217     (Conferir se o primeiro e par e negativo e se o segundo e impar e positivo)
8- Procedimento 218     (Conferir se o primeiro e menor, igual ou maior que um quarto do segundo)
9- Procedimento 219     (Conferir se o segundo esta entre o primeiro e o ultimo numero)
10- Procedimento 220    (Conferir se o segundo nao esta entre o primeiro e o ultimo)

Escolha a opcao desejada: 1

        Procedimento 0211
Digite o numero desejado: -2
O numero -2 e negativo e par.

Apertar ENTER para continuar

PS C:\Users\1563147\Documents\1563147_Gabriel_Matos_Nogueira> gcc -o Exemplo0210 Exemplo0210.c
PS C:\Users\1563147\Documents\1563147_Gabriel_Matos_Nogueira> ./Exemplo0210

        Codigo de Pessoa: 1563147 | Matricula: 870863
                   Gabriel Matos Nogueira

1- Procedimento 211     (Conferir se numero e positivo e par ou impar e negativo)
2- Procedimento 212     (Conferir se e par e menor que -25 ou impar e maior que 25)
3- Procedimento 213     (Conferir se pertence ao intervalo (20,55)
4- Procedimento 214     (Conferir se pertence ao intervalo [20,55]
5- Procedimento 215     (Conferir se pertence a intersecao entre [10,30] e (20,55)
6- Procedimento 216     (Conferir se o primeiro e impar e o segundo e par)
7- Procedimento 217     (Conferir se o primeiro e par e negativo e se o segundo e impar e positivo)
8- Procedimento 218     (Conferir se o primeiro e menor, igual ou maior que um quarto do segundo)
9- Procedimento 219     (Conferir se o segundo esta entre o primeiro e o ultimo numero)
10- Procedimento 220    (Conferir se o segundo nao esta entre o primeiro e o ultimo)

Escolha a opcao desejada: 1

        Procedimento 0211
Digite o numero desejado: -6
O numero -6 e negativo e par.

Apertar ENTER para continuar

PS C:\Users\1563147\Documents\1563147_Gabriel_Matos_Nogueira> ./Exemplo0210

        Codigo de Pessoa: 1563147 | Matricula: 870863
                   Gabriel Matos Nogueira

1- Procedimento 211     (Conferir se numero e positivo e par ou impar e negativo)
2- Procedimento 212     (Conferir se e par e menor que -25 ou impar e maior que 25)
3- Procedimento 213     (Conferir se pertence ao intervalo (20,55)
4- Procedimento 214     (Conferir se pertence ao intervalo [20,55]
5- Procedimento 215     (Conferir se pertence a intersecao entre [10,30] e (20,55)
6- Procedimento 216     (Conferir se o primeiro e impar e o segundo e par)
7- Procedimento 217     (Conferir se o primeiro e par e negativo e se o segundo e impar e positivo)
8- Procedimento 218     (Conferir se o primeiro e menor, igual ou maior que um quarto do segundo)
9- Procedimento 219     (Conferir se o segundo esta entre o primeiro e o ultimo numero)
10- Procedimento 220    (Conferir se o segundo nao esta entre o primeiro e o ultimo)

Escolha a opcao desejada: 1

        Procedimento 0211
Digite o numero desejado: -3
O numero -3 e negativo e impar.

Apertar ENTER para continuar

PS C:\Users\1563147\Documents\1563147_Gabriel_Matos_Nogueira> ./Exemplo0210

        Codigo de Pessoa: 1563147 | Matricula: 870863
                   Gabriel Matos Nogueira

1- Procedimento 211     (Conferir se numero e positivo e par ou impar e negativo)
2- Procedimento 212     (Conferir se e par e menor que -25 ou impar e maior que 25)
3- Procedimento 213     (Conferir se pertence ao intervalo (20,55)
4- Procedimento 214     (Conferir se pertence ao intervalo [20,55]
5- Procedimento 215     (Conferir se pertence a intersecao entre [10,30] e (20,55)
6- Procedimento 216     (Conferir se o primeiro e impar e o segundo e par)
7- Procedimento 217     (Conferir se o primeiro e par e negativo e se o segundo e impar e positivo)
10- Procedimento 220    (Conferir se o segundo nao esta entre o primeiro e o ultimo)

Escolha a opcao desejada: 1

        Procedimento 0211
Digite o numero desejado: 0
O numero 0 e zero e par.

Apertar ENTER para continuar

PS C:\Users\1563147\Documents\1563147_Gabriel_Matos_Nogueira> ./Exemplo0210

        Codigo de Pessoa: 1563147 | Matricula: 870863
                   Gabriel Matos Nogueira

1- Procedimento 211     (Conferir se numero e positivo e par ou impar e negativo)
2- Procedimento 212     (Conferir se e par e menor que -25 ou impar e maior que 25)
3- Procedimento 213     (Conferir se pertence ao intervalo (20,55)
4- Procedimento 214     (Conferir se pertence ao intervalo [20,55]
5- Procedimento 215     (Conferir se pertence a intersecao entre [10,30] e (20,55)
6- Procedimento 216     (Conferir se o primeiro e impar e o segundo e par)
7- Procedimento 217     (Conferir se o primeiro e par e negativo e se o segundo e impar e positivo)
8- Procedimento 218     (Conferir se o primeiro e menor, igual ou maior que um quarto do segundo)
9- Procedimento 219     (Conferir se o segundo esta entre o primeiro e o ultimo numero)
10- Procedimento 220    (Conferir se o segundo nao esta entre o primeiro e o ultimo)

Escolha a opcao desejada: 1

        Procedimento 0211
Digite o numero desejado: 3
O numero 3 e positivo e impar.

Apertar ENTER para continuar

PS C:\Users\1563147\Documents\1563147_Gabriel_Matos_Nogueira> ./Exemplo0210

        Codigo de Pessoa: 1563147 | Matricula: 870863
                   Gabriel Matos Nogueira

1- Procedimento 211     (Conferir se numero e positivo e par ou impar e negativo)
2- Procedimento 212     (Conferir se e par e menor que -25 ou impar e maior que 25)
3- Procedimento 213     (Conferir se pertence ao intervalo (20,55)
4- Procedimento 214     (Conferir se pertence ao intervalo [20,55]
5- Procedimento 215     (Conferir se pertence a intersecao entre [10,30] e (20,55)
6- Procedimento 216     (Conferir se o primeiro e impar e o segundo e par)
7- Procedimento 217     (Conferir se o primeiro e par e negativo e se o segundo e impar e positivo)
8- Procedimento 218     (Conferir se o primeiro e menor, igual ou maior que um quarto do segundo)
9- Procedimento 219     (Conferir se o segundo esta entre o primeiro e o ultimo numero)
10- Procedimento 220    (Conferir se o segundo nao esta entre o primeiro e o ultimo)

Escolha a opcao desejada: 1

        Procedimento 0211
Digite o numero desejado: 6
O numero 6 e positivo e par.

Apertar ENTER para continuar

PS C:\Users\1563147\Documents\1563147_Gabriel_Matos_Nogueira> ./Exemplo0210

        Codigo de Pessoa: 1563147 | Matricula: 870863
                   Gabriel Matos Nogueira

1- Procedimento 211     (Conferir se numero e positivo e par ou impar e negativo)
2- Procedimento 212     (Conferir se e par e menor que -25 ou impar e maior que 25)
3- Procedimento 213     (Conferir se pertence ao intervalo (20,55)
4- Procedimento 214     (Conferir se pertence ao intervalo [20,55]
5- Procedimento 215     (Conferir se pertence a intersecao entre [10,30] e (20,55)
6- Procedimento 216     (Conferir se o primeiro e impar e o segundo e par)
7- Procedimento 217     (Conferir se o primeiro e par e negativo e se o segundo e impar e positivo)
8- Procedimento 218     (Conferir se o primeiro e menor, igual ou maior que um quarto do segundo)
9- Procedimento 219     (Conferir se o segundo esta entre o primeiro e o ultimo numero)
10- Procedimento 220    (Conferir se o segundo nao esta entre o primeiro e o ultimo)

Escolha a opcao desejada: 1

        Procedimento 0211
Digite o numero desejado: 9
O numero 9 e positivo e impar.

Apertar ENTER para continuar

PS C:\Users\1563147\Documents\1563147_Gabriel_Matos_Nogueira>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

2.0.0 ( OK ) - Procedimento 213 - identificacao do programa

Resultados:

PS C:\Users\1563147\Documents\1563147_Gabriel_Matos_Nogueira> gcc -o Exemplo0210 Exemplo0210.c
PS C:\Users\1563147\Documents\1563147_Gabriel_Matos_Nogueira> ./Exemplo0210

        Codigo de Pessoa: 1563147 | Matricula: 870863
                   Gabriel Matos Nogueira

1- Procedimento 211     (Conferir se numero e positivo e par ou impar e negativo)
2- Procedimento 212     (Conferir se e par e menor que -25 ou impar e maior que 25)
3- Procedimento 213     (Conferir se pertence ao intervalo (20,55)
4- Procedimento 214     (Conferir se pertence ao intervalo [20,55]
5- Procedimento 215     (Conferir se pertence a intersecao entre [10,30] e (20,55)
6- Procedimento 216     (Conferir se o primeiro e impar e o segundo e par)
7- Procedimento 217     (Conferir se o primeiro e par e negativo e se o segundo e impar e positivo)
8- Procedimento 218     (Conferir se o primeiro e menor, igual ou maior que um quarto do segundo)
9- Procedimento 219     (Conferir se o segundo esta entre o primeiro e o ultimo numero)
10- Procedimento 220    (Conferir se o segundo nao esta entre o primeiro e o ultimo)

Escolha a opcao desejada: 2

        Procedimento 212

Digite o valor da variavel: -60
O numero -60 e menor que -25 e par

Apertar ENTER para continuar


PS C:\Users\1563147\Documents\1563147_Gabriel_Matos_Nogueira> ./Exemplo0210

        Codigo de Pessoa: 1563147 | Matricula: 870863
                   Gabriel Matos Nogueira

1- Procedimento 211     (Conferir se numero e positivo e par ou impar e negativo)
2- Procedimento 212     (Conferir se e par e menor que -25 ou impar e maior que 25)
3- Procedimento 213     (Conferir se pertence ao intervalo (20,55)
4- Procedimento 214     (Conferir se pertence ao intervalo [20,55]
5- Procedimento 215     (Conferir se pertence a intersecao entre [10,30] e (20,55)
6- Procedimento 216     (Conferir se o primeiro e impar e o segundo e par)
7- Procedimento 217     (Conferir se o primeiro e par e negativo e se o segundo e impar e positivo)
8- Procedimento 218     (Conferir se o primeiro e menor, igual ou maior que um quarto do segundo)
9- Procedimento 219     (Conferir se o segundo esta entre o primeiro e o ultimo numero)
10- Procedimento 220    (Conferir se o segundo nao esta entre o primeiro e o ultimo)

Escolha a opcao desejada: 2

        Procedimento 212

Digite o valor da variavel: -13
O numero -13 esta entre (-25,25) e e impar

Apertar ENTER para continuar


PS C:\Users\1563147\Documents\1563147_Gabriel_Matos_Nogueira> ./Exemplo0210

        Codigo de Pessoa: 1563147 | Matricula: 870863
                   Gabriel Matos Nogueira

1- Procedimento 211     (Conferir se numero e positivo e par ou impar e negativo)
2- Procedimento 212     (Conferir se e par e menor que -25 ou impar e maior que 25)
3- Procedimento 213     (Conferir se pertence ao intervalo (20,55)
4- Procedimento 214     (Conferir se pertence ao intervalo [20,55]
5- Procedimento 215     (Conferir se pertence a intersecao entre [10,30] e (20,55)
6- Procedimento 216     (Conferir se o primeiro e impar e o segundo e par)
7- Procedimento 217     (Conferir se o primeiro e par e negativo e se o segundo e impar e positivo)
8- Procedimento 218     (Conferir se o primeiro e menor, igual ou maior que um quarto do segundo)
9- Procedimento 219     (Conferir se o segundo esta entre o primeiro e o ultimo numero)
10- Procedimento 220    (Conferir se o segundo nao esta entre o primeiro e o ultimo)

Escolha a opcao desejada: 2

        Procedimento 212

Digite o valor da variavel: 0
O numero 0 esta entre (-25,25) e e par

Apertar ENTER para continuar


PS C:\Users\1563147\Documents\1563147_Gabriel_Matos_Nogueira> ./Exemplo0210

        Codigo de Pessoa: 1563147 | Matricula: 870863
                   Gabriel Matos Nogueira

1- Procedimento 211     (Conferir se numero e positivo e par ou impar e negativo)
2- Procedimento 212     (Conferir se e par e menor que -25 ou impar e maior que 25)
3- Procedimento 213     (Conferir se pertence ao intervalo (20,55)
4- Procedimento 214     (Conferir se pertence ao intervalo [20,55]
5- Procedimento 215     (Conferir se pertence a intersecao entre [10,30] e (20,55)
6- Procedimento 216     (Conferir se o primeiro e impar e o segundo e par)
7- Procedimento 217     (Conferir se o primeiro e par e negativo e se o segundo e impar e positivo)
8- Procedimento 218     (Conferir se o primeiro e menor, igual ou maior que um quarto do segundo)
9- Procedimento 219     (Conferir se o segundo esta entre o primeiro e o ultimo numero)
10- Procedimento 220    (Conferir se o segundo nao esta entre o primeiro e o ultimo)

Escolha a opcao desejada: 2

        Procedimento 212

Digite o valor da variavel: 13
O numero 13 esta entre (-25,25) e e impar

Apertar ENTER para continuar


PS C:\Users\1563147\Documents\1563147_Gabriel_Matos_Nogueira> gcc -o Exemplo0210 Exemplo0210.c
PS C:\Users\1563147\Documents\1563147_Gabriel_Matos_Nogueira> ./Exemplo0210

        Codigo de Pessoa: 1563147 | Matricula: 870863
                   Gabriel Matos Nogueira

1- Procedimento 211     (Conferir se numero e positivo e par ou impar e negativo)
2- Procedimento 212     (Conferir se e par e menor que -25 ou impar e maior que 25)
3- Procedimento 213     (Conferir se pertence ao intervalo (20,55)
4- Procedimento 214     (Conferir se pertence ao intervalo [20,55]
5- Procedimento 215     (Conferir se pertence a intersecao entre [10,30] e (20,55)
6- Procedimento 216     (Conferir se o primeiro e impar e o segundo e par)
7- Procedimento 217     (Conferir se o primeiro e par e negativo e se o segundo e impar e positivo)
8- Procedimento 218     (Conferir se o primeiro e menor, igual ou maior que um quarto do segundo)
9- Procedimento 219     (Conferir se o segundo esta entre o primeiro e o ultimo numero)
10- Procedimento 220    (Conferir se o segundo nao esta entre o primeiro e o ultimo)

Escolha a opcao desejada: 2

        Procedimento 212

Digite o valor da variavel: 26
O numero 26 e maior que 25 e par

Apertar ENTER para continuar


PS C:\Users\1563147\Documents\1563147_Gabriel_Matos_Nogueira> ./Exemplo0210

        Codigo de Pessoa: 1563147 | Matricula: 870863
                   Gabriel Matos Nogueira

1- Procedimento 211     (Conferir se numero e positivo e par ou impar e negativo)
2- Procedimento 212     (Conferir se e par e menor que -25 ou impar e maior que 25)
3- Procedimento 213     (Conferir se pertence ao intervalo (20,55)
4- Procedimento 214     (Conferir se pertence ao intervalo [20,55]
5- Procedimento 215     (Conferir se pertence a intersecao entre [10,30] e (20,55)
6- Procedimento 216     (Conferir se o primeiro e impar e o segundo e par)
7- Procedimento 217     (Conferir se o primeiro e par e negativo e se o segundo e impar e positivo)
8- Procedimento 218     (Conferir se o primeiro e menor, igual ou maior que um quarto do segundo)
9- Procedimento 219     (Conferir se o segundo esta entre o primeiro e o ultimo numero)
10- Procedimento 220    (Conferir se o segundo nao esta entre o primeiro e o ultimo)

Escolha a opcao desejada: 2

        Procedimento 212

Digite o valor da variavel: 39
O numero 39 e maior que 25 e impar

Apertar ENTER para continuar


////////////////////////////////////////////////////////////////////////////////////////////////////////////////

2.0.0 ( OK ) - Procedimento 213 - identificacao do programa

Resultados:
////////////////////////////////////////////////////////////////////////////////////////////////////////////////

                                                    ANOMALIA
                                                     (ERRO)

        Codigo de Pessoa: 1563147 | Matricula: 870863
                   Gabriel Matos Nogueira

1- Procedimento 211     (Conferir se numero e positivo e par ou impar e negativo)
2- Procedimento 212     (Conferir se e par e menor que -25 ou impar e maior que 25)
3- Procedimento 213     (Conferir se pertence ao intervalo (20,55)
4- Procedimento 214     (Conferir se pertence ao intervalo [20,55]
5- Procedimento 215     (Conferir se pertence a intersecao entre [10,30] e (20,55)
6- Procedimento 216     (Conferir se o primeiro e impar e o segundo e par)
7- Procedimento 217     (Conferir se o primeiro e par e negativo e se o segundo e impar e positivo)
8- Procedimento 218     (Conferir se o primeiro e menor, igual ou maior que um quarto do segundo)
9- Procedimento 219     (Conferir se o segundo esta entre o primeiro e o ultimo numero)
10- Procedimento 220    (Conferir se o segundo nao esta entre o primeiro e o ultimo)

Escolha a opcao desejada: 3

        Procedimento 213

Digite o valor do numero desejado: 25
O numero -4 pertence ao intervalo aberto (20,55)
Apertar ENTER para continuar

ALTERACAO : Ausencia da variavel numero dentro do segundo if do procedimento 213 (Corrigido)

////////////////////////////////////////////////////////////////////////////////////////////////////////////////

PS C:\Users\1563147\Documents\1563147_Gabriel_Matos_Nogueira> gcc -o Exemplo0210 Exemplo0210.c
PS C:\Users\1563147\Documents\1563147_Gabriel_Matos_Nogueira> ./Exemplo0210

        Codigo de Pessoa: 1563147 | Matricula: 870863
                   Gabriel Matos Nogueira

1- Procedimento 211     (Conferir se numero e positivo e par ou impar e negativo)
2- Procedimento 212     (Conferir se e par e menor que -25 ou impar e maior que 25)
3- Procedimento 213     (Conferir se pertence ao intervalo (20,55)
4- Procedimento 214     (Conferir se pertence ao intervalo [20,55]
5- Procedimento 215     (Conferir se pertence a intersecao entre [10,30] e (20,55)
6- Procedimento 216     (Conferir se o primeiro e impar e o segundo e par)
7- Procedimento 217     (Conferir se o primeiro e par e negativo e se o segundo e impar e positivo)
8- Procedimento 218     (Conferir se o primeiro e menor, igual ou maior que um quarto do segundo)
9- Procedimento 219     (Conferir se o segundo esta entre o primeiro e o ultimo numero)
10- Procedimento 220    (Conferir se o segundo nao esta entre o primeiro e o ultimo)

Escolha a opcao desejada: 3

        Procedimento 213

Digite o valor do numero desejado: 15
O numero 15 nao pertence ao intervalo aberto (20,55)
Apertar ENTER para continuar


PS C:\Users\1563147\Documents\1563147_Gabriel_Matos_Nogueira> ./Exemplo0210

        Codigo de Pessoa: 1563147 | Matricula: 870863
                   Gabriel Matos Nogueira

1- Procedimento 211     (Conferir se numero e positivo e par ou impar e negativo)
2- Procedimento 212     (Conferir se e par e menor que -25 ou impar e maior que 25)
3- Procedimento 213     (Conferir se pertence ao intervalo (20,55)
4- Procedimento 214     (Conferir se pertence ao intervalo [20,55]
5- Procedimento 215     (Conferir se pertence a intersecao entre [10,30] e (20,55)
6- Procedimento 216     (Conferir se o primeiro e impar e o segundo e par)
7- Procedimento 217     (Conferir se o primeiro e par e negativo e se o segundo e impar e positivo)
8- Procedimento 218     (Conferir se o primeiro e menor, igual ou maior que um quarto do segundo)
9- Procedimento 219     (Conferir se o segundo esta entre o primeiro e o ultimo numero)
10- Procedimento 220    (Conferir se o segundo nao esta entre o primeiro e o ultimo)

Escolha a opcao desejada: 3

        Procedimento 213

Digite o valor do numero desejado: 25
O numero 25 pertence ao intervalo aberto (20,55)
Apertar ENTER para continuar


PS C:\Users\1563147\Documents\1563147_Gabriel_Matos_Nogueira> ./Exemplo0210

        Codigo de Pessoa: 1563147 | Matricula: 870863
                   Gabriel Matos Nogueira

1- Procedimento 211     (Conferir se numero e positivo e par ou impar e negativo)
2- Procedimento 212     (Conferir se e par e menor que -25 ou impar e maior que 25)
3- Procedimento 213     (Conferir se pertence ao intervalo (20,55)
4- Procedimento 214     (Conferir se pertence ao intervalo [20,55]
5- Procedimento 215     (Conferir se pertence a intersecao entre [10,30] e (20,55)
6- Procedimento 216     (Conferir se o primeiro e impar e o segundo e par)
7- Procedimento 217     (Conferir se o primeiro e par e negativo e se o segundo e impar e positivo)
8- Procedimento 218     (Conferir se o primeiro e menor, igual ou maior que um quarto do segundo)
9- Procedimento 219     (Conferir se o segundo esta entre o primeiro e o ultimo numero)
10- Procedimento 220    (Conferir se o segundo nao esta entre o primeiro e o ultimo)

Escolha a opcao desejada: 3

        Procedimento 213

Digite o valor do numero desejado: 30
O numero 30 pertence ao intervalo aberto (20,55)
Apertar ENTER para continuar


PS C:\Users\1563147\Documents\1563147_Gabriel_Matos_Nogueira> ./Exemplo0210

        Codigo de Pessoa: 1563147 | Matricula: 870863
                   Gabriel Matos Nogueira

1- Procedimento 211     (Conferir se numero e positivo e par ou impar e negativo)
2- Procedimento 212     (Conferir se e par e menor que -25 ou impar e maior que 25)
3- Procedimento 213     (Conferir se pertence ao intervalo (20,55)
4- Procedimento 214     (Conferir se pertence ao intervalo [20,55]
5- Procedimento 215     (Conferir se pertence a intersecao entre [10,30] e (20,55)
6- Procedimento 216     (Conferir se o primeiro e impar e o segundo e par)
7- Procedimento 217     (Conferir se o primeiro e par e negativo e se o segundo e impar e positivo)
8- Procedimento 218     (Conferir se o primeiro e menor, igual ou maior que um quarto do segundo)
9- Procedimento 219     (Conferir se o segundo esta entre o primeiro e o ultimo numero)
10- Procedimento 220    (Conferir se o segundo nao esta entre o primeiro e o ultimo)

Escolha a opcao desejada: 3

        Procedimento 213

Digite o valor do numero desejado: 35
O numero 35 pertence ao intervalo aberto (20,55)
Apertar ENTER para continuar


PS C:\Users\1563147\Documents\1563147_Gabriel_Matos_Nogueira> ./Exemplo0210

        Codigo de Pessoa: 1563147 | Matricula: 870863
                   Gabriel Matos Nogueira

1- Procedimento 211     (Conferir se numero e positivo e par ou impar e negativo)
2- Procedimento 212     (Conferir se e par e menor que -25 ou impar e maior que 25)
3- Procedimento 213     (Conferir se pertence ao intervalo (20,55)
4- Procedimento 214     (Conferir se pertence ao intervalo [20,55]
5- Procedimento 215     (Conferir se pertence a intersecao entre [10,30] e (20,55)
6- Procedimento 216     (Conferir se o primeiro e impar e o segundo e par)
7- Procedimento 217     (Conferir se o primeiro e par e negativo e se o segundo e impar e positivo)
8- Procedimento 218     (Conferir se o primeiro e menor, igual ou maior que um quarto do segundo)
9- Procedimento 219     (Conferir se o segundo esta entre o primeiro e o ultimo numero)
10- Procedimento 220    (Conferir se o segundo nao esta entre o primeiro e o ultimo)

Escolha a opcao desejada: 3

        Procedimento 213

Digite o valor do numero desejado: 65
O numero 65 nao pertence ao intervalo aberto (20,55)
Apertar ENTER para continuar


PS C:\Users\1563147\Documents\1563147_Gabriel_Matos_Nogueira> ./Exemplo0210

        Codigo de Pessoa: 1563147 | Matricula: 870863
                   Gabriel Matos Nogueira

1- Procedimento 211     (Conferir se numero e positivo e par ou impar e negativo)
2- Procedimento 212     (Conferir se e par e menor que -25 ou impar e maior que 25)
3- Procedimento 213     (Conferir se pertence ao intervalo (20,55)
4- Procedimento 214     (Conferir se pertence ao intervalo [20,55]
5- Procedimento 215     (Conferir se pertence a intersecao entre [10,30] e (20,55)
6- Procedimento 216     (Conferir se o primeiro e impar e o segundo e par)
7- Procedimento 217     (Conferir se o primeiro e par e negativo e se o segundo e impar e positivo)
8- Procedimento 218     (Conferir se o primeiro e menor, igual ou maior que um quarto do segundo)
9- Procedimento 219     (Conferir se o segundo esta entre o primeiro e o ultimo numero)
e o ultimo)

Escolha a opcao desejada: 3

        Procedimento 213

Digite o valor do numero desejado: 70
O numero 70 nao pertence ao intervalo aberto (20,55)
Apertar ENTER para continuar

////////////////////////////////////////////////////////////////////////////////////////////////////////////////

2.0.0 ( OK ) - Procedimento 214 - identificao do programa
Resultado:
PS C:\Users\1563147\Documents\1563147_Gabriel_Matos_Nogueira> gcc -o Exemplo0210 Exemplo0210.c
PS C:\Users\1563147\Documents\1563147_Gabriel_Matos_Nogueira> ./Exemplo0210

        Codigo de Pessoa: 1563147 | Matricula: 870863
                   Gabriel Matos Nogueira

1- Procedimento 211     (Conferir se numero e positivo e par ou impar e negativo)
2- Procedimento 212     (Conferir se e par e menor que -25 ou impar e maior que 25)
3- Procedimento 213     (Conferir se pertence ao intervalo (20,55)
4- Procedimento 214     (Conferir se pertence ao intervalo [20,55]
5- Procedimento 215     (Conferir se pertence a intersecao entre [10,30] e (20,55)
6- Procedimento 216     (Conferir se o primeiro e impar e o segundo e par)
7- Procedimento 217     (Conferir se o primeiro e par e negativo e se o segundo e impar e positivo)
8- Procedimento 218     (Conferir se o primeiro e menor, igual ou maior que um quarto do segundo)
9- Procedimento 219     (Conferir se o segundo esta entre o primeiro e o ultimo numero)
10- Procedimento 220    (Conferir se o segundo nao esta entre o primeiro e o ultimo)

Escolha a opcao desejada: 4

        Procedimento 214

Digite o valor desejado: 5

O numero 5 nao pertence ao intervalo de [20,50]
Apertar ENTER para continuar


PS C:\Users\1563147\Documents\1563147_Gabriel_Matos_Nogueira> ./Exemplo0210

        Codigo de Pessoa: 1563147 | Matricula: 870863
                   Gabriel Matos Nogueira

1- Procedimento 211     (Conferir se numero e positivo e par ou impar e negativo)
2- Procedimento 212     (Conferir se e par e menor que -25 ou impar e maior que 25)
3- Procedimento 213     (Conferir se pertence ao intervalo (20,55)
4- Procedimento 214     (Conferir se pertence ao intervalo [20,55]
5- Procedimento 215     (Conferir se pertence a intersecao entre [10,30] e (20,55)
8- Procedimento 218     (Conferir se o primeiro e menor, igual ou maior que um quarto do segundo)
9- Procedimento 219     (Conferir se o segundo esta entre o primeiro e o ultimo numero)
10- Procedimento 220    (Conferir se o segundo nao esta entre o primeiro e o ultimo)

Escolha a opcao desejada: 4

        Procedimento 214

Digite o valor desejado: 15

O numero 15 nao pertence ao intervalo de [20,50]
Apertar ENTER para continuar


PS C:\Users\1563147\Documents\1563147_Gabriel_Matos_Nogueira> ./Exemplo0210

        Codigo de Pessoa: 1563147 | Matricula: 870863
                   Gabriel Matos Nogueira

1- Procedimento 211     (Conferir se numero e positivo e par ou impar e negativo)
2- Procedimento 212     (Conferir se e par e menor que -25 ou impar e maior que 25)
3- Procedimento 213     (Conferir se pertence ao intervalo (20,55)
4- Procedimento 214     (Conferir se pertence ao intervalo [20,55]
5- Procedimento 215     (Conferir se pertence a intersecao entre [10,30] e (20,55)
6- Procedimento 216     (Conferir se o primeiro e impar e o segundo e par)
7- Procedimento 217     (Conferir se o primeiro e par e negativo e se o segundo e impar e positivo)
8- Procedimento 218     (Conferir se o primeiro e menor, igual ou maior que um quarto do segundo)
9- Procedimento 219     (Conferir se o segundo esta entre o primeiro e o ultimo numero)
10- Procedimento 220    (Conferir se o segundo nao esta entre o primeiro e o ultimo)

Escolha a opcao desejada: 4

        Procedimento 214

Digite o valor desejado: 20

O numero 20 se encontra na intersecao do intervalo entre os dois conjuntos

Apertar ENTER para continuar


PS C:\Users\1563147\Documents\1563147_Gabriel_Matos_Nogueira> ./Exemplo0210

        Codigo de Pessoa: 1563147 | Matricula: 870863
                   Gabriel Matos Nogueira

1- Procedimento 211     (Conferir se numero e positivo e par ou impar e negativo)
2- Procedimento 212     (Conferir se e par e menor que -25 ou impar e maior que 25)
3- Procedimento 213     (Conferir se pertence ao intervalo (20,55)
4- Procedimento 214     (Conferir se pertence ao intervalo [20,55]
5- Procedimento 215     (Conferir se pertence a intersecao entre [10,30] e (20,55)
6- Procedimento 216     (Conferir se o primeiro e impar e o segundo e par)
7- Procedimento 217     (Conferir se o primeiro e par e negativo e se o segundo e impar e positivo)
8- Procedimento 218     (Conferir se o primeiro e menor, igual ou maior que um quarto do segundo)
9- Procedimento 219     (Conferir se o segundo esta entre o primeiro e o ultimo numero)
10- Procedimento 220    (Conferir se o segundo nao esta entre o primeiro e o ultimo)

Escolha a opcao desejada: 4

        Procedimento 214

Digite o valor desejado: 45

O numero 45 se encontra na intersecao do intervalo entre os dois conjuntos

Apertar ENTER para continuar


PS C:\Users\1563147\Documents\1563147_Gabriel_Matos_Nogueira> ./Exemplo0210

        Codigo de Pessoa: 1563147 | Matricula: 870863
                   Gabriel Matos Nogueira

1- Procedimento 211     (Conferir se numero e positivo e par ou impar e negativo)
2- Procedimento 212     (Conferir se e par e menor que -25 ou impar e maior que 25)
3- Procedimento 213     (Conferir se pertence ao intervalo (20,55)
4- Procedimento 214     (Conferir se pertence ao intervalo [20,55]
5- Procedimento 215     (Conferir se pertence a intersecao entre [10,30] e (20,55)
6- Procedimento 216     (Conferir se o primeiro e impar e o segundo e par)
7- Procedimento 217     (Conferir se o primeiro e par e negativo e se o segundo e impar e positivo)
8- Procedimento 218     (Conferir se o primeiro e menor, igual ou maior que um quarto do segundo)
9- Procedimento 219     (Conferir se o segundo esta entre o primeiro e o ultimo numero)
10- Procedimento 220    (Conferir se o segundo nao esta entre o primeiro e o ultimo)

Escolha a opcao desejada: 4

        Procedimento 214

Digite o valor desejado: 60

O numero 60 nao pertence ao intervalo de [20,50]
Apertar ENTER para continuar


PS C:\Users\1563147\Documents\1563147_Gabriel_Matos_Nogueira> ./Exemplo0210

        Codigo de Pessoa: 1563147 | Matricula: 870863
                   Gabriel Matos Nogueira

1- Procedimento 211     (Conferir se numero e positivo e par ou impar e negativo)
2- Procedimento 212     (Conferir se e par e menor que -25 ou impar e maior que 25)
3- Procedimento 213     (Conferir se pertence ao intervalo (20,55)
4- Procedimento 214     (Conferir se pertence ao intervalo [20,55]
5- Procedimento 215     (Conferir se pertence a intersecao entre [10,30] e (20,55)
6- Procedimento 216     (Conferir se o primeiro e impar e o segundo e par)
7- Procedimento 217     (Conferir se o primeiro e par e negativo e se o segundo e impar e positivo)
8- Procedimento 218     (Conferir se o primeiro e menor, igual ou maior que um quarto do segundo)
9- Procedimento 219     (Conferir se o segundo esta entre o primeiro e o ultimo numero)
10- Procedimento 220    (Conferir se o segundo nao esta entre o primeiro e o ultimo)

Escolha a opcao desejada: 4

        Procedimento 214

Digite o valor desejado: 65

O numero 65 nao pertence ao intervalo de [20,50]
Apertar ENTER para continuar

////////////////////////////////////////////////////////////////////////////////////////////////////////////////

2.0.0 ( OK ) - Procedimento 215 - identificao do programa
Resultado:
PS C:\Users\1563147\Documents\1563147_Gabriel_Matos_Nogueira> gcc -o Exemplo0210 Exemplo0210.c
PS C:\Users\1563147\Documents\1563147_Gabriel_Matos_Nogueira> ./Exemplo0210

        Codigo de Pessoa: 1563147 | Matricula: 870863
                   Gabriel Matos Nogueira

1- Procedimento 215     (Conferir se pertence a intersecao entre [10,30] e (20,55))
2- Procedimento 216     (Conferir se o primeiro e impar e o segundo e par)
3- Procedimento 217     (Conferir se o primeiro e par e negativo e se o segundo e impar e positivo)
4- Procedimento 218     (Conferir se o primeiro e menor, igual ou maior que um quarto do segundo)
5- Procedimento 219     (Conferir se o segundo esta entre o primeiro e o ultimo numero)
6- Procedimento 220    (Conferir se o segundo nao esta entre o primeiro e o ultimo)

Escolha a opcao desejada: 5

        Procedimento 215
Digite o valor desejado: 5
O numero 5 nao pertence a intersecao entre [10,30] e (20,40)

Apertar ENTER para continuar

PS C:\Users\1563147\Documents\1563147_Gabriel_Matos_Nogueira> ./Exemplo0210

        Codigo de Pessoa: 1563147 | Matricula: 870863
                   Gabriel Matos Nogueira

1- Procedimento 215     (Conferir se pertence a intersecao entre [10,30] e (20,55))
2- Procedimento 216     (Conferir se o primeiro e impar e o segundo e par)
3- Procedimento 217     (Conferir se o primeiro e par e negativo e se o segundo e impar e positivo)
4- Procedimento 218     (Conferir se o primeiro e menor, igual ou maior que um quarto do segundo)
5- Procedimento 219     (Conferir se o segundo esta entre o primeiro e o ultimo numero)
6- Procedimento 220    (Conferir se o segundo nao esta entre o primeiro e o ultimo)

Escolha a opcao desejada: 5

        Procedimento 215
Digite o valor desejado: 15
O numero 15 nao pertence a intersecao entre [10,30] e (20,40)

Apertar ENTER para continuar

PS C:\Users\1563147\Documents\1563147_Gabriel_Matos_Nogueira> ./Exemplo0210

        Codigo de Pessoa: 1563147 | Matricula: 870863
                   Gabriel Matos Nogueira

1- Procedimento 215     (Conferir se pertence a intersecao entre [10,30] e (20,55))
2- Procedimento 216     (Conferir se o primeiro e impar e o segundo e par)
3- Procedimento 217     (Conferir se o primeiro e par e negativo e se o segundo e impar e positivo)
4- Procedimento 218     (Conferir se o primeiro e menor, igual ou maior que um quarto do segundo)
5- Procedimento 219     (Conferir se o segundo esta entre o primeiro e o ultimo numero)
6- Procedimento 220    (Conferir se o segundo nao esta entre o primeiro e o ultimo)

Escolha a opcao desejada: 5

        Procedimento 215
Digite o valor desejado: 20
O numero 20 nao pertence a intersecao entre [10,30] e (20,40)

Apertar ENTER para continuar

PS C:\Users\1563147\Documents\1563147_Gabriel_Matos_Nogueira> ./Exemplo0210

        Codigo de Pessoa: 1563147 | Matricula: 870863
                   Gabriel Matos Nogueira

1- Procedimento 215     (Conferir se pertence a intersecao entre [10,30] e (20,55))
2- Procedimento 216     (Conferir se o primeiro e impar e o segundo e par)
3- Procedimento 217     (Conferir se o primeiro e par e negativo e se o segundo e impar e positivo)
4- Procedimento 218     (Conferir se o primeiro e menor, igual ou maior que um quarto do segundo)
5- Procedimento 219     (Conferir se o segundo esta entre o primeiro e o ultimo numero)
6- Procedimento 220    (Conferir se o segundo nao esta entre o primeiro e o ultimo)

Escolha a opcao desejada: 5

        Procedimento 215
Digite o valor desejado: 25
O numero 25 pertence a intersecao do intervalo entre os dois conjuntos

Apertar ENTER para continuar

PS C:\Users\1563147\Documents\1563147_Gabriel_Matos_Nogueira> ./Exemplo0210

        Codigo de Pessoa: 1563147 | Matricula: 870863
                   Gabriel Matos Nogueira

1- Procedimento 215     (Conferir se pertence a intersecao entre [10,30] e (20,55))
2- Procedimento 216     (Conferir se o primeiro e impar e o segundo e par)
3- Procedimento 217     (Conferir se o primeiro e par e negativo e se o segundo e impar e positivo)
4- Procedimento 218     (Conferir se o primeiro e menor, igual ou maior que um quarto do segundo)
5- Procedimento 219     (Conferir se o segundo esta entre o primeiro e o ultimo numero)
6- Procedimento 220    (Conferir se o segundo nao esta entre o primeiro e o ultimo)

Escolha a opcao desejada: 5

        Procedimento 215
Digite o valor desejado: 30
O numero 30 pertence a intersecao do intervalo entre os dois conjuntos

Apertar ENTER para continuar

PS C:\Users\1563147\Documents\1563147_Gabriel_Matos_Nogueira> ./Exemplo0210

        Codigo de Pessoa: 1563147 | Matricula: 870863
                   Gabriel Matos Nogueira

1- Procedimento 215     (Conferir se pertence a intersecao entre [10,30] e (20,55))
2- Procedimento 216     (Conferir se o primeiro e impar e o segundo e par)
3- Procedimento 217     (Conferir se o primeiro e par e negativo e se o segundo e impar e positivo)
4- Procedimento 218     (Conferir se o primeiro e menor, igual ou maior que um quarto do segundo)
5- Procedimento 219     (Conferir se o segundo esta entre o primeiro e o ultimo numero)
6- Procedimento 220    (Conferir se o segundo nao esta entre o primeiro e o ultimo)

Escolha a opcao desejada: 5

        Procedimento 215
Digite o valor desejado: 60
O numero 60 nao pertence a intersecao entre [10,30] e (20,40)

Apertar ENTER para continuar

////////////////////////////////////////////////////////////////////////////////////////////////////////////////
2.0.0 - Procedimento 216
Resultados:

PS C:\Users\1563147\Documents\1563147_Gabriel_Matos_Nogueira> ./Exemplo0210

        Codigo de Pessoa: 1563147 | Matricula: 870863
                   Gabriel Matos Nogueira

1- Procedimento 211     (Conferir se numero e positivo e par ou impar e negativo)
2- Procedimento 212     (Conferir se e par e menor que -25 ou impar e maior que 25)
3- Procedimento 213     (Conferir se pertence ao intervalo (20,55)
4- Procedimento 214     (Conferir se pertence ao intervalo [20,55]
5- Procedimento 215     (Conferir se pertence a intersecao entre [10,30] e (20,55)
6- Procedimento 216     (Conferir se o primeiro e impar e o segundo e par)
7- Procedimento 217     (Conferir se o primeiro e par e negativo e se o segundo e impar e positivo)
8- Procedimento 218     (Conferir se o primeiro e menor, igual ou maior que um quarto do segundo)
9- Procedimento 219     (Conferir se o segundo esta entre o primeiro e o ultimo numero)
10- Procedimento 220    (Conferir se o segundo nao esta entre o primeiro e o ultimo)

Escolha a opcao desejada: 6

        Procedimento 0216
Digite o primeiro numero: 5
Digite o segundo numero: 15
O primeiro numero 5 e impar e o segundo numero 15 e impar.

Apertar ENTER para continuar

PS C:\Users\1563147\Documents\1563147_Gabriel_Matos_Nogueira> ./Exemplo0210

        Codigo de Pessoa: 1563147 | Matricula: 870863
                   Gabriel Matos Nogueira

1- Procedimento 211     (Conferir se numero e positivo e par ou impar e negativo)
2- Procedimento 212     (Conferir se e par e menor que -25 ou impar e maior que 25)
3- Procedimento 213     (Conferir se pertence ao intervalo (20,55)
4- Procedimento 214     (Conferir se pertence ao intervalo [20,55]
5- Procedimento 215     (Conferir se pertence a intersecao entre [10,30] e (20,55)
6- Procedimento 216     (Conferir se o primeiro e impar e o segundo e par)
7- Procedimento 217     (Conferir se o primeiro e par e negativo e se o segundo e impar e positivo)
8- Procedimento 218     (Conferir se o primeiro e menor, igual ou maior que um quarto do segundo)
9- Procedimento 219     (Conferir se o segundo esta entre o primeiro e o ultimo numero)
10- Procedimento 220    (Conferir se o segundo nao esta entre o primeiro e o ultimo)

Escolha a opcao desejada: 6

        Procedimento 0216
Digite o primeiro numero: 35
Digite o segundo numero: 40
O primeiro numero 35 e impar e o segundo numero 40 e par.

Apertar ENTER para continuar

PS C:\Users\1563147\Documents\1563147_Gabriel_Matos_Nogueira> ./Exemplo0210

        Codigo de Pessoa: 1563147 | Matricula: 870863
                   Gabriel Matos Nogueira

1- Procedimento 211     (Conferir se numero e positivo e par ou impar e negativo)
2- Procedimento 212     (Conferir se e par e menor que -25 ou impar e maior que 25)
3- Procedimento 213     (Conferir se pertence ao intervalo (20,55)
4- Procedimento 214     (Conferir se pertence ao intervalo [20,55]
5- Procedimento 215     (Conferir se pertence a intersecao entre [10,30] e (20,55)
6- Procedimento 216     (Conferir se o primeiro e impar e o segundo e par)
7- Procedimento 217     (Conferir se o primeiro e par e negativo e se o segundo e impar e positivo)
8- Procedimento 218     (Conferir se o primeiro e menor, igual ou maior que um quarto do segundo)
9- Procedimento 219     (Conferir se o segundo esta entre o primeiro e o ultimo numero)
10- Procedimento 220    (Conferir se o segundo nao esta entre o primeiro e o ultimo)

Escolha a opcao desejada: 6

        Procedimento 0216
Digite o primeiro numero: 60
Digite o segundo numero: 72
O primeiro numero 60 e par e o segundo numero 72 e par.

Apertar ENTER para continuar

PS C:\Users\1563147\Documents\1563147_Gabriel_Matos_Nogueira> ./Exemplo0210

        Codigo de Pessoa: 1563147 | Matricula: 870863
                   Gabriel Matos Nogueira

1- Procedimento 211     (Conferir se numero e positivo e par ou impar e negativo)
2- Procedimento 212     (Conferir se e par e menor que -25 ou impar e maior que 25)
3- Procedimento 213     (Conferir se pertence ao intervalo (20,55)
4- Procedimento 214     (Conferir se pertence ao intervalo [20,55]
5- Procedimento 215     (Conferir se pertence a intersecao entre [10,30] e (20,55)
6- Procedimento 216     (Conferir se o primeiro e impar e o segundo e par)
7- Procedimento 217     (Conferir se o primeiro e par e negativo e se o segundo e impar e positivo)
8- Procedimento 218     (Conferir se o primeiro e menor, igual ou maior que um quarto do segundo)
9- Procedimento 219     (Conferir se o segundo esta entre o primeiro e o ultimo numero)
10- Procedimento 220    (Conferir se o segundo nao esta entre o primeiro e o ultimo)

Escolha a opcao desejada: 6

        Procedimento 0216
Digite o primeiro numero: 50
Digite o segundo numero: 63
O primeiro numero 50 e par e o segundo numero 63 e impar.

Apertar ENTER para continuar

PS C:\Users\1563147\Documents\1563147_Gabriel_Matos_Nogueira> ./Exemplo0210

        Codigo de Pessoa: 1563147 | Matricula: 870863
                   Gabriel Matos Nogueira

1- Procedimento 211     (Conferir se numero e positivo e par ou impar e negativo)
2- Procedimento 212     (Conferir se e par e menor que -25 ou impar e maior que 25)
3- Procedimento 213     (Conferir se pertence ao intervalo (20,55)
4- Procedimento 214     (Conferir se pertence ao intervalo [20,55]
5- Procedimento 215     (Conferir se pertence a intersecao entre [10,30] e (20,55)
6- Procedimento 216     (Conferir se o primeiro e impar e o segundo e par)
7- Procedimento 217     (Conferir se o primeiro e par e negativo e se o segundo e impar e positivo)
8- Procedimento 218     (Conferir se o primeiro e menor, igual ou maior que um quarto do segundo)
9- Procedimento 219     (Conferir se o segundo esta entre o primeiro e o ultimo numero)
10- Procedimento 220    (Conferir se o segundo nao esta entre o primeiro e o ultimo)

Escolha a opcao desejada: 6

        Procedimento 0216
Digite o primeiro numero: 89
Digite o segundo numero: 98
O primeiro numero 89 e impar e o segundo numero 98 e par.

Apertar ENTER para continuar
////////////////////////////////////////////////////////////////////////////////////////////////////////////////
2.0.0 - Procedimento 217 (OK)
Resultados:
PS C:\Users\1563147\Documents\1563147_Gabriel_Matos_Nogueira> gcc -o Exemplo0210 Exemplo0210.c
PS C:\Users\1563147\Documents\1563147_Gabriel_Matos_Nogueira> ./Exemplo0210

        Codigo de Pessoa: 1563147 | Matricula: 870863
                   Gabriel Matos Nogueira

1- Procedimento 211     (Conferir se numero e positivo e par ou impar e negativo)
2- Procedimento 212     (Conferir se e par e menor que -25 ou impar e maior que 25)
3- Procedimento 213     (Conferir se pertence ao intervalo (20,55)
4- Procedimento 214     (Conferir se pertence ao intervalo [20,55]
5- Procedimento 215     (Conferir se pertence a intersecao entre [10,30] e (20,55)
6- Procedimento 216     (Conferir se o primeiro e impar e o segundo e par)
7- Procedimento 217     (Conferir se o primeiro e par e negativo e se o segundo e impar e positivo)
8- Procedimento 218     (Conferir se o primeiro e menor, igual ou maior que um quarto do segundo)
9- Procedimento 219     (Conferir se o segundo esta entre o primeiro e o ultimo numero)
10- Procedimento 220    (Conferir se o segundo nao esta entre o primeiro e o ultimo)

Escolha a opcao desejada: 7

        Procedimento 0217
Digite o primeiro numero: -5
Digite o segundo numero: -15
O primeiro numero nao e par e negativo e o segundo numero nao e impar e positivo.

Apertar ENTER para continuar

PS C:\Users\1563147\Documents\1563147_Gabriel_Matos_Nogueira> ./Exemplo0210

        Codigo de Pessoa: 1563147 | Matricula: 870863
                   Gabriel Matos Nogueira

1- Procedimento 211     (Conferir se numero e positivo e par ou impar e negativo)
2- Procedimento 212     (Conferir se e par e menor que -25 ou impar e maior que 25)
3- Procedimento 213     (Conferir se pertence ao intervalo (20,55)
4- Procedimento 214     (Conferir se pertence ao intervalo [20,55]
5- Procedimento 215     (Conferir se pertence a intersecao entre [10,30] e (20,55)
6- Procedimento 216     (Conferir se o primeiro e impar e o segundo e par)
7- Procedimento 217     (Conferir se o primeiro e par e negativo e se o segundo e impar e positivo)
8- Procedimento 218     (Conferir se o primeiro e menor, igual ou maior que um quarto do segundo)
9- Procedimento 219     (Conferir se o segundo esta entre o primeiro e o ultimo numero)
10- Procedimento 220    (Conferir se o segundo nao esta entre o primeiro e o ultimo)

Escolha a opcao desejada: 7

        Procedimento 0217
Digite o primeiro numero: -13
Digite o segundo numero: 20
O primeiro numero nao e par e negativo e o segundo numero nao e impar e positivo.

Apertar ENTER para continuar

PS C:\Users\1563147\Documents\1563147_Gabriel_Matos_Nogueira> ./Exemplo0210

        Codigo de Pessoa: 1563147 | Matricula: 870863
                   Gabriel Matos Nogueira

1- Procedimento 211     (Conferir se numero e positivo e par ou impar e negativo)
2- Procedimento 212     (Conferir se e par e menor que -25 ou impar e maior que 25)
3- Procedimento 213     (Conferir se pertence ao intervalo (20,55)
4- Procedimento 214     (Conferir se pertence ao intervalo [20,55]
5- Procedimento 215     (Conferir se pertence a intersecao entre [10,30] e (20,55)
6- Procedimento 216     (Conferir se o primeiro e impar e o segundo e par)
7- Procedimento 217     (Conferir se o primeiro e par e negativo e se o segundo e impar e positivo)
8- Procedimento 218     (Conferir se o primeiro e menor, igual ou maior que um quarto do segundo)
9- Procedimento 219     (Conferir se o segundo esta entre o primeiro e o ultimo numero)
10- Procedimento 220    (Conferir se o segundo nao esta entre o primeiro e o ultimo)

Escolha a opcao desejada: 7

        Procedimento 0217
Digite o primeiro numero: -30
Digite o segundo numero: 45
O primeiro numero e par e negativo e o segundo numero e impar e positivo.

Apertar ENTER para continuar

PS C:\Users\1563147\Documents\1563147_Gabriel_Matos_Nogueira> ./Exemplo0210

        Codigo de Pessoa: 1563147 | Matricula: 870863
                   Gabriel Matos Nogueira

1- Procedimento 211     (Conferir se numero e positivo e par ou impar e negativo)
2- Procedimento 212     (Conferir se e par e menor que -25 ou impar e maior que 25)
3- Procedimento 213     (Conferir se pertence ao intervalo (20,55)
4- Procedimento 214     (Conferir se pertence ao intervalo [20,55]
5- Procedimento 215     (Conferir se pertence a intersecao entre [10,30] e (20,55)
6- Procedimento 216     (Conferir se o primeiro e impar e o segundo e par)
7- Procedimento 217     (Conferir se o primeiro e par e negativo e se o segundo e impar e positivo)
8- Procedimento 218     (Conferir se o primeiro e menor, igual ou maior que um quarto do segundo)
9- Procedimento 219     (Conferir se o segundo esta entre o primeiro e o ultimo numero)
10- Procedimento 220    (Conferir se o segundo nao esta entre o primeiro e o ultimo)

Escolha a opcao desejada: 7

        Procedimento 0217
Digite o primeiro numero: 60
Digite o segundo numero: 72
O primeiro numero nao e par e negativo e o segundo numero nao e impar e positivo.

Apertar ENTER para continuar

PS C:\Users\1563147\Documents\1563147_Gabriel_Matos_Nogueira> ./Exemplo0210

        Codigo de Pessoa: 1563147 | Matricula: 870863
                   Gabriel Matos Nogueira

1- Procedimento 211     (Conferir se numero e positivo e par ou impar e negativo)
2- Procedimento 212     (Conferir se e par e menor que -25 ou impar e maior que 25)
3- Procedimento 213     (Conferir se pertence ao intervalo (20,55)
4- Procedimento 214     (Conferir se pertence ao intervalo [20,55]
5- Procedimento 215     (Conferir se pertence a intersecao entre [10,30] e (20,55)
6- Procedimento 216     (Conferir se o primeiro e impar e o segundo e par)
7- Procedimento 217     (Conferir se o primeiro e par e negativo e se o segundo e impar e positivo)
8- Procedimento 218     (Conferir se o primeiro e menor, igual ou maior que um quarto do segundo)
9- Procedimento 219     (Conferir se o segundo esta entre o primeiro e o ultimo numero)
10- Procedimento 220    (Conferir se o segundo nao esta entre o primeiro e o ultimo)

Escolha a opcao desejada: 7

        Procedimento 0217
Digite o primeiro numero: -89
Digite o segundo numero: -98
O primeiro numero nao e par e negativo e o segundo numero nao e impar e positivo.

Apertar ENTER para continuar

PS C:\Users\1563147\Documents\1563147_Gabriel_Matos_Nogueira>
////////////////////////////////////////////////////////////////////////////////////////////////////////////////

2.0.0 - Procedimento 218 (OK)
Resultados:
PS C:\Users\1563147\Documents\1563147_Gabriel_Matos_Nogueira> gcc -o Exemplo0210 Exemplo0210.c
PS C:\Users\1563147\Documents\1563147_Gabriel_Matos_Nogueira> ./Exemplo0210

        Codigo de Pessoa: 1563147 | Matricula: 870863
                   Gabriel Matos Nogueira

1- Procedimento 211     (Conferir se numero e positivo e par ou impar e negativo)
2- Procedimento 212     (Conferir se e par e menor que -25 ou impar e maior que 25)
3- Procedimento 213     (Conferir se pertence ao intervalo (20,55)
4- Procedimento 214     (Conferir se pertence ao intervalo [20,55]
5- Procedimento 215     (Conferir se pertence a intersecao entre [10,30] e (20,55)
6- Procedimento 216     (Conferir se o primeiro e impar e o segundo e par)
7- Procedimento 217     (Conferir se o primeiro e par e negativo e se o segundo e impar e positivo)
8- Procedimento 218     (Conferir se o primeiro e menor, igual ou maior que um quarto do segundo)
9- Procedimento 219     (Conferir se o segundo esta entre o primeiro e o ultimo numero)
10- Procedimento 220    (Conferir se o segundo nao esta entre o primeiro e o ultimo)

Escolha a opcao desejada: 8

        Procedimento 0218
Digite o primeiro numero: 0.5
Digite o segundo numero: 1.5
O primeiro numero e menor que um quarto do segundo numero.

Apertar ENTER para continuar

PS C:\Users\1563147\Documents\1563147_Gabriel_Matos_Nogueira> ./Exemplo0210

        Codigo de Pessoa: 1563147 | Matricula: 870863
                   Gabriel Matos Nogueira

1- Procedimento 211     (Conferir se numero e positivo e par ou impar e negativo)
2- Procedimento 212     (Conferir se e par e menor que -25 ou impar e maior que 25)
3- Procedimento 213     (Conferir se pertence ao intervalo (20,55)
4- Procedimento 214     (Conferir se pertence ao intervalo [20,55]
5- Procedimento 215     (Conferir se pertence a intersecao entre [10,30] e (20,55)
6- Procedimento 216     (Conferir se o primeiro e impar e o segundo e par)
7- Procedimento 217     (Conferir se o primeiro e par e negativo e se o segundo e impar e positivo)
8- Procedimento 218     (Conferir se o primeiro e menor, igual ou maior que um quarto do segundo)
9- Procedimento 219     (Conferir se o segundo esta entre o primeiro e o ultimo numero)
10- Procedimento 220    (Conferir se o segundo nao esta entre o primeiro e o ultimo)

Escolha a opcao desejada: 8

        Procedimento 0218
Digite o primeiro numero: 3.0
Digite o segundo numero: 3.0
O primeiro numero e igual a um quarto do segundo numero.

Apertar ENTER para continuar

PS C:\Users\1563147\Documents\1563147_Gabriel_Matos_Nogueira> ./Exemplo0210

        Codigo de Pessoa: 1563147 | Matricula: 870863
                   Gabriel Matos Nogueira

1- Procedimento 211     (Conferir se numero e positivo e par ou impar e negativo)
2- Procedimento 212     (Conferir se e par e menor que -25 ou impar e maior que 25)
3- Procedimento 213     (Conferir se pertence ao intervalo (20,55)
4- Procedimento 214     (Conferir se pertence ao intervalo [20,55]
5- Procedimento 215     (Conferir se pertence a intersecao entre [10,30] e (20,55)
6- Procedimento 216     (Conferir se o primeiro e impar e o segundo e par)
7- Procedimento 217     (Conferir se o primeiro e par e negativo e se o segundo e impar e positivo)
8- Procedimento 218     (Conferir se o primeiro e menor, igual ou maior que um quarto do segundo)
9- Procedimento 219     (Conferir se o segundo esta entre o primeiro e o ultimo numero)
10- Procedimento 220    (Conferir se o segundo nao esta entre o primeiro e o ultimo)

Escolha a opcao desejada: 8

        Procedimento 0218
Digite o primeiro numero: -5.5
Digite o segundo numero: 6.4
O primeiro numero e maior que um quarto do segundo numero.

Apertar ENTER para continuar

PS C:\Users\1563147\Documents\1563147_Gabriel_Matos_Nogueira> ./Exemplo0210

        Codigo de Pessoa: 1563147 | Matricula: 870863
                   Gabriel Matos Nogueira

1- Procedimento 211     (Conferir se numero e positivo e par ou impar e negativo)
2- Procedimento 212     (Conferir se e par e menor que -25 ou impar e maior que 25)
3- Procedimento 213     (Conferir se pertence ao intervalo (20,55)
4- Procedimento 214     (Conferir se pertence ao intervalo [20,55]
5- Procedimento 215     (Conferir se pertence a intersecao entre [10,30] e (20,55)
6- Procedimento 216     (Conferir se o primeiro e impar e o segundo e par)
7- Procedimento 217     (Conferir se o primeiro e par e negativo e se o segundo e impar e positivo)
8- Procedimento 218     (Conferir se o primeiro e menor, igual ou maior que um quarto do segundo)
9- Procedimento 219     (Conferir se o segundo esta entre o primeiro e o ultimo numero)
10- Procedimento 220    (Conferir se o segundo nao esta entre o primeiro e o ultimo)

Escolha a opcao desejada: 8

        Procedimento 0218
Digite o primeiro numero: 7.8
Digite o segundo numero: -8.7
O primeiro numero e maior que um quarto do segundo numero.

Apertar ENTER para continuar

PS C:\Users\1563147\Documents\1563147_Gabriel_Matos_Nogueira> ./Exemplo0210

        Codigo de Pessoa: 1563147 | Matricula: 870863
                   Gabriel Matos Nogueira

1- Procedimento 211     (Conferir se numero e positivo e par ou impar e negativo)
2- Procedimento 212     (Conferir se e par e menor que -25 ou impar e maior que 25)
3- Procedimento 213     (Conferir se pertence ao intervalo (20,55)
4- Procedimento 214     (Conferir se pertence ao intervalo [20,55]
5- Procedimento 215     (Conferir se pertence a intersecao entre [10,30] e (20,55)
6- Procedimento 216     (Conferir se o primeiro e impar e o segundo e par)
7- Procedimento 217     (Conferir se o primeiro e par e negativo e se o segundo e impar e positivo)
8- Procedimento 218     (Conferir se o primeiro e menor, igual ou maior que um quarto do segundo)
9- Procedimento 219     (Conferir se o segundo esta entre o primeiro e o ultimo numero)
10- Procedimento 220    (Conferir se o segundo nao esta entre o primeiro e o ultimo)

Escolha a opcao desejada: 8

        Procedimento 0218
Digite o primeiro numero: 3.6
Digite o segundo numero: 4.5
O primeiro numero e menor que um quarto do segundo numero.

Apertar ENTER para continuar

PS C:\Users\1563147\Documents\1563147_Gabriel_Matos_Nogueira> ./Exemplo0210

        Codigo de Pessoa: 1563147 | Matricula: 870863
                   Gabriel Matos Nogueira

1- Procedimento 211     (Conferir se numero e positivo e par ou impar e negativo)
2- Procedimento 212     (Conferir se e par e menor que -25 ou impar e maior que 25)
3- Procedimento 213     (Conferir se pertence ao intervalo (20,55)
4- Procedimento 214     (Conferir se pertence ao intervalo [20,55]
5- Procedimento 215     (Conferir se pertence a intersecao entre [10,30] e (20,55)
6- Procedimento 216     (Conferir se o primeiro e impar e o segundo e par)
7- Procedimento 217     (Conferir se o primeiro e par e negativo e se o segundo e impar e positivo)
8- Procedimento 218     (Conferir se o primeiro e menor, igual ou maior que um quarto do segundo)
9- Procedimento 219     (Conferir se o segundo esta entre o primeiro e o ultimo numero)
10- Procedimento 220    (Conferir se o segundo nao esta entre o primeiro e o ultimo)

Escolha a opcao desejada: 8

        Procedimento 0218
Digite o primeiro numero: 6.3
Digite o segundo numero: 7.2
O primeiro numero e maior que um quarto do segundo numero.

Apertar ENTER para continuar

PS C:\Users\1563147\Documents\1563147_Gabriel_Matos_Nogueira> ./Exemplo0210

        Codigo de Pessoa: 1563147 | Matricula: 870863
                   Gabriel Matos Nogueira

1- Procedimento 211     (Conferir se numero e positivo e par ou impar e negativo)
2- Procedimento 212     (Conferir se e par e menor que -25 ou impar e maior que 25)
3- Procedimento 213     (Conferir se pertence ao intervalo (20,55)
4- Procedimento 214     (Conferir se pertence ao intervalo [20,55]
5- Procedimento 215     (Conferir se pertence a intersecao entre [10,30] e (20,55)
6- Procedimento 216     (Conferir se o primeiro e impar e o segundo e par)
7- Procedimento 217     (Conferir se o primeiro e par e negativo e se o segundo e impar e positivo)
8- Procedimento 218     (Conferir se o primeiro e menor, igual ou maior que um quarto do segundo)
9- Procedimento 219     (Conferir se o segundo esta entre o primeiro e o ultimo numero)
10- Procedimento 220    (Conferir se o segundo nao esta entre o primeiro e o ultimo)

Escolha a opcao desejada: 8

        Procedimento 0218
Digite o primeiro numero: 9.8
Digite o segundo numero: 8.9
O primeiro numero e maior que um quarto do segundo numero.

Apertar ENTER para continuar

PS C:\Users\1563147\Documents\1563147_Gabriel_Matos_Nogueira>
////////////////////////////////////////////////////////////////////////////////////////////////////////////////

2.0.0 - Procedimento 219 (OK)
Resultados:
PS C:\Users\1563147\Documents\1563147_Gabriel_Matos_Nogueira> gcc -o Exemplo0210 Exemplo0210.c
PS C:\Users\1563147\Documents\1563147_Gabriel_Matos_Nogueira> ./Exemplo0210

        Codigo de Pessoa: 1563147 | Matricula: 870863
                   Gabriel Matos Nogueira

1- Procedimento 211     (Conferir se numero e positivo e par ou impar e negativo)
2- Procedimento 212     (Conferir se e par e menor que -25 ou impar e maior que 25)
3- Procedimento 213     (Conferir se pertence ao intervalo (20,55)
4- Procedimento 214     (Conferir se pertence ao intervalo [20,55]
5- Procedimento 215     (Conferir se pertence a intersecao entre [10,30] e (20,55)
6- Procedimento 216     (Conferir se o primeiro e impar e o segundo e par)
7- Procedimento 217     (Conferir se o primeiro e par e negativo e se o segundo e impar e positivo)
8- Procedimento 218     (Conferir se o primeiro e menor, igual ou maior que um quarto do segundo)
9- Procedimento 219     (Conferir se o segundo esta entre o primeiro e o ultimo numero)
10- Procedimento 220    (Conferir se o segundo nao esta entre o primeiro e o ultimo)

Escolha a opcao desejada: 9

        Procedimento 0219
Digite o primeiro numero: 0.75
Digite o segundo numero: 0.5
Digite o terceiro numero: 1.8
O segundo numero esta entre o primeiro e o ultimo numero.

Apertar ENTER para continuar

PS C:\Users\1563147\Documents\1563147_Gabriel_Matos_Nogueira> ./Exemplo0210

        Codigo de Pessoa: 1563147 | Matricula: 870863
                   Gabriel Matos Nogueira

1- Procedimento 211     (Conferir se numero e positivo e par ou impar e negativo)
2- Procedimento 212     (Conferir se e par e menor que -25 ou impar e maior que 25)
3- Procedimento 213     (Conferir se pertence ao intervalo (20,55)
4- Procedimento 214     (Conferir se pertence ao intervalo [20,55]
5- Procedimento 215     (Conferir se pertence a intersecao entre [10,30] e (20,55)
6- Procedimento 216     (Conferir se o primeiro e impar e o segundo e par)
7- Procedimento 217     (Conferir se o primeiro e par e negativo e se o segundo e impar e positivo)
8- Procedimento 218     (Conferir se o primeiro e menor, igual ou maior que um quarto do segundo)
9- Procedimento 219     (Conferir se o segundo esta entre o primeiro e o ultimo numero)
10- Procedimento 220    (Conferir se o segundo nao esta entre o primeiro e o ultimo)

Escolha a opcao desejada: 9

        Procedimento 0219
Digite o primeiro numero: 3.6
Digite o segundo numero: 4.5
Digite o terceiro numero: 2.4
O segundo numero esta entre o primeiro e o ultimo numero.

Apertar ENTER para continuar

PS C:\Users\1563147\Documents\1563147_Gabriel_Matos_Nogueira> ./Exemplo0210

        Codigo de Pessoa: 1563147 | Matricula: 870863
                   Gabriel Matos Nogueira

1- Procedimento 211     (Conferir se numero e positivo e par ou impar e negativo)
2- Procedimento 212     (Conferir se e par e menor que -25 ou impar e maior que 25)
3- Procedimento 213     (Conferir se pertence ao intervalo (20,55)
4- Procedimento 214     (Conferir se pertence ao intervalo [20,55]
5- Procedimento 215     (Conferir se pertence a intersecao entre [10,30] e (20,55)
6- Procedimento 216     (Conferir se o primeiro e impar e o segundo e par)
7- Procedimento 217     (Conferir se o primeiro e par e negativo e se o segundo e impar e positivo)
8- Procedimento 218     (Conferir se o primeiro e menor, igual ou maior que um quarto do segundo)
9- Procedimento 219     (Conferir se o segundo esta entre o primeiro e o ultimo numero)
10- Procedimento 220    (Conferir se o segundo nao esta entre o primeiro e o ultimo)

Escolha a opcao desejada: 9

        Procedimento 0219
Digite o primeiro numero: 6.3
Digite o segundo numero: 7.2
Digite o terceiro numero: 6.5
O segundo numero nao esta entre o primeiro e o ultimo numero.

Apertar ENTER para continuar

PS C:\Users\1563147\Documents\1563147_Gabriel_Matos_Nogueira> ./Exemplo0210

        Codigo de Pessoa: 1563147 | Matricula: 870863
                   Gabriel Matos Nogueira

1- Procedimento 211     (Conferir se numero e positivo e par ou impar e negativo)
2- Procedimento 212     (Conferir se e par e menor que -25 ou impar e maior que 25)
3- Procedimento 213     (Conferir se pertence ao intervalo (20,55)
4- Procedimento 214     (Conferir se pertence ao intervalo [20,55]
5- Procedimento 215     (Conferir se pertence a intersecao entre [10,30] e (20,55)
6- Procedimento 216     (Conferir se o primeiro e impar e o segundo e par)
7- Procedimento 217     (Conferir se o primeiro e par e negativo e se o segundo e impar e positivo)
8- Procedimento 218     (Conferir se o primeiro e menor, igual ou maior que um quarto do segundo)
9- Procedimento 219     (Conferir se o segundo esta entre o primeiro e o ultimo numero)
10- Procedimento 220    (Conferir se o segundo nao esta entre o primeiro e o ultimo)

Escolha a opcao desejada: 9

        Procedimento 0219
Digite o primeiro numero: 9.8
Digite o segundo numero: 8.9
Digite o terceiro numero: 8.9
O segundo numero esta entre o primeiro e o ultimo numero.

Apertar ENTER para continuar

PS C:\Users\1563147\Documents\1563147_Gabriel_Matos_Nogueira> ./Exemplo0210

        Codigo de Pessoa: 1563147 | Matricula: 870863
                   Gabriel Matos Nogueira

1- Procedimento 211     (Conferir se numero e positivo e par ou impar e negativo)
2- Procedimento 212     (Conferir se e par e menor que -25 ou impar e maior que 25)
3- Procedimento 213     (Conferir se pertence ao intervalo (20,55)
4- Procedimento 214     (Conferir se pertence ao intervalo [20,55]
5- Procedimento 215     (Conferir se pertence a intersecao entre [10,30] e (20,55)
6- Procedimento 216     (Conferir se o primeiro e impar e o segundo e par)
7- Procedimento 217     (Conferir se o primeiro e par e negativo e se o segundo e impar e positivo)
8- Procedimento 218     (Conferir se o primeiro e menor, igual ou maior que um quarto do segundo)
9- Procedimento 219     (Conferir se o segundo esta entre o primeiro e o ultimo numero)
10- Procedimento 220    (Conferir se o segundo nao esta entre o primeiro e o ultimo)

Escolha a opcao desejada: 9

        Procedimento 0219
Digite o primeiro numero: 6.3
Digite o segundo numero: 7.2
Digite o terceiro numero: 8.9
O segundo numero esta entre o primeiro e o ultimo numero.

Apertar ENTER para continuar

PS C:\Users\1563147\Documents\1563147_Gabriel_Matos_Nogueira>
////////////////////////////////////////////////////////////////////////////////////////////////////////////////

2.0.0 - Procedimento 220 (OK)
PS C:\Users\1563147\Documents\1563147_Gabriel_Matos_Nogueira> gcc -o Exemplo0210 Exemplo0210.c
PS C:\Users\1563147\Documents\1563147_Gabriel_Matos_Nogueira> ./Exemplo0210

        Codigo de Pessoa: 1563147 | Matricula: 870863
                   Gabriel Matos Nogueira

1- Procedimento 211     (Conferir se numero e positivo e par ou impar e negativo)
2- Procedimento 212     (Conferir se e par e menor que -25 ou impar e maior que 25)
3- Procedimento 213     (Conferir se pertence ao intervalo (20,55)
4- Procedimento 214     (Conferir se pertence ao intervalo [20,55]
5- Procedimento 215     (Conferir se pertence a intersecao entre [10,30] e (20,55)
6- Procedimento 216     (Conferir se o primeiro e impar e o segundo e par)
7- Procedimento 217     (Conferir se o primeiro e par e negativo e se o segundo e impar e positivo)
8- Procedimento 218     (Conferir se o primeiro e menor, igual ou maior que um quarto do segundo)
9- Procedimento 219     (Conferir se o segundo esta entre o primeiro e o ultimo numero)
10- Procedimento 220    (Conferir se o segundo nao esta entre o primeiro e o ultimo)

Escolha a opcao desejada: 10

        Procedimento 0220
Digite o primeiro numero: 0.75
Digite o segundo numero: 0.5
Digite o terceiro numero: 1.8
O segundo numero nao esta entre o primeiro e o ultimo numero.

Apertar ENTER para continuar

PS C:\Users\1563147\Documents\1563147_Gabriel_Matos_Nogueira> ./Exemplo0210

        Codigo de Pessoa: 1563147 | Matricula: 870863
                   Gabriel Matos Nogueira

1- Procedimento 211     (Conferir se numero e positivo e par ou impar e negativo)
2- Procedimento 212     (Conferir se e par e menor que -25 ou impar e maior que 25)
3- Procedimento 213     (Conferir se pertence ao intervalo (20,55)
4- Procedimento 214     (Conferir se pertence ao intervalo [20,55]
5- Procedimento 215     (Conferir se pertence a intersecao entre [10,30] e (20,55)
6- Procedimento 216     (Conferir se o primeiro e impar e o segundo e par)
7- Procedimento 217     (Conferir se o primeiro e par e negativo e se o segundo e impar e positivo)
8- Procedimento 218     (Conferir se o primeiro e menor, igual ou maior que um quarto do segundo)
9- Procedimento 219     (Conferir se o segundo esta entre o primeiro e o ultimo numero)
10- Procedimento 220    (Conferir se o segundo nao esta entre o primeiro e o ultimo)

Escolha a opcao desejada: 10

        Procedimento 0220
Digite o primeiro numero: 3.6
Digite o segundo numero: 4.5
Digite o terceiro numero: 2.4
O segundo numero nao esta entre o primeiro e o ultimo numero.

Apertar ENTER para continuar

PS C:\Users\1563147\Documents\1563147_Gabriel_Matos_Nogueira> ./Exemplo0210

        Codigo de Pessoa: 1563147 | Matricula: 870863
                   Gabriel Matos Nogueira

1- Procedimento 211     (Conferir se numero e positivo e par ou impar e negativo)
2- Procedimento 212     (Conferir se e par e menor que -25 ou impar e maior que 25)
3- Procedimento 213     (Conferir se pertence ao intervalo (20,55)
4- Procedimento 214     (Conferir se pertence ao intervalo [20,55]
5- Procedimento 215     (Conferir se pertence a intersecao entre [10,30] e (20,55)
6- Procedimento 216     (Conferir se o primeiro e impar e o segundo e par)
7- Procedimento 217     (Conferir se o primeiro e par e negativo e se o segundo e impar e positivo)
8- Procedimento 218     (Conferir se o primeiro e menor, igual ou maior que um quarto do segundo)
9- Procedimento 219     (Conferir se o segundo esta entre o primeiro e o ultimo numero)
10- Procedimento 220    (Conferir se o segundo nao esta entre o primeiro e o ultimo)

Escolha a opcao desejada: 10

        Procedimento 0220
Digite o primeiro numero: 6.3
Digite o segundo numero: 7.2
Digite o terceiro numero: 6.5
O segundo numero nao esta entre o primeiro e o ultimo numero.

Apertar ENTER para continuar

PS C:\Users\1563147\Documents\1563147_Gabriel_Matos_Nogueira> ./Exemplo0210

        Codigo de Pessoa: 1563147 | Matricula: 870863
                   Gabriel Matos Nogueira

1- Procedimento 211     (Conferir se numero e positivo e par ou impar e negativo)
2- Procedimento 212     (Conferir se e par e menor que -25 ou impar e maior que 25)
3- Procedimento 213     (Conferir se pertence ao intervalo (20,55)
4- Procedimento 214     (Conferir se pertence ao intervalo [20,55]
5- Procedimento 215     (Conferir se pertence a intersecao entre [10,30] e (20,55)
6- Procedimento 216     (Conferir se o primeiro e impar e o segundo e par)
7- Procedimento 217     (Conferir se o primeiro e par e negativo e se o segundo e impar e positivo)
8- Procedimento 218     (Conferir se o primeiro e menor, igual ou maior que um quarto do segundo)
9- Procedimento 219     (Conferir se o segundo esta entre o primeiro e o ultimo numero)
10- Procedimento 220    (Conferir se o segundo nao esta entre o primeiro e o ultimo)

Escolha a opcao desejada: 10

        Procedimento 0220
Digite o primeiro numero: 9.8
Digite o segundo numero: 8.9
Digite o terceiro numero: 8.9
O segundo numero nao esta entre o primeiro e o ultimo numero.

Apertar ENTER para continuar

PS C:\Users\1563147\Documents\1563147_Gabriel_Matos_Nogueira> ./Exemplo0210

        Codigo de Pessoa: 1563147 | Matricula: 870863
                   Gabriel Matos Nogueira

1- Procedimento 211     (Conferir se numero e positivo e par ou impar e negativo)
2- Procedimento 212     (Conferir se e par e menor que -25 ou impar e maior que 25)
3- Procedimento 213     (Conferir se pertence ao intervalo (20,55)
4- Procedimento 214     (Conferir se pertence ao intervalo [20,55]
5- Procedimento 215     (Conferir se pertence a intersecao entre [10,30] e (20,55)
6- Procedimento 216     (Conferir se o primeiro e impar e o segundo e par)
7- Procedimento 217     (Conferir se o primeiro e par e negativo e se o segundo e impar e positivo)
8- Procedimento 218     (Conferir se o primeiro e menor, igual ou maior que um quarto do segundo)
9- Procedimento 219     (Conferir se o segundo esta entre o primeiro e o ultimo numero)
10- Procedimento 220    (Conferir se o segundo nao esta entre o primeiro e o ultimo)

Escolha a opcao desejada: 10

        Procedimento 0220
Digite o primeiro numero: 6.3
Digite o segundo numero: 7.2
Digite o terceiro numero: 8.9
O segundo numero nao esta entre o primeiro e o ultimo numero.

Apertar ENTER para continuar

PS C:\Users\1563147\Documents\1563147_Gabriel_Matos_Nogueira>
*/