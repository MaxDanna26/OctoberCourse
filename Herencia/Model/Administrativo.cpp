
#include "Administrativo.h"
#include <string>
using namespace std;
/**
 * Administrativo implementation
 */


/**
 * @param Nombre
 * @param Peso
 * @param Altura
 * @param Empresa
 * @param Sueldo
 */
Administrativo::Administrativo(string Nombre, float Peso, float Altura, string Empresa, float Sueldo,Empleado Jefe):Empleado(Nombre,Peso,Altura,Empresa,Sueldo),Jefe(Jefe) {

}

/**
 * @return string
 */
string Administrativo::to_string() {
    return Empleado::to_string() + " " + "Jefe" + this->Jefe.to_string();
}
