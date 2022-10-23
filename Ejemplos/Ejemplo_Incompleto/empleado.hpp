/*
	Empleado. Clase básica que describe a un empleado.
  Incluye sus datos personales (nombre, apellidos, DNI, dirección) y algunos datos tales 
  como los años de antigüedad, teléfono de contacto y su salario. Incluye también información
   de quién es el empleado que lo supervisa (Empleado *). Tendrá, al menos, las siguientes f
   unciones miembro: • Constructores para definir correctamente un empleado, a partir de su
	nombre, apellidos, DNI, dirección, teléfono y salario. • Imprimir (A través de los operadores
	 de E/S redefinidos) • Cambiar supervisor • Incrementar salario ·
*/

#ifdef EMPLEADO
#endif
#include<iostream>
#include<string>

using namespace std;

class empleado{
	public:
		string nombre;
		string apellido;
		string DNI;
		string direccion;
		int ant;
		int telefono;
		float salario;
		empleado* supervisor;
	public:
		empleado(string nombre,string apellido,string DNI, string direccion,int ant,int telefono,float salario,string DNIS){
			this->nombre = nombre;
			this->apellido = apellido;
			this->DNI = DNI;
			this->direccion = direccion;
			this->ant = ant;
			this->telefono = telefono;
			this->salario = salario;
			this->supervisor = new empleado(DNIS);
		}
		
		empleado(string DNI){
			this->DNI = DNI;
		}
		
		void setSupervisor(string DNIS){
			this->supervisor->DNI = DNIS;
		} 
		
		void setDNI(string DNI){
			this->DNI = DNI;
		}
		
		void CambioSupervisor(string DNI){
			this->supervisor->setDNI(DNI);
		}
		
		void setSalario(float salario){
			this->salario = salario;
		}
		
		virtual void Imprimir(){
			/*cout<<"\n\nNombre: "<<this->nombre;
			cout<<"\n\nApellido: "<<this->apellido;
			cout<<"\n\nDNI: "<<this->DNI;
			cout<<"\n\nDireccion: "<<this->direccion;
			cout<<"\n\nTelefono: "<<this->telefono;
			cout<<"\n\nSalario: "<<this->salario;
			cout<<"\n\nSupervisor(DNI): "<<this->supervisor->DNI;
			cout<<"\n\n";*/
		}
};








