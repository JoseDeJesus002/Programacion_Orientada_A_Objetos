#include <iostream>
#include <stdlib.h>
using namespace std;

class mascota{

	private:
		string nombre,habitad,raza,duenio;
		int edad;
	public:
		mascota(string,string,string,string,int);
		void mostrar();
};

mascota::mascota(string nombre_,string habitad_,string raza_,string duenio_,int edad_)
{
nombre=nombre_;
habitad=habitad_;
raza=raza_;
duenio=duenio_;
edad=edad_;	
}

void mascota::mostrar()
{
cout<<"\n";
cout<<"Nombre: "<<nombre<<endl;
cout<<"Habitad: "<<habitad<<endl;
cout<<"Raza: "<<raza<<endl;
cout<<"Nombre de duenio: "<<duenio<<endl;
cout<<"Edad: "<<edad<<endl;	
}

//clase perro
class perro:public mascota
{
	private:
		string color,pelaje;
	public:
		perro(string,string,string,string,int,string,string);
		void mostrarlad();
};

perro::perro(string nombre_,string habitad_,string raza_,string duenio_,int edad_,string color_,string pelaje_):mascota(nombre_,habitad_,raza_,duenio_,edad_){
color=color_;
pelaje=pelaje_;	
}

void perro::mostrarlad()
{
	mostrar();
cout<<"El color es:"<<color<<endl;
cout<<"Tipo de pelaje es: "<<pelaje<<endl;	
}


//clase gato
class gato:public mascota
{
	private:
		string agil,pelaje2;
	public:
		gato(string,string,string,string,int,string,string);
		void mostrarmau();
};

gato::gato(string nombre_,string habitad_,string raza_,string duenio,int edad_,string agil_,string _pelaje):mascota(nombre_,habitad_,raza_,duenio,edad_)
{
	pelaje2=_pelaje;
	agil=agil_;
}

void gato::mostrarmau()
{
	mostrar();
	cout<<"Es agil: "<<agil<<endl;
	cout<<"Tipo de pelo: "<<pelaje2<<"\n"<<endl;
}

class pez:public mascota
{
	private:
		string textura,respiracion;
	public:
		pez(string,string,string,string,int,string,string);
		void mostrarglu();
};

pez::pez(string nombre_,string habitad_,string raza_,string duenio,int edad_,string textura_,string respiracion_):mascota(nombre_,habitad_,raza_,duenio,edad_)
{
	textura=textura_;
	respiracion=respiracion_;
}

void pez::mostrarglu()
{
	mostrar();
	cout<<"Su textura es: "<<textura<<endl;
	cout<<"Su resiracion es: "<<respiracion<<"\n"<<endl;
}

int main()
{
	perro p1("Bombon","Casa","pudle","Rodolfo",5,"blanco","chino");
	p1.mostrarlad();
	
	gato g1("bob","Calle","felino","mario",2,"si es agil","liso");
	g1.mostrarmau();
	
	pez p3("pescadin","pecera","pez payaso","Francisco",1,"Escamosa","Branquias");
	p3.mostrarglu();
}
















