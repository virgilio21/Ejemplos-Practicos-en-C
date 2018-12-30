/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ModaMediaYMediana.c
 * Author: virgiliopadronbatun
 *
 * Created on 15 de julio de 2018, 18:21
 */

#include <stdio.h>
#include <stdlib.h>

void moda( const int a[], int frecuencia[]);
void media( const int b[] );
void mediana( int c[] );
void burbuja( int d[]);
void imprimirArreglo( const int e[] );

#define TAMANIO 99


int main() {
    
    int contadores[10] = {0};
    
    int respuesta[ TAMANIO ] = { 6, 7, 8, 9, 8, 7, 8, 9, 8, 9,
                                 7,8,9,5,9,8,7,8,7,8,
                                 6,7,8,9,3,9,8,7,8,7,
                                 7,8,9,8,9,8,9,7,8,9,
                                 6,7,8,7,8,7,9,8,9,2,
                                 7,8,9,8,9,8,9,7,5,3,
                                 5,6,7,2,5,3,9,4,6,4,
                                 7,8,9,6,8,7,8,9,7,8,
                                 7,4,4,2,5,3,8,7,5,6,
                                 4,5,6,1,6,5,7,8,7
                                };
    
    moda( respuesta, contadores );
    media ( respuesta );
    mediana( respuesta );
    
    return 0;
}


void burbuja( int d[] ) {
    
    int pasada; 
    int j; 
    int almacena = 0;
   
    /* ciclo para controlar el número de pasadas */ 
    for ( pasada = 1; pasada < TAMANIO; pasada++ ) {
    /* ciclo para controlar el número de comparaciones por pasada */ 
        for ( j = 0; j < TAMANIO - 1; j++ ) {
    /* intercambia los elementos si no se encuentran en orden */ 
            if ( d[ j ] > d[ j + 1 ] ) {
                almacena = d[ j ];
                d[ j ] = d[ j + 1 ]; 
                d[ j + 1 ] = almacena;
            } /* fin de if */
        } /* fin del for interno */
    } /* fin del for externo */ 
} /* fin de ordenamBurbuja */

void mediana( int c[] ){
    
    burbuja( c );
    
    int posicion = TAMANIO / 2;
    int valorDeMediana = c[ posicion];
    
    printf( "La mediana es: %d\n", valorDeMediana );
    printf( "En la posicion: %d\n", posicion );
    
}


void media( const int b[] ){
    
    
    int total = 0;
    double media = 0.0;
    
    
    for( int i = 0; i < TAMANIO; i++ ){
        
        total += b[i];
    }
    
    media = (double)total / TAMANIO;
    
    printf(" El total es: %d\n", total );
    printf(" La media es: %f\n", media );
    
}

void moda( const int a[], int frecuencia[] ){
    
    
    int masGrande = 0;
    int moda = 0;
    
//    for( int i = 1; i <= 9; i++ ){
//        
//        frecuencia[i] = 0;
//    }
    
    for( int i = 0; i < TAMANIO; i++ ){
        
        frecuencia[ a[ i ] ]++;
        
    }
    
    for(int i = 1; i <= 9; i++){
        
        if( frecuencia[ i ] > masGrande ){
            
            masGrande = frecuencia[ i ];
            moda = i;
            
        }
        
    }
    
    printf( "El numero %d es la moda que se repite %d\n", moda, masGrande );
    
    
    
    
}

