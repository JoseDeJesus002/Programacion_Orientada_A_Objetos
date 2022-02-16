#include <iostream>
#include <stdlib.h>
using namespace std;

//clase persona

class persona{
private:
	string nombre;
	int edad;
public:
	persona(string,int);
	void mostrar();
};
persona::persona(string nombre_,int edad_)
{

	nombre=nombre_;
	edad=edad_;
}
void persona::mostrar(){
	cout<<"\n";
	cout<<"nombre: "<<nombre<<endl;
	cout<<"edad: "<<edad<<endl;
}

//clase empleado
class empleado:public persona{
private:
	float sueldo;
public:
	empleado(string,int,float);
	void mostraremp();
};
empleado::empleado(string nombre_,int edad_,float sueldo_):persona(nombre_,edad_){
	sueldo=sueldo_;
}

void empleado::mostraremp(){
	mostrar();
	cout<<"sueldo: "<<sueldo<<endl;
}

//calse director
class director:public persona{
private:
	string area;
	int antiguedad;
	int _sueldo;
public:
	director(string,int,string,int,int);
	void mostrar1();
};
director::director(string nombre_,int edad_,string area_,int antiguedad_,int suel):persona(nombre_,edad_){
	area=area_;
	antiguedad=antiguedad_;
	_sueldo=suel;
}

void director::mostrar1(){
	mostrar();
	cout<<"El area es: "<<area<<endl;
	cout<<"sueldo: "<<_sueldo<<endl;
	cout<<"La antiguedad es: "<<antiguedad<<" anios"<<"\n"<<endl;
}

//accion de herencias

int main(){
persona p1("Juan",32);
p1.mostrar();

empleado a1("Andres",53,1800);
a1.mostraremp();

director a2("Mariana",48,"Ventas",15,48000);
a2.mostrar1();


system("pause");
	
	return 0;
}

