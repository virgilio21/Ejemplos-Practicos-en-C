/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ComportamientoArreglos.c
 * Author: virgiliopadronbatun
 *
 * Created on 15 de julio de 2018, 17:08
 */

#include <stdio.h>
#include <stdlib.h>
#define TAMANIO 5
/* Figura 6.13: fig06_13.c
Paso de arreglos y de elementos de un arreglo a funciones */
#define TAMANIO 5
/* prototipos de las funciones */
void modificaArreglo( int b[], int tamanio ); 
void modificaElemento( int e );
 

int main() {
    
    int a[ TAMANIO ] = { 0, 1, 2, 3, 4 }; 
    int i; 
    
    printf( "Efectos de pasar arreglos completos por referencia:\n\nlos"
          "valores del arreglo original son:\n" );
    
    /* muestra el arreglo original */ 
    for( i = 0; i < TAMANIO; i++ ){
        printf( "%3d", a[ i ] ); 
    }
    
    printf( "\n" );
            
    /* pasa el arreglo a modificaArreglo por referencia */ 
    modificaArreglo( a, TAMANIO );
    
    printf( "Los valores del arreglo modificado son:\n" );
    
    /* muestra el arreglo modificado */ 
    for( i = 0; i < TAMANIO; i++ ) {
    printf( "%3d", a[ i ] ); 
    
    }
    
    /*muestraelvalordea[3]*/
    printf( "\n\n\nEfectos de pasar un elemento del arreglo "
    "por valor:\n\nEl valor de a[3] es %d\n", a[ 3 ] );
     
    modificaElemento( a[ 3 ]);
    printf( "El valor de a[ 3 ] es: %d\n", a[ 3 ] );

}


/* en la función modificaArreglo, “b” apunta al arreglo original “a” en memoria */
void modificaArreglo( int b[], int tamanio ) {
    
    int j; 
    /* multiplica cada elemento del arreglo por 2 */ 
    for ( j = 0; j < tamanio; j++ ) {
    
        b[ j ] *= 2;
        
    } 
} 
            
/* en la función modificaElemento, “e” es una copia local del elemento a[ 3 ] del arreglo se pasó desde main */
void modificaElemento( int e ) {
    
    /* multiplica el parámetro por 2 */
    printf( "El valor en modificaElemento es %d\n", e *= 2 ); 
    
} 
