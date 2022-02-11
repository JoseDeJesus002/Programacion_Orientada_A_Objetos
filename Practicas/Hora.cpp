#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

class tiempo
{
	
	private:
		int hora,minutos,segundos;
		
	public:
		tiempo(int,int,int);
		tiempo(long);
		void mostrar();
};

tiempo::tiempo(int _hora, int _minutos, int _segundos)
{
	hora=_hora;
	minutos=_minutos;
	segundos=_segundos;
}

tiempo::tiempo(long Tiempo)
{
 hora=Tiempo/3600;
 Tiempo %=3600;
 minutos =Tiempo/60;
 segundos=Tiempo % 60;
}
void tiempo::mostrar()
{
	cout<<"la hora se muestra: "<<"Hora"<<":"<<"Min."<<":"<<"Seg."<<endl;
	cout<<"La hora es: "<<hora<<":"<<minutos<<":"<<segundos<<endl;
}

int main()
{
	int f;
	cout<<"Ingresa los segundos a convertir: ";
	cin>>f;
	tiempo time_(16,40,30);
	tiempo f1(f);
	f1.mostrar();
	cout<<"\n"<<endl;
	time_.mostrar();
	system("pause");
	return 0;
}