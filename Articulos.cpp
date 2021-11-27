#include "Articulos.hpp"
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <cmath>
#include <string>
using namespace std;

Articulos::Articulos(){
	
}

Articulos::Articulos(string n,string t,int p, int c, string d, string ca){
	this->nombre=n;
	this->tallas=t;
	this->precio=p;//int
	this->cantidad=c;//int
	this->descuento=d;
	this->categoria=ca;	
}

string Articulos::getNombre(){
	return this->nombre;
	
}
void Articulos::setNombre(string n){
	this->nombre=n;
}

string Articulos::getTallas(){
	return this->tallas;
	
}
void Articulos::setTallas(string t){
	this->tallas=t;
}
//
int Articulos::getPrecio(){
	return this->precio;
	
}
void Articulos::setPrecio(int p){
	this->precio=p;
}

int Articulos::getCantidad(){
	return this->cantidad;
	
}
void Articulos::setCantidad(int c){
	this->cantidad=c;
}
//
string Articulos::getDescuento(){
	return this->descuento;
	
}
void Articulos::setDescuento(string d){
	this->descuento=d;
}

string Articulos::getCategoria(){
	return this->categoria;
	
}
void Articulos::setCategoria(string ca){
	this->categoria=ca;
}