#include <iostream>
#include "Empleado.h"
#include "Administrativo.h"
#include "JefeProyecto.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	Empleado *prog1 = new Empleado("Programador1",70.0,1.77,"CAS",1000.0);
	Empleado *prog2 = new Empleado("Programador2",70.0,1.77,"CAS",1000.0);
	Empleado *prog3 = new Empleado("Programador3",70.0,1.77,"CAS",1000.0);
	
	Empleado jefe("Tomas", 90.0,1.77,"CAS", 2300.0);
	Empleado *adm = new Administrativo("Jose",80.0,1.8,"CAS",1500.0,jefe);
	
	JefeProyecto jp("Jefe de Proyecto",99.0,1.9,"CAS",4500.0);
	
	jp.addEmpleado(prog1);
	jp.addEmpleado(prog2);
	jp.addEmpleado(prog3);
	jp.addEmpleado(adm);
	
	cout << jp.to_string() << endl;
	
	return 0;
}
