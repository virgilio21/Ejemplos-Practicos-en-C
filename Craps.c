/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Craps.c
 * Author: virgiliopadronbatun
 *
 * Created on 7 de julio de 2018, 15:28
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Prototipo
int tirarDados( void );

//Enumeracion
enum Estado { CONTINUA, GANA, PIERDE } ;

int main() {
    
    int misPuntos;
    enum Estado miEstado;
    srand( time( NULL ) );
    
    int suma = tirarDados();
    
    switch( suma ){
        
        //El jugador gana
        case 7:
        case 11:
        miEstado = GANA;
        break;
        
        //El jugador pierde
        
        case 2:
        case 3:
        case 12:
        miEstado = PIERDE;
        break;
        
        //El juego continua
        default:
        misPuntos = suma;
        printf( "Mi punto para ganar es: %d\n", misPuntos );
        miEstado = CONTINUA;
        break;
         
    }
    
    while( miEstado == CONTINUA ){
        
        suma = tirarDados();
        
        if( misPuntos == suma ){
            miEstado = GANA;
        }
        
        else if( misPuntos == 7 ){
            miEstado = PIERDE;
        }
    }
    
    if( miEstado == GANA ){
        
        printf("El jugador Gana\n");
    }
    
    else{
        printf("El jugador Pierde\n");
    }
    
    
    return 0;
}

int tirarDados(){
    
    
    int primerLanzamiento;
    int segundoLanzamiento;
    int misPuntos;
    
    
    primerLanzamiento = 1 + (rand() % 6);
    segundoLanzamiento = 1 + (rand() % 6);
   
    misPuntos = primerLanzamiento + segundoLanzamiento;
    
    printf( "El jugador tiro %d + %d = %d\n", primerLanzamiento, segundoLanzamiento, misPuntos );
    
    return misPuntos;
    
}
