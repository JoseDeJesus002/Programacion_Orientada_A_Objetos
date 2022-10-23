#include<iostream>
#include<stdio.h>
using namespace std;

//declara clase

class persona{

//declaro atrivutos

private:

string nombre;
int edad;

//declaro metodos

public:

//constructor (sirve para inizializar el atributo)

persona(string,int);
void presentarse();

};

//desarrollo metodo constructor

persona :: persona(string pnombre, int pedad){

nombre=pnombre;
edad=pedad;

}

//desarrollo metodo presentarse

void persona :: presentarse(){
cout<<"hola soy: "<<nombre<<" y tengo "<<edad<<" anos"<<endl;

}


int main(){

persona p1("carlos",34);
p1.presentarse();
system("pause");
return 0;

}