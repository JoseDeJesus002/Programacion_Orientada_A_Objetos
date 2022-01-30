#include<iostream>
#include<stdio.h>
using namespace std;

class cuadrado{
	
	private:
		
	//atributos
	
		float lado;
		
	//metodos
	public:
		
		cuadrado(float); //constructor
		void perimetro();
		void area();
};

//desarrollo de metodos

cuadrado :: cuadrado (float ld){
	
	 lado = ld;
}

void cuadrado::perimetro(){
	float perim;
	perim = lado*4;
	cout<<"El perimetro del cuadrado es: "<<perim<<endl;
}

void cuadrado::area(){
	float are;
	are=lado*lado;
	cout<<"Ela area del cuadrado es: "<<are<<endl;
}

int main()
{
	//instanciar clase =  generar objetos en la clase
	float n;
	
	cout <<"dame un numero: ";
	cin >>n;	
	
	cuadrado desconocido(n);
	
	desconocido.perimetro();
	desconocido.area();
	system("pause");
	
	return 0;
}