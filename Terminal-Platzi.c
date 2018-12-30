#include <stdio.h>
#include <string.h>

int main(){

    char nombreUsuario[25];
    int decision;
    int repetir;
    int bucle = 1;

    do{
        
        printf( "Bienvenido a platzi terminal\n" );
        printf( "Ingresa tu nombre de usuario\n" );
        scanf( "%s", nombreUsuario );

        if( strcmp( nombreUsuario, "virgo" ) == 0 ){

            while( bucle == 1 ){
                printf( "Bienvenido virgo, cuenta gratuita\n" );
                printf( "1. Para el blog\n" );
                printf( "2. Para ver los cursos\n" );
                printf( "Cualquier otro para salir\n" );
                scanf( "%d", &decision );
                if( decision == 1 ){
                    printf( "BLOG.......");
                }
                else if( decision == 2 ){
                    printf( "Curso de C#, Python, Java y C\n" );
                }
                else{
                    printf( "Adios!\n" );
                    bucle = 2;
                }
            }
        }
        else if( strcmp( nombreUsuario, "juan" ) == 0 ){

            while( bucle == 1 ){
                printf( "Bienvenido juan, cuenta standar\n" );
                printf( "1. Para el blog\n" );
                printf( "2. Para ver los cursos\n" );
                printf( "3. Para ver conferencias\n" );
                printf( "Cualquier otro para salir" );
                scanf( "%d", &decision );
                if( decision == 1 ){
                    printf( "BLOG.......\n");
                }
                else if( decision == 2 ){
                    printf( "Curso de C#, Python, Java y C\n" );
                }
                else if( decision == 3 ){
                    printf( "Conferencias\n" );
                }
                else{
                    printf("Adios!");
                    bucle = 2;
                }
            }
        }
        else if( strcmp( nombreUsuario, "jose" ) == 0 ){
            
            while( bucle == 1 ){
                printf( "Bienvenido jose, cuenta standar\n" );
                printf( "1. Para el blog\n" );
                printf( "2. Para ver los cursos\n" );
                printf( "3. Para ver conferencias\n" );
                printf( "4. Para asesorias\n" );
                scanf( "%d", &decision );
                if( decision == 1 ){
                    printf( "BLOG......\n");
                }
                else if( decision == 2 ){
                    printf( "Curso de C#, Python, Java y C\n" );
                }
                else if( decision == 3 ){
                    printf( "Conferencias\n" );
                }
                else if( decision == 4 ){
                    printf("Asesorias\n");
                }
                else{
                    printf("Adios!");
                    bucle = 2;
                }
            }
        }
        printf( "Presione 1 para Continuar\n" );
        printf( "Cualquier otro numero para salir\n" );
        scanf( "%d", &repetir );
    }while( repetir == 1 );
    
}