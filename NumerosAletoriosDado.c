/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   NumerosAletoriosDado.c
 * Author: virgiliopadronbatun
 *
 * Created on 6 de julio de 2018, 20:48
 */

#include <stdio.h>
#include <stdlib.h>


//Simulacion de una dado lanzado 20 vecez
// la biblioteca stdlib tiene la funcion rand
int main() {

    
    for( int i = 1 ; i <= 20; i++ ){
        
        // hacer rand() % 6 y luego truncar el resultado, nos da numeros de 0 a 5, por eso sumamos uno.
        printf( "%10d", 1 + (rand() % 6) );
        
        if( i % 5 == 0 ){
            printf( "\n" );
        }
    }
    
    return 0;
}

