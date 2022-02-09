#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;

class sumaa
{
	private: 
	float num,num2;
	
	public:
		~sumaa();
		sumaa(float,float);
		void sum();
		void mostrar();
};
class restaa
{
	private: 
	float num1,num2_;
	
	public:
		~restaa();
		restaa(float,float);
		void rest();
		//void mostrar();
};
class multiplicacion
{
	private: 
	double num1_,_num2;
	
	public:
		~multiplicacion();
		multiplicacion(float,float);
		void mult();
		//void mostrar();
};
class division
{
	private: 
	float _num1,num3;
	
	public:
		~division();
		division(float,float);
		void div();
		//void mostrar();
};

//suma		
sumaa::sumaa(float _num1,float numh)
{
	num=_num1;
	num2=numh;
}
sumaa::~sumaa()
{
}
void sumaa::sum()
{    
	float suma;
	suma=num+num2;
	cout<<"La suma es: "<<suma<<endl;               
}

//resta
restaa::restaa(float numero1,float numero2)
{
	num1=numero1;
	num2_=numero2;
}
restaa::~restaa()
{
	
}
void restaa::rest()
{
	float resta;
	resta=num1-num2_;
	cout<<"La resta es: "<<resta<<endl;
} 

//multiplicacion  
multiplicacion::multiplicacion(float numero1_,numero2_)
{
	num1_=numero1_;
	_num2=numero2_;
}
multiplicacion::~multiplicacion(){
}
void multiplicacion::mult()
{
float multipli;
multipli=num1_*_num2;
	cout<<"La multipliacion es: "<<multipli<<endl;	
}

//division

//accionar	

int main (){                
   char oper;
   int k,i,h;
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
	   }
	if(m==1){
		sumaa s1(k,i);
		s1.sum();
	}
	if(m==2){
		restaa r1(k,i);
		r1.rest();
	}
   
   return 0; 
 }
}