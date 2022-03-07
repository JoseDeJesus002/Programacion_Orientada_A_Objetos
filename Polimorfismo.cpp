#include <iostream>
#include <stdio.h>

using namespace std;

class personal {
	protected:
		string nombre;
		int edad;
		char sexo;

	public:
		personal(string,int,char);
		virtual void mostrar();
};

personal::personal(string nombre_,int edad_,char sexo_) {
	nombre=nombre_;
	edad=edad_;
	sexo=sexo_;
}

void personal::mostrar() {
	cout<<" Nombre "<<nombre<<"\n"<<" Edad "<<edad<<"\n"<<" Sexo "<<sexo<<endl;
}


class alumno: public personal {
	private:
		int grado,aula;
		double promedio;
	public:
		alumno(string,int,char,int,int,double);
		void mostrar();
};

alumno::alumno(string nombre_,int edad_,char sexo_,int grado_,int aula_,double promedio_):personal(nombre_,edad_,sexo_) {
	grado=grado_;
	aula=aula_;
	promedio=promedio_;
}

void alumno::mostrar() {
	personal::mostrar();
	cout<<" Grado "<<grado<<"\n"<<" Aula "<<aula<<"\n"<<" Promedio "<<promedio<<endl;
}



int main() {

	personal *conjunto[2];
	conjunto[0]= new alumno("Rodolfo",17,'M',5,3,9.1);
	conjunto[0]->mostrar();


	system ("pause");
	return 0;
}