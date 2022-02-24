#include<iostream>
#include<stdlib.h>
#include <stdio.h>

using namespace std;

class cuenta{
private:
	float cantidad;
	float getcuentab();
	string titular;
public:
	void imprimirNom();
	cuenta();
	void setcuenta(float cantidad){
		cantidad=cantidad;
	}
		
		float getcantidad();
		void ingresar();
		void retirar();
		void mostrar();
		
};

void cuenta::imprimirNom(){
	cout<<"Ingresa el nombre del titular: ";
	cin>>titular;
	cout<<"\n";
}
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
	
	cuenta::getcantidad();	
}

void cuenta::mostrar(){
	cout<<"\n";
	cout<<"Titular: "<<titular<<endl;
	cout<<"Cantidad: "<<cantidad<<endl;
}


int main(){
	cuenta c1;
	c1;
	c1.imprimirNom();
	
	int opc;
	while(opc!=4){
		int opc;
		cout<<"1. Ingresar dinero"<<endl;
		cout<<"2. Retirar"<<endl;
		cout<<"3. Mostrar dinero"<<endl;
		cout<<"4. salir"<<endl;
		cout<<"operacion a realizar: ";
		cin>>opc;
		
		switch(opc){
		case 1:
			c1.ingresar();
			break;
		case 2:
			c1.retirar();
			system("pause");
			break;
		case 3:
			c1.mostrar();
			system("pause");
			break;
		case 4:
			cout<<"\n";
			cout<<"VUELVA PRONTO";
			return 0;
			break;
		default:
			cout<<"Opcion incorrecta";
		break;
		}
		system("cls");
	}
}
