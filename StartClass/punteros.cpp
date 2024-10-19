// Punteros 

#include <stdio.h>

int main(){
	int numero = 100;
	int *ptr =  NULL;
	
	// Extraer la direccion de una variable
	
	// el nombre del array es donde esta guardado y si le agrego un asterisco delante es el valor de ese sitio
	ptr = &numero;
	*ptr = *ptr *10;
	printf("ptr = %p, *ptr = %d, numero = %d\n", ptr, *ptr, numero);
	
	
}
