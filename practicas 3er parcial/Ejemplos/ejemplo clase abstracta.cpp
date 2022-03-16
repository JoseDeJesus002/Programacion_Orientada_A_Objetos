#include <iostream>
using namespace std;

class a{
	public:	
		virtual void show()=0;//funcion abstracta
};


class b:public a{
	public:
		void show(){
		cout<<"muestra la b:"<<endl;
		}
};

class c:public a{
	public:
		void show(){
			cout<<"muestra la c:"<<endl;
		}
};


int main(){
	a* datos[]={new b(),new c()}; //instanciando b y c
	
	for(int i=0; i<3; i++){
		datos[i]->show();
	}
	
	system("pause");
	return 0;
}