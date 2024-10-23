
#include "Persona.h"

/**
 * Persona implementation
 */


/**
 * @param Nombre
 * @param Peso
 * @param Altura
 */
 Persona::Persona(string Nombre, float Peso, float Altura) {
 	this->Nombre = Nombre;
 	this->Altura = Altura;
 	this->Peso = Peso;
}

/**
 * @return string
 */
 
string Persona::to_string() {
    return this->Nombre + " " + std::to_string(this->Peso) + std::to_string(this->Altura);
}
