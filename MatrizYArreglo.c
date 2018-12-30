
/* Figura 6.22: fig06_22.c
 Ejemplo de un arreglo de doble subíndice */
 #include <stdio.h>
 #define ESTUDIANTES 3
 #define EXAMENES 4


 int minimo( const int calificaciones[][ EXAMENES ], int alumnos, int examenes );
 int maximo( const int calificaciones[][ EXAMENES ], int alumnos, int examenes );
 double promedio( const int estableceCalif[], int examenes );
 void despliegaArreglo( const int calificaciones[][ EXAMENES ], int alumnos, int examenes );

 
 int main() {
    int estudiante; 

    
    const int calificacionesEstudiantes[ ESTUDIANTES ][ EXAMENES ] = { 
        { 77, 68, 86, 73 },
        { 96, 87, 89, 78 },
        { 70, 90, 86, 81 } 
    
    };

  
    printf( "El arreglo es:\n" );
    despliegaArreglo( calificacionesEstudiantes, ESTUDIANTES, EXAMENES );

    
    printf( "\n\nCalificacion mas baja: %d\nCalificacion mas alta: %d\n",
    minimo( calificacionesEstudiantes, ESTUDIANTES, EXAMENES ),
    maximo( calificacionesEstudiantes, ESTUDIANTES, EXAMENES ) );

    
    
    
    
    for ( estudiante = 0; estudiante < ESTUDIANTES; estudiante++ ) {
    //***************** IMPORTANTE *********************
    //IMPORTANTE cuando utilizamos matricez, al pasar la matriz solo con el primer subindice, como si pasaramos,
    //un elemento de un arreglo que lo normal es que se pase por valor, pero cuando se trata de matricez,
    //Lo que pasa es que se pasa la primera fila del arreglo, es como si pasaramos por valor, un arreglo con los valores
    //de la primera fila de la matriz
    //Cuando la variable estudiantes es igual a cero se pasa un arreglo con los valore[77, 68, 86, 73];
    //cuando estudiantes es igual a 1 valores[96, 87, 89, 78]; y cuando es igual a 2 valores[70, 90, 86, 81];
    //De funcion promedio apromecha esta caracteristica para calcular el promedio de cada estudiante
        printf( "El promedio de calificacion del estudiante %d es %.2f\n",
        estudiante, promedio( calificacionesEstudiantes[ estudiante ], EXAMENES ) );
    }
    
    
    
    
    
    
    
 return 0;
 
 }
 
 
 
 int minimo( const int calificaciones[][ EXAMENES ], int alumnos, int examenes ) {
     int i; 
     int j; 
     int califBaja = 100; 
     
    
    for ( i = 0; i < alumnos; i++ ) {
        
   
        for ( j = 0; j < examenes; j++ ) {
            
            if ( calificaciones[ i ][ j ] < califBaja ) { 
                califBaja = calificaciones[ i ][ j ];
    
    
            } 
        } 
    } 
return califBaja; 
 }
 
 
 int maximo( const int calificaciones[][ EXAMENES ], int alumnos, int examenes ) {
     int i; 
     int j; 
     int califAlta = 0; 

    for ( i = 0; i < alumnos; i++ ) {
        
    
        for ( j = 0; j < examenes; j++ ) {
            
            if ( calificaciones[ i ][ j ] > califAlta ) { 
                califAlta = calificaciones[ i ][ j ];
    
    
            } 
        } 
    } 
return califAlta; 

 }
 
 
 
double promedio( const int conjuntoDeCalificaciones[], int examenes ) {
    
    int i; 
    int total = 0; 
     
    for ( i = 0; i < examenes; i++ ) {
        
        printf("%d ", conjuntoDeCalificaciones[i] );
        
        total += conjuntoDeCalificaciones[ i ]; 
    
    } 
    printf("\n");
    
    return ( double ) total / examenes; 
    
}

void despliegaArreglo( const int calificaciones[][ EXAMENES ], int alumnos, int examenes ) {
    
    int i; 
    int j; 

    
    printf( " [0] [1] [2] [3]" );

    
    for ( i = 0; i < alumnos; i++ ) {

        
        printf( "\ncalificacionesEstudiantes[%d] ", i );

        
        for ( j = 0; j < examenes; j++ ) {
            
            printf( "%-5d", calificaciones[ i ][ j ] );
        
        } 

    } 

 } 