#include <iostream>
using namespace std;
//clases padre
class personal{
	public:
		virtual void quincena(){

		} 
		virtual void aguinaldo(){

		}
		virtual void mostrar(){
			personal::quincena();
			personal::aguinaldo();
		}
	protected: 
	string nom,puesto;
	int salario;	
};

class auxiliar:public personal{
	public:
		void quincena()=0; 
		void aguinaldo()=0;
		void mostrar()=0;	
};
//calses hijas
class mesero:public personal{
	public:
		void aguinaldo() override{
			int aguinaldo_,d;
			cout<<"Ingresa los dias trabajados: ";
			cin>>d;
			aguinaldo_=(salario/365)*d;
			cout<<"Tu aguinaldo es: "<<aguinaldo_<<endl;
		}
		void quincena() override{
			salario=175*15;
			cout<<"Tu quincena es: "<<salario<<endl;
		}
		void nada(){
		}
		void mostrar() override{
			puesto="mesero";
			cout<<"Dame tu nombre: ";
			cin>>nom;
			system("cls");
			cout<<"Nombre: "<<nom<<"\n"<<"puesto: "<<puesto<<endl;
			mesero::nada();
			mesero::quincena();
			mesero::aguinaldo();	
		}
};

class jefepiso:public personal{
	public:
		void aguinaldo() override{
		int aguinaldo_,d;
		cout<<"Ingresa los dias trabajados: ";
		cin>>d;
		aguinaldo_=(salario/365)*d;
		cout<<"Tu aguinaldo es: "<<aguinaldo_<<endl;
		}
		void quincena() override{
			salario=195*15;
			cout<<"Tu quincena es: "<<salario<<endl;
		}
		void mostrar() override{
			puesto="jefe de piso";
			cout<<"Dame tu nombre: ";
			cin>>nom;
			system("cls");
			cout<<"Nombre: "<<nom<<"\n"<<"puesto: "<<puesto<<endl;
			jefepiso::quincena();
			jefepiso::aguinaldo();	
		}
};

class bartenderjef:public personal{
	public:
		void aguinaldo() override{
		int aguinaldo_,d;
		cout<<"Ingresa los dias trabajados: ";
		cin>>d;
		aguinaldo_=(salario/365)*d;
		cout<<"Tu aguinaldo es: "<<aguinaldo_<<endl;
		}
		void quincena() override{
			salario=230*15;
			cout<<"Tu quincena es: "<<salario<<endl;
		}
		void mostrar() override{
			puesto="bartender";
			cout<<"Dame tu nombre: ";
			cin>>nom;
			system("cls");
			cout<<"Nombre: "<<nom<<"\n"<<"puesto: "<<puesto<<endl;
			bartenderjef::quincena();
			bartenderjef::aguinaldo();	
		}
};

class primchef:public personal{
	public:
		void aguinaldo() override{
		int aguinaldo_,d;
		cout<<"Ingresa los dias trabajados: ";
		cin>>d;
		aguinaldo_=(salario/365)*d;
		cout<<"Tu aguinaldo esc: "<<aguinaldo_<<endl;
		}
		void quincena() override{
			salario=230*15;
			cout<<"Tu quincena es: "<<salario<<endl;
		}
		void mostrar() override{
			puesto="chef";
			cout<<"Dame tu nombre: ";
			cin>>nom;
			system("cls");
			cout<<"Nombre: "<<nom<<"\n"<<"puesto: "<<puesto<<endl;
			primchef::quincena();
			primchef::aguinaldo();	
		}
}; 
class segchef:public auxiliar{
	public:
		void aguinaldo() override{
		int aguinaldo_,d;
		cout<<"Ingresa los dias trabajados: ";
		cin>>d;
		aguinaldo_=(salario/365)*d;
		cout<<"Tu aguinaldo esc: "<<aguinaldo_<<endl;
		}
		void quincena() override{
			salario=186*15;
			cout<<"Tu quincena es2: "<<salario<<endl;
		}
		void mostrar() override{
			puesto="chef segundo";
			cout<<"Dame tu nombre: ";
			cin>>nom;
			system("cls");
			cout<<"Nombre: "<<nom<<"\n"<<"puesto: "<<puesto<<endl;
			segchef::quincena();
			segchef::aguinaldo();	
		}
};

class bartenderaux:public auxiliar{
	public:
	void aguinaldo() override{
		int aguinaldo_,d;
		cout<<"Ingresa los dias trabajados: ";
		cin>>d;
		aguinaldo_=(salario/365)*d;
		cout<<"Tu aguinaldo es: "<<aguinaldo_<<endl;
		}
		void quincena() override{
			salario=150*15;
			cout<<"Tu quincena es: "<<salario<<endl;
		}
		void mostrar() override{
			puesto="bartender auxiliar";
			cout<<"Dame tu nombre: ";
			cin>>nom;
			system("cls");
			cout<<"Nombre: "<<nom<<"\n"<<"puesto: "<<puesto<<endl;
			bartenderaux::quincena();
			bartenderaux::aguinaldo();	
		}
};

class lavalozaaux:public auxiliar{
	public:
		void aguinaldo() override{
		int aguinaldo_,d;
		cout<<"Ingresa los dias trabajados: ";
		cin>>d;
		aguinaldo_=(salario/365)*d;
		cout<<"Tu aguinaldo es: "<<aguinaldo_<<endl;
		}
		void quincena() override{
			salario=150*15;
			cout<<"Tu quincena es: "<<salario<<endl;
		}
		void mostrar() override{
			puesto="lavaloza auxiliar";
			cout<<"Dame tu nombre: ";
			cin>>nom;
			system("cls");
			cout<<"Nombre: "<<nom<<"\n"<<"puesto: "<<puesto<<endl;
			lavalozaaux::quincena();
			lavalozaaux::aguinaldo();	
		}
};

void menu(){
	personal* rest[]={new mesero(),new jefepiso(),new primchef(),new segchef(),new bartenderaux(),new bartenderjef(),new lavalozaaux()};
	int opc;
	do{
	cout<<"\t EMPLEADOS\n"<<endl;
	cout<<"1. Mesero"<<endl;
	cout<<"2. Jefe De Piso"<<endl;
	cout<<"3. Chef"<<endl;
	cout<<"4. Chef auxiliar"<<endl;
	cout<<"5. Bartender"<<endl;
	cout<<"6. Bartender auxiliar"<<endl;
	cout<<"7. lava loza auxiliar"<<endl;
	cout<<"8. Salir"<<endl;
	cout<<"Ingresa el puesto a realizar puesto: ";
	cin>>opc;
	switch(opc){
		case 1:
			rest[0]->mostrar();
		break;
		case 2:
			rest[1]->mostrar();
		break;
		case 3:
			rest[2]->mostrar();
		break;
		case 4:
			rest[3]->mostrar();
		break;
		case 5:
			rest[4]->mostrar();
		break;
		case 6:
			rest[5]->mostrar();
		break;
		case 7:
			rest[6]->mostrar();
		break;
	}
	system("pause");
	system("cls");
	}while(opc!=8);
}

int main(){
	menu();
	return 0;
}