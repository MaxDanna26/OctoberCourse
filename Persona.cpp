#include "Persona.h"

int Persona::numPersonas = 0;

Persona::Persona(std::string nombre,float edad,float altura){
	this->nombre = nombre;
	this->peso = peso;
	this->altura = altura;
	
	Persona::numPersonas++;
}

Persona::Persona(const Persona &p){
	this->nombre = p.nombre;
	this->peso = peso;
	this->altura= altura;
	
	// Contamos cuantas personas
	Persona::numPersonas++;
}

int Persona::getNumPersonas(){
	return Persona::numPersonas;
}

std::string Persona::to_string(){
	return this->nombre + " " + std::to_string(this->peso) + " " + std::to_string(this->altura);
}

void Persona::engordar(float kilos){
	this->peso += kilos;
}
