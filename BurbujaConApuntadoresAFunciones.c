/* Figura 7.26: fig07_26.c
 Programa de ordenamiento multiprop�sito que utiliza apuntadores a funciones */
#include <stdio.h>
#define TAMANIO 10

/* prototipos */
void burbuja( int trabajo[], const int tamanio, int (*compara)( int a, int b ) );
int ascendente( int a, int b );
int descendente( int a, int b );

int main() {
	
	int orden; /* 1 para el orden ascendente o 2 para el orden descendente */
	int contador; /* contador */
	
	/* inicializa el arreglo a */
	int a[ TAMANIO ] = { 2, 6, 4, 8, 10, 12, 89, 68, 45, 37 };
	
	printf( "Introduzca 1 para ordenar en forma ascendente,\n"
	"Introduzca 2 para ordenar en forma descendente: " );
	scanf( "%d", &orden );
	
	printf( "\nElementos de datos en el orden original\n" );
	
	/* muestra el arreglo original */
	for ( contador = 0; contador < TAMANIO; contador++ ) {
	printf( "%5d", a[ contador ] );
	} /* fin de for */
	
	 /* clasifica el arreglo en orden ascendente; pasa la funci�n ascendente como un
	 argumento para especificar el orden ascendente */
	if ( orden == 1 ) {
	burbuja( a, TAMANIO, ascendente );
	printf( "\nElementos de datos en orden ascendente\n" );
	} /* fin de if */
	else { /* pasa la funci�n descendente */
	burbuja( a, TAMANIO, descendente );
	printf( "\nElementos de datos en orden descendente\n" );
	} /* fin de else */
	
	/* muestra el arreglo ordenado */
	for ( contador = 0; contador < TAMANIO; contador++ ) {
	printf( "%5d", a[ contador ] );
	} /* fin de for */
	
	printf( "\n" );
	
	return 0; /* indica terminaci�n exitosa */
	
} /* fin de main */


/* ordenamiento burbuja multiprop�sito; el par�metro compara es un apuntador a
053 la funci�n de comparaci�n que determina el tipo de ordenamiento */
void burbuja( int trabajo[], const int tamanio, int (*compara)( int a, int b ) ) {
	
	int pasada; /* contador de pasadas */
	int cuenta; /* contador de comparaciones */
	
	void intercambia( int *ptrElemento1, int *ptrElemento2 ); /* prototipo */
	
	 /* ciclo para controlar las pasadas */
	for ( pasada = 1; pasada < tamanio; pasada++ ) {
	
		/* ciclo para controlar el n�mero de comparaciones por pasada */
		for ( cuenta = 0; cuenta < tamanio - 1; cuenta++ ) {
		
		/* si los elementos adyacentes no se encuentran en orden,
		los intercambia */
			if ( (*compara)( trabajo[ cuenta ], trabajo[ cuenta + 1 ] ) ) {
			intercambia( &trabajo[ cuenta ], &trabajo[ cuenta + 1 ] );
			} /* fin de if */
		
		} /* fin de for */
	
	} /* fin de for */

} /* fin de la funci�n burbuja */

 /* intercambia los valores en las ubicaciones de memoria a las que apunta
079 ptrElemento1 y ptrElemento2 */
void intercambia( int *ptrElemento1, int *ptrElemento2 ) {

	int almacena; /* variable de almacenamiento temporal */
	
	almacena = *ptrElemento1;
	*ptrElemento1 = *ptrElemento2;
	*ptrElemento2 = almacena;
	
} /* fin de la funci�n intercambia */


/* determina si los elementos est�n en desorden para un
090 ordenamiento ascendente */
int ascendente( int a, int b ) {
	
	return b < a; /* intercambia si b es menor que a */

} /* fin de la funci�n ascendente */


 /* determina si los elementos est�n en desorden para un
ordenamiento descendente */
int descendente( int a, int b ) {
	
	return b > a; /* intercambia si b es mayor que a */

} /* fin de la funci�n descendente */
