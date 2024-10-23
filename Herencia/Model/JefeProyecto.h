#ifndef _JEFEPROYECTO_H
#define _JEFEPROYECTO_H

#include "Empleado.h"
#include <string>
#include <vector>
using namespace std;


class JefeProyecto: public Empleado {
public: 
    
/**
 * @param Nombre
 * @param Peso
 * @param Altura
 * @param Empresa
 * @param Sueldo
 */
JefeProyecto(string Nombre, float Peso, float Altura, string Empresa, float Sueldo);
    
string to_string();
void addEmpleado(Empleado *);
~JefeProyecto();


protected: 
    vector<Empleado *> Programadores;
};

#endif //_JEFEPROYECTO_H
