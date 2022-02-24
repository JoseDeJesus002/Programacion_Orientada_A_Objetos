#include<iostream>
#include <stdio.h>
using namespace std;

class cuenta{
	private:
		float cantidad;
	public:
		cuenta();
		void setcuenta(float cantidad_){
		cantidad=cantidad_;
		}
		float getcuentab();
		void ingresar();
		void retirar();
		void mostrar();
};

cuenta::cuenta(){
}

float cuenta::getcuentab(){
	return cantidad;
}

void cuenta::ingresar(){
	cout<<"Cuanto desea ingresa: ";
	cin>>cantidad;
}

void cuenta::retirar(){
	int cant;
	cout<<"Cuanto va a retirar";
	cin>>cant;
	cant=cant-cantidad;
}

void cuenta::mostrar(){
	cout<<"Rodolfo"<<endl;
	cout<<"cantidad: "<<cantidad<<endl;
}


int main(){
	cuenta c1(3.6);
	int opc;

	while(opc!=4){
	cout<<"1. Ingresar dinero"<<endl;
	cout<<"2. Retirar"<<endl;
	cout<<"3. Mostrar dinero"<<endl;
	cout<<"4. salir"<<endl;
	cout<<"operacion a realizar: ";
	cin>>opc;
	
	switch(opc){
		case 1:
			
			c1.ingresar();
	}
	}
	
	system ("pause");
	return 0;
}
