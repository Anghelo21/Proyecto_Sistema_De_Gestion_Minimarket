#include <iostream>
#include "Persona.h"
using namespace std;
int main() {
	int op = 0;
	while(op!=2){
		cout<<"---------MiniMarket---------"<<endl;
		cout<<"1) Gestion de clientes"<<endl;
		cout<<"2) Salir"<<endl;
		cout<<"Elija una opcion"<<endl;
		cin>>op;
		switch(op){
			case 1:
				gestionClientes();
				break;
			case 2:
				cout<<"Saliendo..."<<endl;
				break;
			default:
				cout<<"Opcion invalida"<<endl;
		}
	}
	return 0;
}