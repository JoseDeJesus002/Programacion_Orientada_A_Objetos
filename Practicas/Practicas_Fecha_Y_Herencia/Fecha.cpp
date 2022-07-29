#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

class fecha
{
private:
	int anio,mes,dia;
	
public:
	fecha(int, int, int);
	fecha(long);
	void mostrar();
	
};

fecha::fecha(int _anio, int _mes, int _dia)
{
	anio=_anio;
	mes=_mes;
	dia=_dia;	
}

fecha::fecha(long Fecha)
{
	anio=int(Fecha/10000);
	mes =int((Fecha-anio*10000)/100);
	dia=int(Fecha-anio*10000-mes*100);
}

void fecha::mostrar()
{
	cout<<dia<<"/"<<mes<<"/"<<anio<<endl;
}
	
int main()
{
	int fechar;
	cout<<"Bienvenido digite la fecha como el ejemplo: yyyymmdd"<<endl;
	cout<<"Digite el anio, mes y dia: ";
	cin>>fechar;
	
	fecha f1(2003,6,9);
	fecha fe(fechar);
	fe.mostrar();
	f1.mostrar();
	system("pause");
	return 0;
}