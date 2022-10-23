/*
	Vendedor. Tiene coche de la empresa (identificado por la matricula, marca y 
 modelo), teléfono móvil, área de venta, lista de clientes y porcentaje que se lleva de las 
 ventas en concepto de comisiones. Incrementa su salario un 10% anual. Tendrá, al menos, 
 las siguientes funciones miembro: • Constructores (debe rellenar la información personal y 
 los datos principales) • Imprimir (debe imprimir sus datos personales y su puesto en la empresa)
 . • Dar de alta un nuevo cliente. • Dar de baja un cliente. • Cambiar de coche. 
*/

#include<iostream>
#include<string>
#include"empleado.hpp"
#include"automovil.hpp"

using namespace std;

class vendedor : public empleado{
	private:
		automovil* a;
		string areaventa;
		float porcentaje; 
		
	public: 
	
	vendedor(string nombre,string apellido,string DNI, string direccion,int ant,int telefono,float salario,string DNIS,string areaventa, float porcentaje) : empleado(nombre,apellido,DNI,direccion,ant,telefono,salario,DNIS){
		this->areaventa = areaventa;
		this->porcentaje = porcentaje;
	}  
	
	void IncrementoAnt(){
		this->ant++;
			
		this->salario += (this->salario/1000); 
	}	
};
