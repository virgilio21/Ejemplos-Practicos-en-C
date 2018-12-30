#include <stdio.h>

//Prototipos
int busqueda(int vectorEntrada[], int longitud, int x);

int main(){
    
    int indice;
    int vector[] = { 4,6,7,98,1,35,3,82,73 };
    int longitud = sizeof(vector)/sizeof(vector[0]);

    indice = busqueda(vector, longitud, 3);
    printf( "Posicion %d\n", indice );

    

}

int busqueda(int vectorEntrada[], int longitud, int x){

    

    for(int i = 0; i < longitud; i++){
        if( x == vectorEntrada[i])
            return i; 

            
    }
    return -1;
}