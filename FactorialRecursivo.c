/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   FactorialRecursivo.c
 * Author: virgiliopadronbatun
 *
 * Created on 7 de julio de 2018, 22:11
 */

#include <stdio.h>
#include <stdlib.h>

//Función factorial recursiva 

long factorial( long numero ); /* prototipo de la función */ 
/* la función main comienza la ejecución del programa */

int main() {
    
    int i; /* contador */

    /* repite 11 veces; durante cada iteración, calcula
    el factorial( i ) y despliega el resultado */
    for ( i = 0; i <= 10; i++ ) {
    printf( "%2d! = %ld\n", i, factorial( i ) );
    } /* fin de for */

    return 0; /* indica terminación exitosa */ 
    }/*findemain*/

 
/* definición recursiva de la función factorial */ 
long factorial( long numero ) {
    
    /* caso base */
    if ( numero <= 1 ) {
    return 1;
    } /* fin de if */
    
    else { /* paso recursivo */
    return ( numero * factorial( numero - 1 ) ); 
    } /* fin de else */
} /* fin de la función factorial */
