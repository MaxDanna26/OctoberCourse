#include "Persona.h"

Persona::Persona()
{
	
}

Persona::Persona(std::string nombre,float edad,float altura){
	this->nombre = nombre;
	this->peso = peso;
	this->altura = altura;
}

std::string Persona::to_string(){
	return this->nombre + " " + std::to_string(this->peso) + " " + std::to_string(this->altura);
}


