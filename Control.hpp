#ifndef CONTROL_HPP
#define CONTROL_HPP
#include <stdlib.h>
#include <time.h>
#include <cmath>
#include <string>
#include <vector>
#include "Articulos.hpp"
class Control{
	
	private:
	vector <Articulos*> listaArticulos;
	public:
	Control();
	~Control();
	void setVector(vector<Articulos*>);
	vector<Articulos*> getVector();
	void agregarArticulos(Articulos*);
	void modificarArticulos(int,int);
	void eliminarArticulos(int);
	void imprimir();
	void imprimirCategoria();
	void imprimirCategoria2();
	void imprimirCategoria3();
	void imprimirporCategoria();
	void imprimirporTalla();
	void precioCategoriaDescuento();
};

#endif