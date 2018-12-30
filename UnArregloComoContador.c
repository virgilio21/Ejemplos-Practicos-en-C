/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   UnArregloComoContador.c
 * Author: virgiliopadronbatun
 *
 * Created on 14 de julio de 2018, 17:46
 */

#include <stdio.h>
#include <stdlib.h>

#define TAMANIO_RESPUESTA 40
#define TAMANIO_FRECUENCIA 11
int main() {
    
    //Inicializa el primer dato del arreglo en cero, y gracias a esto todos los demas tambien en cero.
    int contadores[ TAMANIO_FRECUENCIA ] = {0};
    int respuestas[ TAMANIO_RESPUESTA ] = { 1, 2, 6, 4, 8, 5, 9, 7, 8, 10,
                                          1, 6, 3, 8, 6, 10, 3, 8, 2, 7, 6, 5, 7, 6, 8, 6, 7, 5, 6, 6,
                                          5, 6, 7, 5, 6, 4, 8, 6, 8, 10 };
    
    
    for( int i = 0; i < TAMANIO_RESPUESTA; i++ ){
        
        contadores[ respuestas[ i ] ]++;
    }
    
    printf("%5s %10s\n", "Rango", "Frecuencia");
    
    for( int j = 1; j < TAMANIO_FRECUENCIA; j++ ){
        
        printf( "%5d %10d\n", j, contadores[j] );
    }
    return 0;
}

