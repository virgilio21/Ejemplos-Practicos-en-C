/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Binaria.c
 * Author: virgiliopadronbatun
 *
 * Created on 16 de julio de 2018, 12:26
 */

#include <stdio.h>
#include <stdlib.h>

#define TAMANIO 15

void imprimirEncabezados( void );
void despliegaSubArreglo( const int subArreglo[], int bajo, int alto, int medio );
int busquedaBinaria( const int arreglo[], int elementoABuscar, int bajo, int alto );



//Inconveniente el arreglo debe estar ordenado de forma ascendente
int main() {
    
    int arregloBusqueda[TAMANIO];
    
    for( int i = 0 ; i < TAMANIO ; i++ ){
        
        arregloBusqueda[i] = 2 * i;
        
    }
    
    
    int x;
    
    printf( "Introduce un numero de 0 a 28: \n" );
    scanf( "%d", &x );
    imprimirEncabezados();
    int resultado = busquedaBinaria( arregloBusqueda, x, 0, TAMANIO -1 );
    
    if( resultado != -1 ){
        printf( "El valor %d fue encontado en la posicion %d \n", x, resultado );
    }
    else{
        printf( "El valor %d no se encontro.\n", x );
    }
            
    return 0;
}



void imprimirEncabezados(){
    
    
    
    printf("Subindices:\n");
    
    for(int i = 0 ; i < TAMANIO; i++ )
        printf( "%3d", i );
    
    
    printf("\n");
    
    
    for( int i = 0; i < 3 * TAMANIO; i++ )
        printf("-");
    
    
    printf("\n");
}



void despliegaSubArreglo( const int subArreglo[], int bajo, int alto, int medio ){
    
    
    for( int i = 0 ; i < TAMANIO ; i++){
        
        if( i < bajo || i > alto )
            printf("   ");
        
        
        else if( i == medio )
            printf( "%3dº", subArreglo[i] );
        
        
        else
            printf("%3d", subArreglo[i]);
        
        
    }
    printf("\n");
}


int busquedaBinaria( const int arreglo[], int elementoABuscar, int bajo, int alto ){
    
    
    int central;
    while( bajo <= alto ){
       
        central = (bajo + alto) / 2;
        despliegaSubArreglo( arreglo, bajo, alto, central);
        
        
        
            
            if( arreglo[ central ] == elementoABuscar )
                return central;
            
            
            else if ( elementoABuscar < arreglo[ central] )
                alto = central - 1;
            
                
            else
                bajo = central + 1;
                

    }
    return -1;
}


