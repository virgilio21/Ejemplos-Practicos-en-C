/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Alcance.c
 * Author: virgiliopadronbatun
 *
 * Created on 7 de julio de 2018, 21:23
 */

#include <stdio.h>
#include <stdlib.h>


//Ejemplo de alcance

void usoLocal( void ); /* prototipo de función */
void usoStaticLocal( void ); /* prototipo de función */
void usoGlobal( void ); /* prototipo de función */

int x = 1; /* variable global */ 
 /* la función main comienza la ejecución del programa */
int main() { 
    
    int x = 5; /* variable local en main */



    printf( "la x local en el alcance externo de main es %d\n", x );
    
    
    //De hecho la etiqueta hola no esta en el ejemplo original, en la original solo hay un bloque de codigo {}.
    hola:{ /* comienza el nuevo alcance */
    int  x = 7; /* variable local con nuevo alcance */
    printf( "la x local en el alcance interno de main es %d\n", x ); 
    } /* fin de nuevo alcance */
    
    
    printf( "la x local en el alcance externo de main es %d\n", x );
    
    usoLocal();
    usoStaticLocal();
    usoGlobal();
    usoLocal();
    usoStaticLocal();
    usoGlobal();
    /* usoLocal contiene una x local */
    /* usoStaticLocal contiene una x local estática */ /* usoGlobal utiliza una x global */
    /* usoLocal reinicializa la x local automática */ /* static local x retiene su valor previo */
    /* x global también retiene su valor */
    printf( "\nx local en main es %d\n", x );
    return 0; /* indica terminación exitosa */ 
    
}/*fin de main*/

/* usoLocal reinicializa a la variable local x durante cada llamada */
void usoLocal( void ) {
    int x = 25; /* se inicializa cada vez que se llama usoLocal */
    printf( "\nla x local en usoLocal es %d despues de entrar a usoLocal\n", x ); 
    x++;
    printf( "la x local en usoLocal es %d antes de salir de usoLocal\n", x ); 
} /* fin de la función usoLocal */


/* usoStaticLocal inicializa la variable static local x sólo la primera vez que se invoca a la función; el valor de x se guarda entre las llamadas a esta función */
void usoStaticLocal( void ) {
    static int x = 50;
    printf( "\n la x local estatica es %d al entrar a usoStaticLocal\n", x ); 
    x++;
    printf( "la x local estatica es %d al salir de usoStaticLocal\n", x );
} /* fin de la función usoStaticLocal */


/* la función usoGlobal modifica la variable global x durante cada llamada */ 
void usoGlobal( void ) {
    printf( "\nla x global es %d al entrar a usoGlobal\n", x );
    x *= 10;
    printf( "la x global es %d al salir de usoGlobal\n", x );
} /* fin de la función usoGlobal */
