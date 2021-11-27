#ifndef ARTICULOS_H
#define ARTICULOS_H
#include <stdlib.h>
#include <time.h>
#include <cmath>
#include <string>
class Articulos
{
	private:
	string nombre;
	string tallas;
	int precio;
	int cantidad;
	string descuento;
	string categoria;
	
	public:
	Articulos();
	Articulos(string,string,int, int, string, string);
	
	string getNombre();
	void setNombre(string);
	//
	string getTallas();
	void setTallas(string);
	//
	int getPrecio();
	void setPrecio(int);
	//
	int getCantidad();
	void setCantidad(int);
	//
	string getDescuento();
	void setDescuento(string);
	//
	string getCategoria();
	void setCategoria(string);
};

#endif