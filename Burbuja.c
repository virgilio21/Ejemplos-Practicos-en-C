#include <stdio.h>
void ordenarBurbuja( int vectorEntrada[], int n );
void cambiar( int *n1, int *n2 );
void imprimirArreglo( int vectorEntrada[], int tamanio );

int main()
{
    int vectorEntrada[] = {2,5,19,-1, -500,45,2,0,1,6,2,9,25,9,8};
    //Para saber el numero de elementos de un vector
    //Necesitamos dividir el tamaño del vector,osea el numero
    //de bytes que ocupa entre el tamaño del primer elemento
    int n = sizeof( vectorEntrada ) / sizeof( vectorEntrada[0] );
    ordenarBurbuja( vectorEntrada, n );
    imprimirArreglo( vectorEntrada, n );

    return 0;
}


//Intercambio de posiciones del arreglo
void cambiar( int *n1, int *n2 ){
    int temporal = *n1;
    *n1 = *n2;
    *n2 = temporal;
}

//Vector de entrada y tamaño del arreglo
void ordenarBurbuja( int vectorEntrada[], int n ){

    //Un for para el numero de vecez que se recorrera el mismo arreglo
    // el tamaño total del arreglo menos 1
    //Ejemplo: tamaño 8, numero de vecez que se
    //recorrera sera 7.
    int i , j;
    for( i = 0; i < n - 1; i++ ){
        // la condicion j < n-i-1, ya que el final
        //del arreglo ya esta ordenado, en cada pasada
        //Ejemplo: [50,26,7,9,15,27],
        //despues de la primera pasada
        //tenemos 26,7,9,15,27,50,
        //ya no es necesario evaluar la ultima posicion
        //y en la seguiente pasada ya no es necesario evaluar la penultima posicio... asi sucesivamente
        //http://puntocomnoesunlenguaje.blogspot.mx/2012/07/metodo-de-ordenacion-burbuja.html
        for( j = 0; j < n - i - 1; j++ ){
            
            if( vectorEntrada[j] > vectorEntrada[j + 1]){
                cambiar(&vectorEntrada[j], &vectorEntrada[j + 1]);
            }
        }
    }
}

void imprimirArreglo( int vectorEntrada[], int tamanio ){
    int i;
    for( i = 0; i < tamanio; i++ ){
        printf( "%d", vectorEntrada[i] );
        printf("-");
    }
    printf("Ordenamiento finalizado\n");
}
