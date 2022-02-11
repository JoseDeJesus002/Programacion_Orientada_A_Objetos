#include <iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;

	class perro{
	private://solo se usa para la clase 
		string nombre, raza;
	public:
		perro(string, string);
		~perro(); //destructor
		void mostrar();
		
	};
//constructor 
perro::perro(string nom, string raz){
	nombre = nom;
	raza = raz;
}
// declaramos destructor
perro::~perro(){
}
//metodo mostrar 

void perro::mostrar(){
	cout<<"Mi Perro es: "<<nombre<<"es de raza: "<<raza<<endl;
}
//instanciar la clase 
int main(){
	perro d1("Tango","doberman");
	d1.mostrar();
	system("pause");
	return 0;
}