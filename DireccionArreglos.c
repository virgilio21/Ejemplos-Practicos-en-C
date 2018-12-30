/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   DireccionArreglos.c
 * Author: virgiliopadronbatun
 *
 * Created on 15 de julio de 2018, 16:39
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */

/* Figura 6.12: fig06_12.c
El nombre de un arreglo es lo mismo que &arreglo[ 0 ] */

/* la función main comienza la ejecución del programa */ 
int main() {

    //IMPORTANTE: El nombre de un arreglo contiene la direccion de inicio de memoria en donde se aloja
    //Todos los arreglos se pasan por referencia automaticamente a los metodos
    // "&" Sirve para devolver la direccion de memoria en donde se encuentra la variable o arreglo.
    //Los elementos individuales de una arreglo se les conoce como escaleras y se pasan por valor, pero pueden
    //Pasarse por referencia
    char arreglo[ 5 ]; /* define un arreglo de 5 elementos */
    
    printf( "  arreglo = %p\n&arreglo[0] = %p\n"  "&arreglo = %p\n",
    arreglo, &arreglo[ 0 ], &arreglo );
 
return 0; 

}
