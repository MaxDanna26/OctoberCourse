
#include "Empleado.h"

/**
 * Empleado implementation
 */


/**
 * @param Nombre
 * @param Peso
 * @param Altura
 * @param Empresa
 * @param Sueldo
 */
Empleado::Empleado(string Nombre, float Peso, float Altura, string Empresa, float Sueldo):Persona(Nombre,Peso,Altura),Empresa(Empresa),Sueldo(Sueldo) {

}

/**
 * @return string
 */
string Empleado::to_string() {
    return Persona::to_string() + " " + this->Empresa + " " + std::to_string(this->Sueldo) ;
}
