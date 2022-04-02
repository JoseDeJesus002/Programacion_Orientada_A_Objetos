#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

class Cuadrado
{
	private://atributos
		int lado;
	//metodos
	public:
		Cuadrado(); //constructor
		void setCuadrado(int lad_){
		lado=lad_;
		}	
		int getCuadradoa();	
};

//desarrollo de metodos
Cuadrado::Cuadrado ()
{
}
//Obtener el valor
int Cuadrado::getCuadradoa()
{
	//perimetro
	float perim;
	perim = lado*4;
	cout<<"El perimetro del cuadrado es: "<<perim<<endl;
	//area
	float are;
	are=lado*lado;
	cout<<"El area del cuadrado es: "<<are<<endl;
	//devolver el valor
	return lado;
}

int main()
{
	//instanciar clase =  generar objetos en la clase
	float n;
	cout <<"Bienvenido ingresa un numero para dar el area y perimetro: ";
	cin >>n;	
	//iniciar el constructor
	Cuadrado c1;
	//pasar el dato del numero que se ingreso
	c1.setCuadrado(n);
	//mostrar los resultados de area y perimetro
	c1.getCuadradoa();
	system("pause");
	
	return 0;
}