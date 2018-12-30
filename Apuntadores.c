/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Apuntadores.c
 * Author: virgiliopadronbatun
 *
 * Created on 24 de julio de 2018, 14:35
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
/* Figura 7.4: fig07_04.c
Uso de los operadores & y * */

int main() {
    
    int a; /* a es un entero */
    int *ptrA; /* ptrA es un apuntador a un entero */ /* ptrA toma la direccion de a */
    
    a = 7;
    ptrA = &a;
    
    



    printf( "La direccion de a es %p" " \nEl valor de ptrA es %p", &a, ptrA );
    printf( "\n\nEl valor de a es %d" "\nEl valor de *ptrA es %d", a, *ptrA );
    printf( "\n\nMuestra de que * y & son complementos " "uno del otro\n&*ptrA = %p""\n*&ptrA = %p\n", &*ptrA, *&ptrA ); 
    
    return 0; 

}
