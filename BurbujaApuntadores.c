/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BurbujaApuntadores.c
 * Author: virgiliopadronbatun
 *
 * Created on 24 de julio de 2018, 20:02
 */

#include <stdio.h>
#include <stdlib.h>

#define TAMANIO 10
void intercambio( int *const  ptrElemento1, int *const  ptrElemento2 );
void ordenBurbuja( int *const arreglo, const int tamanio );

int main() {
    
    int arreglo[]= { 2, 6, 4, 8, 10, 12, 89, 68, 45, 37 };
    
    
    printf("\n");
    for( int i = 0; i < TAMANIO; i++ ) {
        printf("%d  ", arreglo[i]);
    }
    printf("\n");
    
    ordenBurbuja( arreglo, 10 );
    
    
    for( int i = 0; i < TAMANIO; i++ ) {
        printf("%d  ", arreglo[i]);
    }
    printf("\n");
    
    return 0;
}


void ordenBurbuja( int *arreglo, const int tamanio ) {
    
    
    for( int i = 0; i < tamanio - 1; i++ ) {
        
        for( int j = 0; j < tamanio - 1; j++ ) {
            if(arreglo[ j ] > arreglo[ j+1 ])
                intercambio( &arreglo[j], &arreglo[ j+1 ] );
        }
    }
}

void intercambio( int *const  ptrElemento1, int *const  ptrElemento2 ) {
    
    int temporal = *ptrElemento1;
    *ptrElemento1 = *ptrElemento2;
    *ptrElemento2 = temporal;
    
}
