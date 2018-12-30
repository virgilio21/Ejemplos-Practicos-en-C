/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   FibonacciRecursivo.c
 * Author: virgiliopadronbatun
 *
 * Created on 10 de julio de 2018, 19:01
 */

#include <stdio.h>
#include <stdlib.h>
long fibonacci( long n );

int main() {
    
    long resultado; /* valor fibonacci */
    long numero; /* numero a introducir por el usuario */
    
    /* obtiene un entero del usuario */
    printf( "Introduzca un entero: " );
    scanf( "%ld", &numero);

    /* calcula el valor fibonacci del número introducido por el usuario */
    resultado = fibonacci( numero );

    /* despliega el resultado */
    printf( "Fibonacci( %ld ) = %ld\n", numero, resultado );

    return 0; /* indica terminación exitosa */
    
}/*findemain*/

   /* definición de la función recursiva fibonacci */ 
   

long fibonacci( long n ) {
    /* caso base */
    if ( n == 0 || n == 1 ) {
    return n;
    } /* fin de if */
    else { /* paso recursivo */
    return fibonacci( n - 1 ) + fibonacci( n - 2 ); 
    } /* fin de else */
} /* fin de la función fibonacci */