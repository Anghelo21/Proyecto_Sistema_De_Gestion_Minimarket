#ifndef PERSONA_H
#define PERSONA_H
#include <iostream>
#include <vector>
using namespace std;

class Persona{
	protected:
		int id;
		string nombre;
	public:
		Persona();
		Persona(int, string);
		int getId();
		string getNombre();
		void mostrarPersona();
};

class Cliente : public Persona{
	private:
		string dni;
	public:
		Cliente();
		Cliente(int, string, string);
		string getDni();
		void mostrarCliente();
};

void gestionClientes();

const int MAXCLIENTES = 100;
Cliente clientes[MAXCLIENTES];
int totalClientes = 0;
#endif