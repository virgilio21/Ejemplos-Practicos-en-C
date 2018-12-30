/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: virgiliopadronbatun
 *
 * Created on 5 de julio de 2018, 20:23
 */

#include <stdio.h>
#include <stdlib.h>

#define PI 3.1415

int maximo( int x, int y, int z );

//Calcula el maximo de tres numeros
int main() {
    
    int numero1;
    int numero2;
    int numero3;
    
    printf("Ingresa tres numeros enteros, separados por espacios:");
    scanf( "%d%d%d", &numero1, &numero2, &numero3 );
    
    printf("El maximo es %d", maximo( numero1, numero2, numero3 ));
     
    return 0;
}


int maximo( int x, int y, int z ){
    
    int maximo = x;
    
    if( y > maximo ){
        maximo = y;
    }
    
    if( z > maximo ){
        maximo = z;
    }
    
    return maximo;
    
}
