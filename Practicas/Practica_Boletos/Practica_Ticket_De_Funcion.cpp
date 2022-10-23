#include <iostream>
using namespace std;
class boleto{
private:
	string obra,dia,hora;
	
public:
	boleto(string,string,string hora);
	void precio();
	void descuento();
	void mostrar();
};

boleto::boleto(string obra_,string dia_,string hora_){
	obra=obra_;
	dia=dia_;
	hora=hora_;
}

void boleto::precio(){
	cout<<"\t Menu de compra de boleto\n"<<endl;
	cout<<"1. Precio boleto de adulto 220"<<endl;
	cout<<"2. Precio boleto de ninio 209"<<endl;
	cout<<"3. Precio boleto de adulto mayor 154"<<endl;
}

void boleto::descuento(){
	int opc,n,precio1,precio2,precio3;
	cout<<"\nIngresa el boleto a comprar: ";
	cin>>opc;
	switch(opc){
	case 1:
		cout<<"Ingresa la cantidad de boletos:";
		cin>>n;
		precio1=n*220;
		cout<<"La fecha de compra es: 5/4/22\n\n hora 7:44\n\n precio es: "<<precio1<<endl;
		break;
	case 2:
		cout<<"Ingresa la cantidad de boletos:";
		cin>>n;
		precio2=n*220;
		cout<<"El boleto ninio sin descuento es: "<<precio2<<endl;
		precio1=n*220*5/100;
		precio3=n*220-precio1;
		cout<<"\nLa fecha de compra es: 5/4/22\n\n la hora de compra: 7:44\n\n precio con descuento es: "<<precio3<<endl;
		break;
	case 3:
		cout<<"Ingresa la cantidad de boletos mayor: ";
		cin>>n;
		precio1=n*220;
		cout<<"\nEl boleto adulto sin descuento es: "<<precio1<<endl;
		precio1=n*220*30/100;
		precio3=n*220-precio1;
		cout<<"\nLa fecha de compra es: 5/4/22\n\n la hora de compra: 7:44\n\n precio con descuento es: "<<precio3<<endl;
		break;
	}
}
void boleto::mostrar(){
	boleto::precio();
	boleto::descuento();
	cout<<"\nLa obra es: "<<obra<<endl;
	cout<<"\nEl dia es: "<<dia<<endl;
	cout<<"\nLa hora es: "<<hora<<endl;
	
}
int main(int argc, char *argv[]) {
	int opc;

	boleto b2 ("violinista en el tejado","30","22:00 pm");
	boleto b("la bella durmiente","20","15:30 pm");
	
	cout<<"ingresa la opcion: ";cin>>opc;
	switch(opc){
	case 1:
	b2.mostrar();
	break;
	case 2:
	b.mostrar();
	break;
	}
	system("pause");
	system("cls");
	return 0;
}

