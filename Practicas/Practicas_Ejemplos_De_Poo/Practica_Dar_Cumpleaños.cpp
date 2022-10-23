#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

class persona{
	//Asigna los atributos
	private:
		
	string nombre;
	int fecha;
	float estatura;
	float peso;
	//Asigna los metodos
	public:
		
	persona(string, int, float, float);
		void cumpleanios();
		void masacorporal();	
};	
	//Asignamos los datos que tiene la clase persona
	persona::persona(string _nombre, int _fecha, float _estatura, float _peso){
	nombre = _nombre;
	fecha = _fecha;
	estatura = _estatura;
	peso = _peso;
}
//asignamos la funcion del metodo cumpleaños
void persona::cumpleanios(){
	int anio_;
	int prox_edad;
	anio_= 2022 - fecha - 1;
	prox_edad= anio_ + 1;
	
	cout<<"Tu edad es :"<< anio_<<" anios"<<endl;
	cout<<"Tu cumpliras: "<<prox_edad<<" anios "<<"este anio"<<endl;
}
//asignamos la funcion del metodo masa coorpaoral
void persona::masacorporal(){
	float masacor;
	float masa;
	masa = estatura*estatura;
	masacor=peso/pow(estatura,2);
	cout<<"Tu masa coorporal es: "<<masacor<<endl;
}


int main(){
	//Se declaran las variables para almacenmiento del mismo
	string name;
	int years;
	int birth;
	float high;
	float kg;
	//se pregunta al usuario sobre sus datos personales
	cout<<"Bienvenido ingresa la siguiente infromacion"<<endl;
	cout<<"Ingresa tu nombre: ";
	cin >> name;
	
	cout<<"Ingresa tu anio de nacimiento, ejemp, 2022, : ";
	cin >> years;
	cout<<"Ingresa dia mes y anio, ejemp 0603 : ";
	cin >> birth;
	cout<<"Ingresa tu estatura, ejemp, 1.85, : ";
	cin >> high;
	
	cout<<"Ingresa tu peso: ";
	cin >> kg;
	//asignamos los datos para que se complete la clase persona
	persona p2(name, years, high, kg); 
	//damos funcionamiento a los metodos 
	p2.cumpleanios();
	cout<<"Tu cumpleanios es: "<<birth<<endl;
	p2.masacorporal();	
	system ("pause");
	return 0;
}