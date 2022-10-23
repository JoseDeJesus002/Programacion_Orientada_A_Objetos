#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;
int opc;
// instanciamiento de la estructura----------------------------------------------
struct Nodo
{
	string dato;
	Nodo *siguiente;
};
// prototipos de funciones
void menu();
void insertarCola(Nodo *&, Nodo *&, string);
bool cola_vacia(Nodo *);
void mostrarcola(Nodo *);
void suprimirCola(Nodo *&, Nodo *&, string &);
// clase padre-------------------------------------------------------------------------------------
class empleado
{
	friend void insertarCola(Nodo *&, Nodo *&, string);
	friend bool cola_vacia(Nodo *);
	friend void mostrarcola(Nodo *);
	friend void suprimirCola(Nodo *&, Nodo *&, string &);

public:
	string nombre, apellido, DNI, direccion, supervisor, telefono;
	int ant;
	float salario;

public:
	empleado(string, string, string, string, string, string, int, float);
	virtual void aumentoAnt();
	virtual void imprimir();
	string getcambiosup();
};
// clase hija---------------------------------------------------------------------------------------------
class secretario : public empleado
{

private:
	string despacho;
	int num_fax;

public:
	secretario(string, string, string, string, string, string, int, float, string, int);
	void aumentoAnt();
	void imprimir();
};
// clase hija-------------------------------------------------------------------------------------------
class vendedor : public empleado
{
	// atributos
public:
	string matricula, marca, modelo, area_ventas;
	int celular;
	float comision;

public:
	vendedor(string, string, string, string, string, string, int, float, string, string, string, string, int, float);
	void Darbaja();
	void aumentoAnt();
	void cambiarCoche();
	void imprimir();
};
// clase hija------------------------------------------------------------------------------------------------------------
class jefe : public empleado
{
private:
	string matricula, marca, modelo, puesto, despacho;

public:
	jefe(string, string, string, string, string, string, int, float, string, string, string, string, string);
	void cambiarSecre();
	void cambiarCoche();
	void aumentoAnt();
	void darAlta();
	void imprimir();
};
// constructores de las clases---------------------------------------------------------------------------------------------------
empleado::empleado(string nombre_, string apellido_, string DNI_, string direccion_, string supervisor_, string telefono_, int ant_, float salario_)
{
	nombre = nombre_;
	apellido = apellido_;
	DNI = DNI_;
	ant = ant_;
	direccion = direccion_;
	telefono = telefono_;
	supervisor = supervisor_;
	salario = salario_;
}
secretario::secretario(string nombre_, string apellido_, string DNI_, string direccion_, string supervisor_, string telefono_, int ant_, float salario_, string despacho_, int num_fax_) : empleado(nombre_, apellido_, DNI_, direccion_, supervisor_, telefono_, ant_, salario_)
{
	despacho = despacho_;
	num_fax = num_fax_;
}
vendedor::vendedor(string nombre_, string apellido_, string DNI_, string direccion_, string supervisor_, string telefono_, int ant_, float salario_, string matricula_, string marca_, string modelo_, string area_ventas_, int celular_, float comision_) : empleado(nombre_, apellido_, DNI_, direccion_, supervisor_, telefono_, ant_, salario_)
{
	matricula = matricula_;
	marca = marca_;
	modelo = modelo_;
	area_ventas = area_ventas_;
	celular = celular_;
	comision = comision_;
}

jefe::jefe(string nombre_, string apellido_, string DNI_, string direccion_, string supervisor_, string telefono_, int ant_, float salario_, string matricula_, string marca_, string modelo_, string puesto_, string despacho_) : empleado(nombre_, apellido_, DNI_, direccion_, supervisor_, telefono_, ant_, salario_)
{
	matricula = matricula_;
	marca = marca_;
	modelo = modelo_;
	puesto = puesto_;
	despacho = despacho_;
}
// funciones de la clase empleado------------------------------------------------------------------------------
// funcion para el cambio de supervisor de la clase empleado--------------------
string empleado::getcambiosup()
{
	cout << "Ingresa tu cambio de supervisor: ";
	cin >> supervisor;
	cout << "Tu nuevo supervisor es: " << supervisor << endl;
	return supervisor;
}
// funcion para ver el aumento de el salario------------------------------------
void empleado::aumentoAnt()
{
	float total;
	total = salario + (salario * 0.05);
	cout << "Tu salario con aumento del 5% es: $" << total << endl;
}
// funcion para mostrar los datos de los atributos------------------------------
void empleado::imprimir()
{
	cout << "1. Cambio de supervisor" << endl;
	cout << "2. Ver aumento de salario" << endl;
	cout << "3. Mostrar informacion" << endl;
	cout << "Que deseas consultar: ";
	cin >> opc;
	switch (opc)
	{
	case 1:
		empleado::getcambiosup();
		break;
	case 2:
		empleado::aumentoAnt();
		break;
	case 3:
		cout << "Nombre: " << nombre << endl;
		cout << "Apellido: " << apellido << endl;
		cout << "DNI: " << DNI << endl;
		cout << "Telefono fijo: " << telefono << " " << endl;
		cout << "Nombre del supervisor: " << supervisor << endl;
		break;
	}
}
// funciones de la clase secretario-------------------------------------------------------------------------
// funcion para el aumento de salario de la clase secretario---------------------
void secretario::aumentoAnt()
{
	float total;
	total = salario + (salario * 0.05);
	cout << "Tu salario con aumento del 5% es: $" << total << endl;
}
// funcion para mostrar los datos de los atributos------------------------------
void secretario::imprimir()
{
	cout << "1. Ver aumento de salario" << endl;
	cout << "2. Mostrar informacion" << endl;
	cout << "Que deseas consultar: ";
	cin >> opc;
	switch (opc)
	{
	case 1:
		secretario::aumentoAnt();
		break;
	case 2:
		cout << "Nombre: " << nombre << endl;
		cout << "Apellido: " << apellido << endl;
		cout << "DNI: " << DNI << endl;
		cout << "Telefono fijo: " << telefono << " " << endl;
		cout << "Nombre del supervisor: " << supervisor << endl;
		cout << "Despacho: " << despacho << endl;
		cout << "Fax: " << num_fax << endl;
		break;
	}
}
// funciones de la clase vendedor--------------------------------------------------------------------------------------------------
// funcion para el aumento de salario-------------------------------------------
void vendedor::aumentoAnt()
{
	float total;
	total = salario + (salario * 0.10);
	cout << "Tu salario con aumento del 10% es: $" << total << endl;
}
// funcion para el registro de clientes-----------------------------------------
void vendedor::Darbaja()
{
	string dato;
	Nodo *frente = NULL;
	Nodo *fin = NULL;
	do
	{
		cout << "...MENU...\n";
		cout << "1. Registro de cliente" << endl;
		cout << "2. Ver clientes" << endl;
		cout << "3. Eliminar" << endl;
		cout << "4. Salir" << endl;
		cout << "Opcion: ";
		cin >> opc;
		switch (opc)
		{
		case 1:
			cout << "\nRegistro de cliente: ";
			cin >> dato;
			insertarCola(frente, fin, dato);
			break;
		case 2:
			cout << "\nMostrando el total de clientes: \n";
			mostrarcola(frente);
			cout << "\n";
			system("pause");
			break;
		case 3:
			cout << "Ingresa el nombre del cliente a eliminar: ";
			cin >> dato;
			suprimirCola(frente, fin, dato);
			break;
		}
		system("cls");
	} while (opc != 4);
}
// funcion cambio de auto de la clase jefe------------------------------------
void vendedor::cambiarCoche()
{
	cout << "\n"
			"\t"
			"----Automovil Antiguo----"
		 << endl;
	cout << "El auto del cliente es: " << endl;
	cout << "Matricula: " << matricula << endl;
	cout << "Marca: " << marca << endl;
	cout << "Modelo: " << modelo << endl;
	cout << "\nIngresa la matricula: ";
	cin >> matricula;
	cout << "Ingresa la marca: ";
	cin >> marca;
	cout << "Ingresa el modelo: ";
	cin >> modelo;
	cout << "\n"
			"\t"
			"---Automovil Nuevo---"
		 << endl;
	cout << "El nuevo auto del cliente es: " << endl;
	cout << "matricula: " << matricula << endl;
	cout << "Marca: " << marca << endl;
	cout << "Modelo: " << modelo << endl;
}
// funcion para mostrar los datos de los atributos---------------------------
void vendedor::imprimir()
{
	cout << "1. Cambiar de coche" << endl;
	cout << "2. Ver clientes eliminar o agregar" << endl;
	cout << "3. Ver aumento de salario" << endl;
	cout << "4. Mostrar informacion" << endl;
	cout << "Que deseas consultar: ";
	cin >> opc;
	switch (opc)
	{
	case 1:
		vendedor::cambiarCoche();
		break;
	case 2:
		vendedor::Darbaja();
		break;
	case 3:
		vendedor::aumentoAnt();
		break;
	case 4:
		cout << "Su nombre es: " << nombre << endl;
		cout << "Apellido: " << apellido << endl;
		cout << "DNI: " << DNI << endl;
		cout << "Telefono fijo y celular: " << telefono << " " << celular << endl;
		cout << "Su area es: " << area_ventas << endl;
		cout << "Comision: " << comision << endl;
		break;
	}
}
// funciones de la clase jefe de area--------------------------------------------------------------------------------------------------
// funcion para el aumento del salario-------------------------------------------
void jefe::aumentoAnt()
{
	float total;
	total = salario + (salario * 0.20);
	cout << "Tu salario con aumento del 20% es: $" << total << endl;
}
// funcion para el cambio de secretario-----------------------------------------
void jefe::cambiarSecre()
{
	despacho = "Juridico";
	cout << "Ingresa tu nombre: ";
	cin >> nombre;
	cout << "Ingresa tu apellido: ";
	cin >> apellido;
	cout << "Ingresa tu DNI: ";
	cin >> DNI;
	cout << "Ingresa tu supervisor: ";
	cin >> supervisor;
	cout << despacho << endl;
}
// funcion para el registro de vendedores---------------------------------------
void jefe::darAlta()
{
	string dato;
	Nodo *frente = NULL;
	Nodo *fin = NULL;
	do
	{
		cout << "...MENU...\n";
		cout << "1. Registro de vendedores" << endl;
		cout << "2. Ver vendedores" << endl;
		cout << "3. Eliminar" << endl;
		cout << "4. Salir" << endl;
		cout << "Opcion: ";
		cin >> opc;
		switch (opc)
		{
		case 1:
			cout << "\nRegistro de vendedores: ";
			cin >> dato;
			insertarCola(frente, fin, dato);
			break;
		case 2:
			cout << "\nMostrando el total de vendedores: \n";
			mostrarcola(frente);
			cout << "\n";
			system("pause");
			break;
		case 3:
			cout << "Ingresa el nombre del vendedor a eliminar: ";
			cin >> dato;
			suprimirCola(frente, fin, dato);
			break;
		}
		system("cls");
	} while (opc != 4);
}
// funcion cambio de auto de la clase jefe------------------------------------
void jefe::cambiarCoche()
{
	cout << "\n"
			"\t"
			"--Automovil Antiguo---"
		 << endl;
	cout << "Matricula: " << matricula << endl;
	cout << "Marca: " << marca << endl;
	cout << "Modelo: " << modelo << endl;
	cout << "\nIngresa la matricula: ";
	cin >> matricula;
	cout << "Ingresa la marca: ";
	cin >> marca;
	cout << "Ingresa el modelo: ";
	cin >> modelo;
	cout << "\n"
			"\t"
			"--Automovil Nuevo---"
		 << endl;
	cout << "Matricula: " << matricula << endl;
	cout << "Marca: " << marca << endl;
	cout << "Modelo: " << modelo << endl;
}
// funcion para imprimir los datos de la clase jefe-----------------------------
void jefe::imprimir()
{
	cout << "1. Cambiar de coche" << endl;
	cout << "2. Cambiar secretario" << endl;
	cout << "3. Ver vendedores" << endl;
	cout << "4. Mostrar aumento de salario" << endl;
	cout << "5. Mostrar" << endl;
	cout << "Que deseas consultar: ";
	cin >> opc;
	switch (opc)
	{
	case 1:
		jefe::cambiarCoche();
		break;
	case 2:
		jefe::cambiarSecre();
		break;
	case 3:
		jefe::darAlta();
		break;
	case 4:
		jefe::aumentoAnt();
		break;
	case 5:
		cout << "Su nombre es: " << nombre << endl;
		cout << "Apellido: " << apellido << endl;
		cout << "DNI: " << DNI << endl;
		cout << "Telefono fijo: " << telefono << " " << endl;
		cout << "Nombre del supervisor: " << supervisor << endl;
		break;
	}
}
// funcion menu------------------------------------------------------------------------------------------------------------------------------------------------------------
void menu()
{
	// arreglo tipo puntero para instanciar clases-----------------------------------
	empleado *ref[10];
	do
	{
		cout << "1. Empleado" << endl;
		cout << "2. Secretario" << endl;
		cout << "3. Vendedor" << endl;
		cout << "4. Jefe de zona" << endl;
		cout << "5. Salir" << endl;
		cout << "Ingresa la opcion a realizar: ";
		cin >> opc;
		switch (opc)
		{
		// instanciamiento de clases-------------------------------------------------
		case 1:
			ref[0] = new empleado("Jose", "Enriquez", "556124", "Calle_Flores,Num_8", "Juan", "55468752", 2, 200);
			ref[0]->imprimir();
			break;
		case 2:
			ref[1] = new secretario("Mario", "Garcia", "556322", "Calle_margarita,Num_9", "Juan", "552364987", 5, 400, "Juridico", 552314);
			ref[1]->imprimir();
			break;
		case 3:
			ref[2] = new vendedor("Rodolfo", "Guzman", "556231", "Calle_Rosas,Num_7", "Juan", "591214789", 10, 600, "njh-gd-sd", "Nissan", "Tsuru", "vendedor_general", 55621487, 600);
			ref[2]->imprimir();
			break;
		case 4:
			ref[3] = new jefe("Raul", "Martinez", "556398", "Calle_Manzana,Num_8", "Luis", "55987632", 6, 900, "njk-ew-21", "Chevrolet", "Camaro", "Jefe_de_zona", "Juridico");
			ref[3]->imprimir();
			break;
		}
		system("pause");
		system("cls");
	} while (opc != 5);
}
int main()
{
	// declaracion de la funcion menu--------------------------------------------
	menu();
	return 0;
}
// para insertar datos a la cola-------------------------------------------------
void insertarCola(Nodo *&frente, Nodo *&fin, string n)
{
	Nodo *nuevo_nodo = new Nodo();
	nuevo_nodo->dato = n;
	nuevo_nodo->siguiente = NULL;
	if (cola_vacia(frente))
	{
		frente = nuevo_nodo;
	}
	else
	{
		fin->siguiente = nuevo_nodo;
	}
	fin = nuevo_nodo;
}
// funcion para determinar la cola vacia-----------------------------------------
bool cola_vacia(Nodo *frente)
{
	return (frente == NULL) ? true : false;
}

void mostrarcola(Nodo *aux)
{
	while (aux != NULL)
	{
		cout << "Nombre de cliente: " << aux->dato << endl;
		aux = aux->siguiente;
	}
}
// quitar elementos de la cola---------------------------------------------------
void suprimirCola(Nodo *&frente, Nodo *&fin, string &n)
{
	n = frente->dato;
	Nodo *aux = frente;

	if (frente == fin)
	{
		frente = NULL;
		fin = NULL;
	}
	else
	{
		frente = frente->siguiente;
	}
	delete aux;
}