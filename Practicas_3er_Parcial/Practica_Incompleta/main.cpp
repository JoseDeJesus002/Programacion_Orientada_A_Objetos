#include <iostream>
#include<conio.h>
#include"empleado.hpp"
//#include"secretario.hpp"

using namespace std;

int main(){
	empleado e1("Jose","sdsdsd","sdsds","sdsds",2121,4613213,220,"559862");
	secretario s1("Luis","Cruz","12345","tijuana",5,123456789,50.5,"2525","numero1","kskjduiwejkd");
	vendedor v1("lol","dsdsd","fdfdfd", "dfsdsd",20,51050,20.2,"54654","654654","sdsds","dsdsds","fsfdfdf", 50.5);
	e1.Imprimir();
	s1.Imprimir();
	s1.IncrementoAnt();
	v1.Imprimir();
	v1.IncrementoAnt();
    getch();
    return 0;
}

