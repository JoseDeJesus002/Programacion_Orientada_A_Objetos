#include <iostream>
#include <stdlib.h>
using namespace std;
class Rectangulo{
private:
int al;
int ba;
public:
Rectangulo();
void setRectangulo(int,int);//metodo set
int getRectanguloa();//metodo get
int getRectangulob();//metodo get
};
//constructor
Rectangulo::Rectangulo(){
}
//establezco valores a los atributos
void Rectangulo::setRectangulo(int a,int b){
al = a;
ba = b;
}
//establecer el metodo get
int Rectangulo::getRectanguloa(){
return al;
}
int Rectangulo::getRectangulob(){
return ba;
}
int main(){
Rectangulo R1;
R1.setRectangulo(15,7);
cout<<"la base del rectangulo es: "<<R1.getRectangulob()<<endl;
cout<<"LA ALTURA DEL rectangulo ES: "<<R1.getRectanguloa()<<endl;
system ("pause");
}