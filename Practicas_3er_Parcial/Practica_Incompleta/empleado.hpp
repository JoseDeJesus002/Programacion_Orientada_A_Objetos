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
			cout<<"\n\nNombre: "<<this->nombre;
			cout<<"\n\nApellido: "<<this->apellido;
			cout<<"\n\nDNI: "<<this->DNI;
			cout<<"\n\nDireccion: "<<this->direccion;
			cout<<"\n\nTelefono: "<<this->telefono;
			cout<<"\n\nSalario: "<<this->salario;
			cout<<"\n\nSupervisor(DNI): "<<this->supervisor->DNI;
			cout<<"\n\n";
		}
};

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
			float incremento = this->salario/500;
			
			this->salario+=(incremento*this->ant);
		}
};

class automovil{
	public:
		string matricula; //identificado por la matricula, marca y modelo
		string marca;
		string modelo;
	public:
		automovil(string matricula,string marca,string modelo){
			this->matricula = matricula;
			this->marca = marca;
			this->modelo = modelo;
		}
	void imprimir(){
			cout<<"\n\nNombre: "<<this->matricula;
			cout<<"\n\nApellido: "<<this->marca;
			cout<<"\n\nDNI: "<<this->modelo;
	}
};

class vendedor : public empleado, public automovil{
	private:
		string areaventa;
		float porcentaje;
	public: 
	vendedor(string nombre,string apellido,string DNI, string direccion,int ant,int telefono,float salario,string DNIS,string matricula,string marca,string modelo,string areaventa, float porcentaje) : empleado(nombre,apellido,DNI,direccion,ant,telefono,salario,DNIS),automovil(matricula,marca,modelo){
		this->areaventa = areaventa;
		this->porcentaje = porcentaje;
		
	}  
	void Imprimir(){
			cout<<"\n\nNombre: "<<this->nombre;
			cout<<"\n\nApellido: "<<this->apellido;
			cout<<"\n\nDNI: "<<this->DNI;
			cout<<"\n\nDireccion: "<<this->direccion;
			cout<<"\n\nTelefono: "<<this->telefono;
			cout<<"\n\nSalario: "<<this->salario;
			cout<<"\n\nSupervisor(DNI): "<<this->supervisor->DNI;
			cout<<"\n\nNumero de Despacho: "<<this->matricula;
			cout<<"\n\nmarca: "<<this->marca;
			cout<<"\n\nmodelo: "<<this->modelo;
			cout<<"\n\narea: "<<this->areaventa;
			cout<<"\n\npor: "<<this->porcentaje;
		}
	void IncrementoAnt(){
		this->ant++;	
		this->salario += (this->salario/1000); 
	}	
};










