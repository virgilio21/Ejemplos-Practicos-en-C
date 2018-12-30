/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   AsistenciaMultiplicacion.c
 * Author: virgiliopadronbatun
 *
 * Created on 18 de julio de 2018, 10:54
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generaMultiplicacion( void );
void correcto( void );
void incorrecto( void );


int main() {
    
    srand(time(NULL));
    
    int respuestaUsuario;
    
    printf("\nBienvenido al sistema asistido por computadora, para practicar la multiplicacion.\n");
    printf("Presiona 0 para salir.\n\n");
    
    do{
        
    int respuesta = generaMultiplicacion();
    
    scanf( "%d", &respuestaUsuario );
    
    if( respuesta == respuestaUsuario ){
        correcto();
    }
    else{
        
        while( respuesta != respuestaUsuario && respuestaUsuario != 0 ){
            incorrecto();
            
            scanf("%d", &respuestaUsuario );    
        }
        correcto();
    }
    
    
    
    }while( respuestaUsuario != 0);
        
        
        
        
    return 0;
}


int generaMultiplicacion(){
    
    int numeroUno = 1 + rand() % 10;
    int numeroDos = 1 + rand() % 10;
    
    int resultado = numeroUno * numeroDos;
    
    printf( "¿ Cuanto es %d por %d ? : ", numeroUno, numeroDos );
    
    return resultado;
    
}

void correcto(){
       
    int mensaje = 1 + rand() % 5;
    
    switch(mensaje){
        
        case 1: 
            printf("¡Muy bien!\n");
            break;
        
        case 2:
            printf("¡Excelente!\n");
            break;
            
        case 3:
            printf("¡Buen trabajo!\n");
            break;
            
        case 4: 
            printf("¡Mantén ese buen rendimiento!\n");
            break;
         
        case 5: 
            printf("¡Eres una maquina, Perfecto!\n");
            break;
            
            deafaul:
            break;
    }
}

void incorrecto(){
    
    int mensaje = 1 + rand() % 5;
    
    switch(mensaje){
        
        case 1: 
            printf("No. Por favor intenta de nuevo.\n");
            break;
        
        case 2:
            printf("Incorrecto. Trata una vez más.\n");
            break;
            
        case 3:
            printf("No te rindas!\n");
            break;
            
        case 4: 
            printf("No. Sigue intentando.\n");
            break;
         
        case 5: 
            printf("Vamos que esto no se trata de adivinar\n");
            break;
            
            deafaul:
            break;
    }

}