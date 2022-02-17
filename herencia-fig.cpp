#include <iostream>
#include<stdio.h>
#include <math.h>
using namespace std;
//clase padre
class figuras
{
protected:
	float altura;
public:
	figuras(float);
	void mostrar();

};

figuras::figuras(float altura_){
	altura=altura_;
}

void figuras::mostrar(){
	cout<<"\n";
}
//calse hija piramide
class piramide:public figuras
{
	private:
		float lados;
	public:
		piramide(float,float);
		void operacion1();
};
piramide::piramide(float altura_,float lados_):figuras(altura_){
	lados=lados_;
}

void piramide::operacion1(){
	mostrar();
	float area,volum,div;
	div=pow(altura,2);
	volum=div*lados/1/3;
	cout<<"El volumen de la piramide cuadrangular es: "<<volum<<"cm3ni"<<endl;
}

//calse hija tringular
class triangular:public figuras
{
	private:	
		float base,a;
	public:
		triangular(float,float,float);
		void operacion2();
};
triangular::triangular(float altura_,float base_,float a_):figuras(altura_){
	base=base_;
	a=a_;
}

void triangular::operacion2(){
	mostrar();
	float volum,div;
	div=altura*base*a;
	volum=div/6;
	cout<<"El volumen de la piramide triangular es: "<<volum<<"cm3"<<endl;
}

//calse hija pentagono
class pentagono:public figuras{
	private:		
		float p,a;
	public:
		pentagono(float,float,float);
		void operacion3();
};

pentagono::pentagono(float altura_,float p_,float a_):figuras(altura_){
	p=p_;
	a=a_;
}

void pentagono::operacion3(){
	mostrar();
	float ab,per,ar,vol;
	ab=p*5;
	ar=a;
	per=ab*ar/2;
	vol=per*altura;
	cout<<"El volumen de el pentagono es: "<<vol<<"cm3"<<endl;
}

//clase hija cilindro
class cilindro:public figuras
{
private:
	float radio;
public:
	cilindro(float,float);
void operacion();

};

cilindro::cilindro(float altura_,float radio_):figuras(altura_){
	radio=radio_;
}

void cilindro::operacion()
{
	mostrar();
	float _area,alt;
	_area = 3.1415*pow(radio,2);
	alt=_area*altura;
	cout<<"El volumen de el cilindro es: "<<alt<<"cm2"<<endl;
}

int main() {
	float n,x,y;
	cout<<"Ingresa la altura: ";
	cin>>n;
	cout<<"Ingresa la base: ";
	cin>>x;
	cout<<"ingresa la base a: ";
	cin>>y;
	
	pentagono p3(n,x,y);
	p3.operacion3();
	triangular t1(x,n,y);
	t1.operacion2();
	piramide p1(x,n);
	p1.operacion1();
	cilindro c1(x,n);
	c1.operacion();
	
	
	return 0;
}
