
#include "JefeProyecto.h"

/**
 * JefeProyecto implementation
 */


/**
 * @param Nombre
 * @param Peso
 * @param Altura
 * @param Empresa
 * @param Sueldo
 */
JefeProyecto::JefeProyecto(string Nombre, float Peso, float Altura, string Empresa, float Sueldo):Empleado(Nombre,Peso,Altura,Empresa,Sueldo) {

}

void JefeProyecto::addEmpleado(Empleado *emp){
	this->Programadores.push_back(emp);
}

/**
 * @return string
 */
string JefeProyecto::to_string() {
	string resul = "";
	
	for(Empleado *e : this->Programadores){
		resul += e->to_string()+"\n";
	}
	
	return Empleado::to_string() + "\n" + resul;
}

JefeProyecto::~JefeProyecto(){
	for(Empleado *e : this->Programadores){
		delete e;
		e = nullptr;
	}
}
