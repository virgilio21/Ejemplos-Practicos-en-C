/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   NumerosAletoriosSemilla.c
 * Author: virgiliopadronbatun
 *
 * Created on 6 de julio de 2018, 21:02
 */

#include <stdio.h>
#include <stdlib.h>

//Uso de srand para generar numeros aletorios ya que la funcion rand siempre repite los numeros.
//La semilla
int main() {
    
    unsigned int semilla;
    
    printf( "Introduzca el dato semilla:" );
    scanf( "%u" , &semilla );
    
    srand(semilla);
    
    for( int i = 1; i <= 10; i++ ){
        
        printf( "%10d", 1 + (rand() % 6) );
        
        if( i % 5 ==0 ){
            
            printf("\n");
        }
    }
    return 0;
}

