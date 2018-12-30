#include <stdio.h>

int main(){
	
	int vector[10]= {100,32,5,54,2,4,4,54,32,10};
	int i;
	int mayor=0;
  
	for ( i = 0; i < 10; i++ ){
	
    	if ( vector[i]> mayor ){
    		mayor=vector[i];
    	}
	}
	
	printf("El mayor es %d\n", mayor);
	
}

