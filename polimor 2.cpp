#include<iostream>
#include<stdio.h>
#include <math.h>
using namespace std;
class figura{
	protected:
		float lado;
	public:
		figura(float);
		virtual void area();
		virtual void perimetro();
};

figura::figura(float lado_){
	lado=lado_;
}
void figura::perimetro(){}

void figura::area(){}

class cuadrado:public figura{
	public:
		cuadrado(float);
		void area();
		void perimetro();
};

cuadrado::cuadrado(float lado_):figura(lado_){
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

class triangulo:public figura{
	private:
		float base;
		public:
			triangulo(float,float);
			void perimetro();
			void area();
};

triangulo::triangulo(float lado_, float base_):figura(lado_){
	base = base_;
}

void triangulo::area(){
	float areatria;
	areatria = base*lado/2;
	
	cout<<"El area del triangulo es: "<<areatria<<endl;
}

void triangulo::perimetro(){
	float _perim;
	_perim = base*3;
	cout<<"El perimetro del triangulo es: "<<_perim<<endl;
}

class rectangulo:public figura{
	private:
		float ancho;
		public:
			rectangulo(float, float);
			void perimetro();
			void area();
};

rectangulo::rectangulo(float lado_,float ancho_):figura(lado_){
	ancho = ancho_;
}

void rectangulo::area(){
	float area_;
	area_ = lado*ancho;
	cout<<"El area del rectangulo es: "<< area_<<endl;
}

void rectangulo::perimetro(){
	float perimetro_;
	perimetro_ = lado+ancho*2;
	cout<<"El erimetro del recatngulo es: "<<perimetro_<<endl;
}

class circulo:public figura{
		public:
			circulo(float);
			void area();
};

circulo::circulo(float lado_):figura(lado_){
}

void circulo::area(){
	float area_;
	area_ = 3.15*pow(lado,2);
	cout<<"El area del circulo es: "<<area_<<endl;
}



int main(){
	figura *conjunto[3];
	conjunto[0]= new cuadrado(20);
	conjunto[0]->area();
	conjunto[0]->perimetro();
	conjunto[1]= new triangulo(10,20);
	conjunto[1]->area();
	conjunto[1]->perimetro();
	conjunto[2]= new rectangulo(10,20);
	conjunto[2]->area();
	conjunto[2]->perimetro();
	conjunto[3]= new circulo(6.5);
	conjunto[3]->area();
}