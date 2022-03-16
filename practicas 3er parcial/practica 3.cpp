#include <iostream>
#include <cstring>
#include <conio.h>
using namespace std;

class persona{
      public: //declaracion de METODOS en tipo publico
             persona(char*n){strcpy(nombre,n);}
             persona(const persona &p); //declaramos el constructor convirtiendo el valor del puntero
             virtual  void vernombre(){
             	
			 };
             //char *Vernombre(char *n){strcpy(n,nombre);
             //return n;}
             protected: //declaracion de ATRIBUTOS en publico
                       char nombre[30];
};
//clases hijas´´
class empleado:public persona{ //declaracion de herencia
      public:
             empleado(const char*n):persona(nombre){
			 	strcpy(nombre,n);}
             empleado(const empleado &e);
             char *vernombre(char *n) {strcpy(n,"Empe ");strcat(n,nombre);return n;}
};
class estudiante:public persona{
public:
       estudiante(const char*n):persona(nombre){strcpy(nombre,n);}
       estudiante(const estudiante &e);
       void vernombre(){strcpy(nombre,n); strcat(n,nombre); return n;}
       
       
};

persona::persona(const persona &p){
strcpy(nombre, p.nombre);
}

int main(){
 system("cls");
 
 estudiante p1("jose");
 empleado p2("aro");
 empleado p3("has");
 
 p1.vernombre();
 p2.vernombre();
 p3.vernombre();   
getch();
return 0;
}


