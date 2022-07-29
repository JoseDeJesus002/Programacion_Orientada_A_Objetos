#include<iostream>
#include<stdlib.h>
#include <stdio.h>

using namespace std;

class titular{
	private:
		string nombre;
	public:
		titular(string);
		void mostrar();
};

titular::titular(string nombre_){
	nombre=nombre_;
}

void titular::mostrar(){
	cout<<"Nombre: "<<nombre<<endl;
}


class cuenta{
private:
	float cantidad;
public:
	cuenta();
	void setcuenta(float cantidad){
		cantidad=cantidad;
	}
	
	float getcantidad();
	void ingresar();
	void retirar();
	void mostrar2();
};

cuenta::cuenta(){	
}

float cuenta::getcantidad(){
	return cantidad;
}
void cuenta::ingresar(){
	if(cantidad<=0){
	cout<<"No se ha podido relizar la operacion"<<endl;
	}else{
	cout<<"Cuanto desea ingresa: ";
	cin>>cantidad;
	}
	
	
	cuenta::getcantidad();

}

void cuenta::retirar(){
	float cant;
	cout<<"Cuanto va a retirar";
	cin>>cant;
	cantidad=cantidad-cant;
	cout<<cantidad<<endl;

	cuenta::getcantidad();	
}

void cuenta::mostrar2(){
	cout<<"cantidad: "<<cantidad<<endl;
	getcantidad();
}


int main(){
	string nombre_;
	cuenta c1;
	titular t1;
	t1;
	c1;
	int opc;
	while(opc!=5){
		int opc;
		cout<<"1. Ingresar dinero"<<endl;
		cout<<"2. Retirar"<<endl;
		cout<<"3. Mostrar dinero"<<endl;
		cout<<"4. registro"<<endl;
		cout<<"5. salir"<<endl;
		cout<<"operacion a realizar: ";
		cin>>opc;
		
		switch(opc){
		case 1:
			c1.ingresar();
			break;
		case 2:
			c1.retirar();
			break;
		case 3:
			c1.mostrar2();
			t1.mostrar();
			break;
		case 4:
			cout<<"Ingresa tu nombre: ";
			cin>>nombre_;
			t1.mostrar();
			break;
		}
	}
	return 0;
}
