#include<iostream>
#include<stdio.h>
#include <math.h>
using namespace std;

class cuadrado{
	private:
		float lado;	
		public:	
		cuadrado(float);
		void perimetro();
		void area();
	
};

class triangulo{
	private:
		float base;
		float altura;
		public:
			triangulo(float, float);
			void perimetro();
			void area();
};

class rectangulo{
	private:
		float largo;
		float ancho;
		public:
			rectangulo(float, float);
			void perimetro();
			void area();
};

class circulo{
	private:
		float radio;
		public:
			circulo(float);
			void perimetro();
			void area();
};

cuadrado::cuadrado (float lad){
	lado = lad;
}

triangulo::triangulo(float bas, float alt){
	base = bas;
	altura = alt;
}

rectangulo::rectangulo(float _largo, float _ancho){
	largo = _largo;
	ancho = _ancho;
}

circulo::circulo(float _radio){
	radio = _radio;
}

void cuadrado::perimetro(){
	float perim;	
	perim = lado*4;
	cout<<"El perimetro del cuadrado es:"<<perim<<endl;
}

void cuadrado::area(){
	float are;
	are= lado*lado;
	cout<<"El area del cuadrado es: "<<are<<endl;
}

void triangulo::area(){
	float areatria;
	areatria = base*altura/2;
	
	cout<<"El area del triangulo es: "<<areatria<<endl;
}

void triangulo::perimetro(){
	float _perim;
	_perim = base*3;
	cout<<"El perimetro del triangulo es: "<<_perim<<endl;
}
void rectangulo::area(){
	float _are;
	_are = largo*ancho;
	cout<<"El area del rectangulo es: "<<_are<<endl;
}

void rectangulo::perimetro(){
	float _perimetro;
	_perimetro = largo+ancho*2;
	cout<<"El perimetro del rectangulo es: "<<_perimetro<<endl;
}

void circulo::area(){
	float _area;
	_area = 3.15*pow(radio,2);
	cout<<"El area del circulo es: "<<_area<<endl;
}

int main(){
	triangulo rojo(12,12);
	cuadrado azul(6);
	rectangulo verde (17,6);
	circulo naranja (3);
		
	rojo.area();
	rojo.perimetro();
	azul.area();
	azul.perimetro();
	verde.area();
	verde.perimetro();
	naranja.area();
	
	system("pause");
	return 0;		
}
