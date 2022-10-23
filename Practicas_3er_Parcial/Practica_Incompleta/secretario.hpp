#include<iostream>
#include<string>
#include"empleado.hpp"

using namespace std;

class secretario:public empleado {
	private:
		string nDespacho;
		string fax;	
	public: 
		secretario(string nombre,string apellido,string DNI, string direccion,int ant,int telefono,float salario,string DNIS,string nDespacho, string fax) : empleado(nombre,apellido,DNI,direccion,ant,telefono,salario,DNIS){
			this->nDespacho = nDespacho;
			this->fax = fax;
		}
		
		void Imprimir(){
			cout<<"\n\nNombre: "<<this->nombre;
			cout<<"\n\nApellido: "<<this->apellido;
			cout<<"\n\nDNI: "<<this->DNI;
			cout<<"\n\nDireccion: "<<this->direccion;
			cout<<"\n\nTelefono: "<<this->telefono;
			cout<<"\n\nSalario: "<<this->salario;
			cout<<"\n\nSupervisor(DNI): "<<this->supervisor->DNI;
			cout<<"\n\nNumero de Despacho: "<<this->nDespacho;
			cout<<"\n\nFax: "<<this->fax;
		}
		
		void IncrementoAnt(){
			this->ant++;
			float incremento = this->salario/0.05;
			
			this->salario+=(incremento*this->ant);
		}
};
