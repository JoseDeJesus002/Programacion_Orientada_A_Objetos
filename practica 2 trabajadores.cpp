#include <iostream>
#include <stdlib.h>
using namespace std;

class trabajador{
	public:
		string nombre,puesto;
		int horas_trab;
		public:
			trabajador(string,string,int);
			~trabajador();
			virtual void mostrar();
			virtual void salario();
};

trabajador::trabajador(string nombre_,string puesto_,int horastrab){
	nombre=nombre_;
	puesto=puesto_;
	horas_trab=horastrab;
}
trabajador::~trabajador(){}
void trabajador::salario(){}
void trabajador::mostrar(){
cout<<"Nombre del empleado: "<<nombre<<"\n"<<"Puesto: "<<puesto<<endl;
}

class jefe:public trabajador{
	private:
		string area,turno;
	public:
		jefe(string,string,int,string,string);
		void salario();
		void mostrar();
};

jefe::jefe(string nombre_,string puesto_,int horastrab, string area_,string turno_ ):trabajador(nombre_,puesto_,horastrab){
	area=area_;
	turno=turno_;
}
void jefe::salario(){
	int n,x;
	if(area=="supervisor"){
	cout<<"Area: "<<area<<endl;
	cout<<"Turno: "<<turno<<endl;
	cout<<"Ingrese los dias trabajados 720 MXN el dia: ";
	cin>>n;
	x=n*720;
	cout<<"Tu salario es: "<<x<<" MXN"<<endl;		
	}else{
		cout<<"Area: "<<area<<endl;
		cout<<"Turno: "<<turno<<endl;
		cout<<"Ingrese las horas trabajadas 107 MXN la hora: ";
		cin>>n;
		x=n*107;
		cout<<"Tu salario : "<<x<<" MXN"<<endl;
	}
	
}

void jefe::mostrar(){
	cout<<"\n"<<"JEFE DE AREA\n"<<endl;
	trabajador::mostrar();
	jefe::salario();
}


class auxiliar:public trabajador{
	public:
		auxiliar(string,string,int);
		void salario();	
		void mostrar();
};

auxiliar::auxiliar(string nombre_,string puesto_,int horastrab):trabajador(nombre_,puesto_,horastrab){}
void auxiliar::salario(){
	int s,q;
	cout<<"Ingresa las horas trabajadas 62 MXN la hora: ";
	cin>>horas_trab;
	q=horas_trab*62;
	cout<<"Tu salario es: "<<q<<" MXN"<<endl;
}

void auxiliar::mostrar(){
	cout<<"\n"<<"AUXILIAR\n"<<endl;
	trabajador::mostrar();
	auxiliar::salario();
}

class secretaria:public trabajador{
	private:
		string area;
	public:
		secretaria(string,string,int,string);
		void salario();
		void mostrar();
};

secretaria::secretaria(string nombre_,string puesto_,int horastrab,string area_):trabajador(nombre_,puesto_,horastrab){
	area=area_;
}

void secretaria::salario(){
	int x,n;
	if(area=="recepcionista"){
	cout<<"Area: "<<area<<endl;
	cout<<"Ingresa las horas trabajadas 85 MXN la hora: ";
	cin>>x;
	n=x*85;
	cout<<"Tu salario : "<<n<<" MXN"<<endl;
	}else{
	cout<<"Area: "<<area<<endl;
	cout<<"Ingresa las horas trabajadas 60 MXN la hora: ";
	cin>>x;
	n=x*60;
	cout<<"Tu salario : "<<n<<" MXN"<<endl;
	}
}

void secretaria::mostrar(){
	cout<<"\n"<<"SECRETARIA\n"<<endl;
	trabajador::mostrar();
	secretaria::salario();
}

void menu(){
	trabajador *conjunto[2];
	string n,a,p,t;
	int opc;
	do{
	cout<<"\t EMPLEADOS\n"<<endl;
	cout<<"1. Jefe"<<endl;
	cout<<"2. Auxiliar"<<endl;
	cout<<"3. Secretaria"<<endl;
	cout<<"Ingresa tu puesto: ";
	cin>>opc;
	switch(opc){
		case 1:
		cout<<"Ingresa el nombre: ";
		cin>>n;
		cout<<"Ingresa el area supervisor o gerente: ";
		cin>>a;
		cout<<"Ingresa el turno: ";
		cin>>t;
		conjunto[0]= new jefe(n,"Jefe de Area",0,a,t);
		conjunto[0]->mostrar();
		break;
		case 2:
		cout<<"Ingresa el nombre: ";
		cin>>n;
		conjunto[1]= new auxiliar(n,"auxiliar",0);
		conjunto[1]->mostrar();
		break;
		case 3:
		cout<<"Ingresa el nombre: ";
		cin>>n;
		cout<<"Ingresa el area recepcionista o asistente: ";
		cin>>a;
		conjunto[2]= new secretaria(n,"Secretaria",0,a);
		conjunto[2]->mostrar();
		break;
		}
		system("pause");
		system("cls");
	}while(opc!=4);
}

int main(){
	 menu();
	return 0;
}
