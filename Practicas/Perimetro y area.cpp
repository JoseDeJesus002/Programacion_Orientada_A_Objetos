#include<iostream>
#include<stdio.h>
using namespace std;

class cuadrado{
	
	private:
		
	//atributos
	
		float lado;
		float base;
		float altura;
	//metodos
	public:
		
		cuadrado(float); //constructor
		void perimetro();
		void area();
};

//desarrollo de metodos

cuadrado :: cuadrado (float ld,float bs,float,vs){
	
	 lado = ld;
	 base = bs;
	 altura = vs;
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

void cuadrado::area(){
	float ar;
	ar = base*altura/2
	cout<<"Ela area del cuadrad es: "<<are<<endl;
}

int main(){
	//instanciar clase =  generar objetos en la clase
	
	cuadrado tringulo(5,5,10);
	cuadrado verde(5);
	cuadrado amarillo(12.3);
	cuadrado azul(6.5);
	cuadrado naranja (22);
	tringulo.area();
	verde.perimetro();
	verde.area();
	amarillo.perimetro();
	amarillo.area();
	azul.perimetro();
	azul.area();
	naranja.perimetro();
	naranja.area();
	
	system("pause");
	
	return 0;
}