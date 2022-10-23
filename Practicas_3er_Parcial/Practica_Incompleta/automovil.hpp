#include<iostream>
#include<string>

using namespace std;

class automovil {
	private:
		string matricula; //identificado por la matricula, marca y modelo
		string marca;
		string modelo;
	public:
		automovil(string matricula,string marca,string modelo){
			this->matricula = matricula;
			this->marca = marca;
			this->modelo = modelo;
		}
};
