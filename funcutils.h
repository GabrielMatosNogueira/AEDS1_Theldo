// 1563147_Gabriel_Matos_Nogueira
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void Identificacao ( void )
{
    printf ("\n\tCodigo de Pessoa: 1563147 | Matricula: 870863\n\t\t   Gabriel Matos Nogueira\n");
}

void  print   ( char *text )
{
    printf   ( "%s"  , text );    
}
void  println ( char *text )
{
    printf   ( "%s\n", text );    
}
void  pause   ( char *text )
{
    printf   ( "%s\n", text );    
    getchar( );
}
void  flush   ( void )
{
    char    x = '0';
    do
    {       x = getchar ( );     }
    while ( x != '\n' );
}
int   readint  ( char *text )
{
    int     x = 0;
    printf  ( "%s" , text );
    scanf   ( "%d" , &x   );   flush ( );
    return  ( x );
}
double readdouble ( char *text )
{
    double  x = 0.0;
    printf  ( "%s" , text );
    scanf   ( "%lf", &x   );   flush ( );
    return  ( x );
}
bool  readbool ( char *text )
{
    int     x = 0;
    printf  ( "%s" , text );
    scanf   ( "%d" , &x   );   flush ( );
    return  ( x != 0 );
}
char  readchar   ( char *text )
{
    char    x = '0';
    char    y = '0';
    printf  ( "%s" , text );
    scanf   ( "%c" , &x   );   
    do
    {       y = getchar ( );      }
    while ( y != '\n' );
    return  ( x );
}

double calcfrac ( double num, double den )
{
    double result = 0.0;
    result = (double)num/(double)den;
    if (den == 0)
    {
        return 1;
    }
    return (result);
}
