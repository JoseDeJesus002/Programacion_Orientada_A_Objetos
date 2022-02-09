#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;

class calculadora
{
	private: 
	double num,num2;
	
	public:
		~calculadora();
		calculadora(double,double);
		void sum();
		void rest();
		void mostrar();
};
		
calculadora::calculadora(double _num1,double numh)
{
	num=_num1;
	num2=numh;
}
calculadora::~calculadora()
{
}
void calculadora::sum()
{    
	double suma;
	suma=num+num2;
	cout<<"La suma es: "<<suma<<endl;               
}
void calculadora::rest()
{
	double resta;
	resta=num-num2;
	cout<<"La resta es: "<<resta<<endl;
}   
void calculadora::mostrar()
{
	cout<<num<<endl;
}	

int main (){                
   char oper;
   double k,i,h;
   int m;
   cout<<"Ingresa el operador: ";
	cin>>m;
   
   while (m!=5){
	printf("Bievenido");
   	printf("1 suma\n");
   	printf("2 Resta\n");
   	scanf("%d",&m);
   	
   	if(m!=5)
	   {
	   	printf("Primer valor");
	   	scanf("%d",&k);
	   	printf("segundo valor");
	   	scanf("%d",&i);
	    calculadora w(k,i);
	   	calculadora q(k,i);
	   }
	switch(m){
		case 1:	
			q.sum();
			break;
		case 2:
			w.rest();
			break;
			
	}
   }
   
   
   /*switch(oper)
   {
   	case '+':
   	cout<<"Ingresa el numero 1: ";
   	cin>>i;
   	cout<<"Ingresa el numero 2: ";
   	cin>>h;
	calculadora c1(i,h);
	c1.sum();
	c1.mostrar();	
	break;
	case '-':
    cout<<"Ingresa el numero 1: ";
   	cin>>i;
   	cout<<"Ingresa el numero 2";
   	cin>>h;
	calculadora c1(i,h);
	c1.rest();
	c2.mostrar();		
   */
   
   return 0; 
 }
calculadora w(k,i);
calculadora q(k,i);