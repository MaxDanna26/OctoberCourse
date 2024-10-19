// Funciones

#include <stdio.h>

// Declaracion de prototipos
double sumar(double,double);


int main(){
	double a = 100, b = 93;
	double resul;
	
	resul = sumar(a,b);
	printf("Resultado: %g",resul);
	return 0;
}

// Implementacion de la funcion
double sumar(double n1, double n2){
	return n1+n2;
}
