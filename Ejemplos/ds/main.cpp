#include<iostream>
#include<conio.h>
#include"empleado.hpp"
#include"secretario.hpp"

using namespace std;

int main(){

	
	secretario s1("Luis","Cruz","12345","tijuana",5,123456789,50.5,"2525","numero1","kskjduiwejkd");
	
	s1.Imprimir();

    getch();
    return 0;
}
