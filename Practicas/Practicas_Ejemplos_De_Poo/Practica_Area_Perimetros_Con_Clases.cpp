#include<iostream>
#include<stdio.h>
#include <math.h>
using namespace std;

class figura{
	protected:
		float lado;	
		public:	
		figura(float);
		virtual void perimetro();
		virtual void area();
		virtual void mostrar();
	
};
figura::figura(float lado_){
	lado=lado_;
}

void figura::mostrar(){
	cout<<"el area es:"<<lado<<endl; 
}

class triangulo:public figura{
	private:
		float base;
		public:
			triangulo(float,float);
			void perimetro();
			void area();
			//void mostrar();
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
		float ancho,area_,perimetro_;
		public:
			rectangulo(float, float,float,float);
			void perimetro();
			void area();
			void mostrar();
};


rectangulo::rectangulo(float lado_,float _area,float _perimetro,float ancho_):figura(lado_){
	ancho = ancho_;
	area_=_area;
	perimetro_=_perimetro;
}

void rectangulo::area(){
	area_ = lado*ancho;
}

void rectangulo::perimetro(){
	perimetro_ = lado+ancho*2;
	
}

void rectangulo::mostrar(){
	figura::mostrar();
	cout<<"El area del rectangulo es: "<<area_<<endl;
	cout<<"El perimetro del rectangulo es: "<<perimetro_<<endl;
}

class circulo:public figura{
		private:
			float area_;
		public:
			circulo(float,float);
			void perimetro();
			void area();
			void mostrar();
};

circulo::circulo(float lado_,float _area):figura(lado_){
	area_=_area;
}

void circulo::area(){
	area_ = 3.15*pow(lado,2);

}

void circulo::mostrar(){
	figura::mostrar();
	cout<<"El area del circulo es: "<<area_<<endl;
}

//void cuadrado::perimetro(){
//	float perim;	
//	perim = lado*4;
//	cout<<"El perimetro del cuadrado es:"<<perim<<endl;
//}

//void cuadrado::area(){
//	float are;
//	are= lado*lado;
//	cout<<"El area del cuadrado es: "<<are<<endl;
//}






int main(){
	figura *conjunto[3];
	conjunto[0]= new circulo(15,20);
	conjunto[0]->mostrar();
	/*triangulo rojo(12,12);
	//cuadrado azul(6);
	rectangulo verde (17,6);
	circulo naranja (3);
		
	rojo.area();
	rojo.perimetro();
	//azul.area();
	//azul.perimetro();
	verde.area();
	verde.perimetro();
	naranja.area();
	*/
	system("pause");
	return 0;		
}
