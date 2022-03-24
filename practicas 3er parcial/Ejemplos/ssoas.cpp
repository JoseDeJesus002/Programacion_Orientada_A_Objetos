//Declaracion de librerias
#include<iostream>
#include<stdlib.h>
using namespace std;

//clase padre------------------------------------------------------------------------------------------------------------
class empleado{

protected:
string nombre;
string apellidos;
int IDN;
int antiguedad;
string direccion;
string telefono;
string supervisor;
float salario;

public:
empleado(string, string, int, int, string, string, string, float); //contructor
virtual void imprimir(); //metodos con polimorfismo
//int getcambio_supervisor(); //metodo get
};



//clases hija-----------------------------------------------------------------------------------------------------------
class secretario : public empleado{

private:
int num_despacho;
int num_fax;
float salario;

public:
secretario(string, string, int, int, string, string, string, float, int, int, float);
void sueldo_incre();
void imprimir();
};



//clase hija------------------------------------------------------------------------------------------------------------
class vendedor : public empleado{

private:
string area_venta;
float porcentaje_co;
float salario;
public:
vendedor(string, string, int, int, string, string, string, float, string, float, float);
void sueldo_incre();
void imprimir();
void nuevo_cli();
void ingresar();
void eliminar_cli();
};



//constructor clase padre---------------------------------------------------------------------------------------------------
empleado::empleado(string nom, string ape, int ID, int ant, string dire, string tel, string super, float s){

nombre = nom;
apellidos = ape;
IDN =ID;
antiguedad = ant;
direccion = dire;
telefono = tel;
supervisor = super;
salario = s;
}

//constructor clase hija (secretario)------------------------------------------------------------------------------------------------------------------------------------------
secretario::secretario(string nom, string ape, int ID, int ant, string dire, string tel, string super, float s, int num_des, int num_fa, float sa) : empleado (nom, ape, ID, ant, dire, tel, super, s){

num_despacho = num_des;
num_fax = num_fa;
salario = sa;
}



//constructor clase hija (vendedor)-----------------------------------------------------------------------------------------------------------------------------------------------
vendedor::vendedor(string nom, string ape, int ID, int ant, string dire, string tel, string super, float s, string area, float porcen, float sa) : empleado (nom, ape, ID, ant, dire, tel, super, s){
area_venta = area;
porcentaje_co = porcen;
salario = sa;
}
//metodos clase padre
void empleado::imprimir(){

cout<<"Nombre: "<<nombre<<endl;
cout<<"Apellido: "<<apellidos<<endl;
cout<<"IDN: "<<IDN<<endl;
cout<<"Antiguedad: "<<antiguedad<<" años"<<endl;
cout<<"Direccion: "<<direccion<<endl;
cout<<"Telefono: "<<telefono<<endl;
cout<<"Supervisor: "<<supervisor<<endl;
cout<<"Salario anual: $"<<salario<<endl;
}



//metodos clase hija (secretario)------------------------------------------------------------------------------------------------------------------------------------------------------
void secretario::sueldo_incre(){

float total;
total = salario + (salario * 0.05);
cout<<"Tu salario con aunmento del 5% es: $"<<total<<endl;
}



void secretario::imprimir(){

empleado::imprimir();
cout<<"Numero de despacho: "<<num_despacho<<endl;
cout<<"Numero de fax: "<<num_fax<<endl;
secretario::sueldo_incre();
}



//metodos clase hija (vendedor)--------------------------------------------------------------------------------------------------------------------------------------------------------
void vendedor::sueldo_incre(){

float total;
total = salario + (salario * 0.10);
cout<<"Tu salario con aunmento del 10% es: $"<<total<<endl;
}

void vendedor::ingresar(){
	int n;
	cout<<"cuantos clientes desea ingresar: ";
	cin>>n;
	string arreglo[20];
	for(int i=0;i<n;i++){
		cout<<"Ingresa Un cliente:["<<i<<"]: ";
		cin>>arreglo[i];
	}
}
void vendedor::nuevo_cli(){

	int ma;
	cout<<"Menu De clientes\n\n";
	cout<<"1) Insertar Cliente\n";
	cout<<"2) Salir\n";
	cout<<"Elije la Opcion 1 para agregar un cliente: ";
	cin>>ma;
	switch(ma){
			case 1:
			vendedor::ingresar();
				break;
			case 2:
				cout<<"Adios! Bye gracias:";
				break;
	}
}







void vendedor::eliminar_cli(){
	string n;
	cout<<
	if (n==arreglo[i]){
	for(int i=0;i<n;i++){
	cout<<"Ingresa Un cliente:["<<i<<"]: ";
	cin>>arreglo[i]="";
	}	
	}
}



void vendedor::imprimir(){

empleado::imprimir();
cout<<"Area de venta: "<<area_venta<<endl;
cout<<"Portentaje de comisiones por ventas: "<<porcentaje_co<<endl;
vendedor::sueldo_incre();
}



int main(){
string nombre, apellidos, direccion, supervisor, telefono, area_venta;
int IDN, num_despacho, num_fax, antiguedad;
float salario, porcentaje_co;

cout<<"Programa que te muestra los datos de un empleado de la empresa"<<endl;
cout<<"\n";
cout<<"\n";
cout<<"*******************************************************************************************"<<endl;
cout<<"********************************BIENVENIDO A LA EMPRESA************************************"<<endl;
cout<<"*******************************************************************************************"<<endl;
cout<<"\n";

bool menu = true;
while (menu == true){
int op;
string dato;

do{
cout<<"\t Selecciona que trabajador deseas consultar \n";
cout<<"\n";
cout<<"1. Secretario"<<endl;;
cout<<"2. Vendedor"<<endl;
cout<<"3. Jefe de zona"<<endl;
cout<<"4. SALIR"<<endl;
cout<<"\n";
cout<<"Opcion: ";
cin>>op;
cout<<"\n";

switch(op){
case 1:
{
cout<<"\n";
cout<<"Ingresa tu nombre: ";
cin>>nombre;
cout<<"\n";
cout<<"Ingresa tu apellido: ";
cin>>apellidos;
cout<<"\n";
cout<<"Ingresa tu IDN de empleado: ";
cin>>IDN;
cout<<"\n";
cout<<"Ingresa tu tiempo trabajando en la empresa: ";
cin>>antiguedad;
cout<<"\n";
cout<<"Ingresa tu direccion: ";
cin>>direccion;
cout<<"\n";
cout<<"Ingresa tu numero de telefono: ";
cin>>telefono;
cout<<"\n";
cout<<"Ingresa el nombre de tu supervisor: ";
cin>>supervisor;
cout<<"\n";
cout<<"Ingresa tu salario anual: ";
cin>>salario;
cout<<"\n";
cout<<"Ingresa tu numero de despacho: ";
cin>>num_despacho;
cout<<"\n";
cout<<"Ingresa tu numero de fax: ";
cin>>num_fax;
cout<<"\n";

secretario s1(nombre, apellidos, IDN, antiguedad, direccion, telefono, supervisor, salario, num_despacho, num_fax, salario);
s1.imprimir();
cout<<"\n";
system("pause");
}
break;

case 2:
{

cout<<"\n";
cout<<"Ingresa tu nombre: ";
cin>>nombre;
cout<<"\n";
cout<<"Ingresa tu apellido: ";
cin>>apellidos;
cout<<"\n";
cout<<"Ingresa tu IDN de empleado: ";
cin>>IDN;
cout<<"\n";
cout<<"Ingresa tu tiempo trabajando en la empresa: ";
cin>>antiguedad;
cout<<"\n";
cout<<"Ingresa tu direccion: ";
cin>>direccion;
cout<<"\n";
cout<<"Ingresa tu numero de telefono: ";
cin>>telefono;
cout<<"\n";
cout<<"Ingresa el nombre de tu supervisor: ";
cin>>supervisor;
cout<<"\n";
cout<<"Ingresa tu salario anual: ";
cin>>salario;
cout<<"\n";
cout<<"Ingresa area de venta: ";
cin>>area_venta;
cout<<"\n";
cout<<"Ingresa tu porcentaje de comisiones por venta: ";
cin>>porcentaje_co;
cout<<"\n";
vendedor v1(nombre, apellidos, IDN, antiguedad, direccion, telefono, supervisor, salario, area_venta, porcentaje_co, salario);
v1.nuevo_cli();
v1.imprimir();

cout<<"\n";
system("pause");


}
break;

case 3:
{

cout<<"\n";
system("Pause");
}
break;

case 4:
{

cout<<"\n";
system("Pause");
}
break;

}

} while(op != 4);

}

cout<<"\n";
cout<<"TU EJECUCION HA FINALIZADO"<<endl;

system("pause");
return 0;
}
