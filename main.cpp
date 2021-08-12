#include <iostream>
#include <math.h>

using namespace std; 

//Funciones
int menu(){
	int opcion; 
	
	system ("cls");
	
	cout<<"**************"<<endl;
	cout<<"*                MENU                    *"<<endl;
	cout<<"*  1. Covertir metros a centimetros      *"<<endl;
	cout<<"*  2. Covertir centimetros a kilometros  *"<<endl;
	cout<<"*  3. Covertir millas a pies             *"<<endl;
	cout<<"*  4. Salir                              *"<<endl;
	cout<<"**************"<<endl;
	cout<<"  Seleccione la opcion: ";
	cin>>opcion;
	
	return opcion;
}

//Procedimientos

class Formulas{
	public: 
	
		void opcion1(){
			system ("cls");
			
			int metros, centimetros; 
			
			cout<<"****************"<<endl;
			cout<<"* 1.-Convertir metros a centimetros   **"<<endl;
			cout<<"****************"<<endl;
			cout<<"Cuantos metros desea convertir: ";
			cin>>metros;
			centimetros = metros * 100
			cout<<metros<<" metros equivale a: "<<centimetros<<" centimetros "<<endl;
			
		system ("pause");
		}
	
	
		void opcion2(){
			system ("cls");
			
			int centimetros, kilometros; 
			cout<<"****************"<<endl;
			cout<<"* 2.-Convertir kilometros a centrimetros *"<<endl;
			cout<<"****************"<<endl;
			cout<<"Cuantos kilometros desea convertir: ";
			cin>>kilometros;
			centimetros = kilometros / 100000
			cout<<"kilometros"<<" kilometros equivale a: "<<centimetros<<"centimetros"<<endl;
			
		system ("pause");
		}
		
		
		
		void opcion3(){
			system ("cls");
			
			int millas, pies; 
			cout<<"****************"<<endl;
			cout<<"** 3.-Convertir millas a pies          ***"<<endl;
			cout<<"****************"<<endl;
			cout<<"Cuantos millas desea convertir: ";
			cin>>millas;
			pies = millas * 5280
			cout<<"millas"<<" millas equivale a: "<<pies<<"pies"<<endl;
			
		system ("pause");
		}	
			
			
};

int main(int argc, char** argv) {
	int opt;
	Formulas f;
	
	while (opt!=5){
		opt = menu();
		
		switch(opt){
			
			case 1: 
				opcion1();
				break;
			case 2: 
				opcion2();
				break;
			case 3:  
				opcion3();
				break;
			case 4: 
			
				break;
			default: 
				cout<<"Opcion no valida"<<endl;
				cout<<"\n";
				system ("pause");
		}
		
	}
	
	return 0;

