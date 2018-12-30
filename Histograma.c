/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Histograma.c
 * Author: virgiliopadronbatun
 *
 * Created on 14 de julio de 2018, 18:11
 */

#include <stdio.h>
#include <stdlib.h>
#define TAMANIO 10

int main() {

    int n[ TAMANIO ] = { 19, 3, 15, 7, 11, 9, 13, 5, 17, 1 };
    
    printf("%13s %13s %17s\n", "Elemento", "Valor", "Histograma");
    
    for( int i = 0; i < TAMANIO; i++ ){
        
        printf( "%13d %13d        ", i, n[i] );
        
        for( int j = 1; j <= n[i]; j++){
            
            printf("%c", '*');
        }
        
        printf("\n");
    }
    
    return (0);
}

