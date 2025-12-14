#include <iostream>
#include "Persona.h"
using namespace std;

Persona::Persona(){ 
	id = 0; 
	nombre = ""; 
}

Persona::Persona(int i, string n){
	id = i;
	nombre = n;
}

int Persona::getId(){ 
	return id;
}

string Persona::getNombre(){ 
	return nombre; 
}

void Persona::mostrarPersona(){
	cout << "ID: " << id << " Nombre: " << nombre << endl;
}


Cliente::Cliente() : Persona() { 
	dni = ""; 
}

Cliente::Cliente(int i, string n, string d) : Persona(i, n) {
	dni = d;
}

string Cliente::getDni() { 
	return dni; 
}

void Cliente::mostrarCliente() {
	Persona::mostrarPersona();
	cout << "DNI: " << dni << endl;
}

void registrarClientes(){
	if(totalClientes >= MAXCLIENTES) {
        cout << "No se pueden registrar más clientes.\n";  
    }else{
    	int i;
    	string n, d;
    	cout << "ID: ";
    	cin >> i;
    	cin.ignore();
		cout << "Nombre: ";
    	getline(cin,n);
    	cout << "DNI: ";
    	cin >> d;
    	clientes[totalClientes] = Cliente(i, n, d);
    	totalClientes++;
	}
}

void listarClientes(){
	if (totalClientes == 0) {
        cout << "No hay clientes registrados.\n";
    }else{
    	cout << "\n--- CLIENTES ---\n";
    	for (int i = 0; i < totalClientes; i++) {
        	cout << "Indice " << i << endl;
        	clientes[i].mostrarCliente();
        	cout << "----------------\n";
    	}
	}
}
   
void gestionClientes(){
	int op=0;
	while(op!=3){
		cout<<"------Gestion de Clientes------"<<endl;
		cout<<"1) Registrar Clientes"<<endl;
		cout<<"2) Listar Clientes"<<endl;
		cout<<"3) Volver"<<endl;
		cout<<"Elija una opcion"<<endl;
		cin>>op;
		switch(op){
			case 1:
				registrarClientes();
				break;
			case 2:
				listarClientes();
				break;
			case 3:
				cout<<"Saliendo..."<<endl;
				break;
			default:
				cout<<"Opcion invalida"<<endl;	
		}
	} 
}
