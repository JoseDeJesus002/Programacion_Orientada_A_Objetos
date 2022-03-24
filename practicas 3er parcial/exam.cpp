#include <iostream>
using namespace std;

class empleado 
{
	protected:
		string nombre,apellidos,DNI,direccion,supervisor;
		int anios_ant,telefono_cont,salario;
	public:
		//empleado(string,string,string,string,string,int,int,int);
	virtual void setcambiar_sup(string supervisor_){
	supervisor=supervisor_;
	}
	virtual void setincremento_sal(int salario_){
	salario=salario_;
	}
	virtual void mostrar(){
	cout<<supervisor<<endl;
	cout<<salario<<endl;
	}
	string getcambiar_sup(){
	return supervisor;
	}
	int getincremento_sal(){
	return salario;
	}
};

class vendedor : public empleado{
private:
string area_venta;
float porcentaje_co;
float salario;
public:
void setsueldo_incre();
void setcambio_choche();
void mostrar_clientes();
void setnuevo_cli();
void seteliminar_cli();
int s
};

class jefe_de_zona:public empleado
{
	private:
		string secre,vendedores,marca,modelo;
		int matricula;
	
	public:
	void setcambiar_sup(string secre_){
	secre=secre_;
	}

	void setincremento_sal(int salarios){
	salario=salarios;
	}
	
	void mostrar(){
	cout<<secre<<endl;
	cout<<salario<<endl;
	}
	
	string getcambiar_sup(){
	return secre;
	}
	int getincremento_sal(){
	return salario;
	}
	};
	

void menu(){
	int opc;
	empleado e1;
	jefe_de_zona j1;
	cout<<"ingresa la op: ";
	cin>>opc;
	do{
		switch(opc){
			case 1:
				e1.setcambiar_sup("rodolfo");
				e1.setincremento_sal(5000);
				e1.getincremento_sal();
				e1.mostrar();
			break;
			case 2:
				
				j1.setcambiar_sup("mario");
				j1.setincremento_sal(5600);
				j1.getincremento_sal();
				j1.mostrar();
			break;
		}
	system("pause");
	}while(opc!=3);
}
int main(){
	
	menu();
	
	return 0;
}


