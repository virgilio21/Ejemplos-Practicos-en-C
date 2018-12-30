/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ConvierteAMayusculas.c
 * Author: virgiliopadronbatun
 *
 * Created on 24 de julio de 2018, 17:43
 */

#include <stdio.h>
#include <stdlib.h>

// Figura 7.10: fig07_10.c

#include <ctype.h>

void convierteAMayusculas( char *ptrS ); 

int main() {
    
    char cadena[] = "caracteres y $32.98"; /* inicializa char arreglo */
    printf( "La cadena antes de la conversion es : %s", cadena ); 
	convierteAMayusculas( cadena );
    

   
    printf( "\nLa cadena despues de la conversion es: %s\n", cadena );
    return 0; /* indica terminacion exitosa */
    
}


//mediante un apuntador no constante a un dato no constante */
/* convierte una cadena a letras mayusculas */ 
void convierteAmayusculas( char *ptrS ) {
        
    while ( *ptrS != '\0' ) { /* el carácter actual no es el caracter nulo */
            
        if ( islower( *ptrS ) ) { /* si el caracter es minuscula, */ 
            *ptrS = toupper( *ptrS ); /* Lo convierte a mayuscula */
        } 
            
            ++ptrS; /* mueve ptrS al siguiente caracter */ 
    }  
        
} 


//Impresion de una cadena caracter por caracter mediante
//un apuntador no constante a un dato constante */
//Puedo modificar la direccion de memoria a la cual apunta el apuntador.
//Siempre y cuando sea una variable const char, pero no puedo modificar los valores ya que es const 
void imprimeCaracteres( const char *ptrS ) {
    
    for( ; *ptrS != '\0'; ptrS++){
        
        printf( "%c", *ptrS );
    }
    
    
}

//Un apuntador constante a una variable no constante, osea podemos modificar el valor de la variable pero no del apuntador
//El apuntador debe inicializarse cuando se declara.
 /* ptr es un apuntador constante a un entero que se puede modificar a traves de ptr, 
  * pero ptr siempre apunta a la misma ubicacion de memoria */
// int *const ptr = &x;

// *ptr = 7; /* permitido: *ptr no es const */
// ptr = &y; /* error: ptr es const; no se puede asignar una nueva direccion */



/* ptr es un apuntador constante a un entero constante. ptr siempre apunta a la misma ubicacion; 
 * el entero en esa ubicacion no se puede modificar */
// const int *const ptr = &x;
// *ptr = 7; /* error: *ptr es const; no se puede asignar un nuevo valor */ 
// ptr = &y; /* error: ptr es const; no se puede asignar una nueva direccion */
 
