#include "Articulos.hpp"
#include "Control.hpp"
#include <vector>
#include <string>
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>

using namespace std;
Control::Control(){
}

Control::~Control(){
	for(int i=0;i<this->listaArticulos.size();i++){
		delete this->listaArticulos[i];
	}
}

void Control::setVector(vector<Articulos*>lista){
	this->listaArticulos=lista;
}
vector <Articulos*> Control::getVector(){
	return this->listaArticulos;
}
void Control::agregarArticulos(Articulos *p){
	this->listaArticulos.push_back(p);
}

//Modificar
void Control::modificarArticulos(int menu,int pos){
	//nombre
	if(menu==1){
		string nom;
		cout<<"Ingrese nuevo nombre:  ";
		cin>>nom;
		
		Articulos *p=this->listaArticulos.at(pos);
		p->setNombre(nom);
		cout<<"Modifico exitosamente"<<endl;
	}
	//tallas
	if(menu==2){
		string tal;
		cout<<"Ingrese nueva talla:  ";
		cin>>tal;
		Articulos *p=this->listaArticulos.at(pos);
		p->setTallas(tal);
		cout<<"modifico exitosamente"<<endl;
	}
	//precio
	if(menu==3){
		int pre;
		cout<<"Ingrese nuevo precio:  ";
		cin>> pre;
		Articulos *p=this->listaArticulos.at(pos);
		p->setPrecio(pre);
		cout<<"modifico exitosamente"<<endl;
	}
	//cantidad
	if(menu==4){
		int can;
		cout<<"Ingrese nuevo cantidad:  ";
		cin>> can;
		
		Articulos *p=this->listaArticulos.at(pos);
		p->setCantidad(can);
		cout<<"modifico exitosamente"<<endl;
	}
	
	//descuento
	if(menu==5){
		string des;
		cout<<"Ingrese nuevo descuento:  ";
		cin>>des;
		
		Articulos *p=this->listaArticulos.at(pos);
		p->setDescuento(des);
		cout<<"Modifico exitosamente"<<endl;
	}
	//categoria
	if(menu==6){
		string cat;
		cout<<"Ingrese nueva categoria:  ";
		cin>>cat;
		Articulos *p=this->listaArticulos.at(pos);
		p->setCategoria(cat);
		cout<<"modifico exitosamente"<<endl;
	}
	
}

void Control::imprimir(){

	for(int i=0;i<this->listaArticulos.size();i++){
		Articulos *p=this->listaArticulos[i];
		cout<<"Articulos: "<<i <<endl;
		cout << "\n";
		cout<<"Nombre: "<< p->getNombre()<<endl;
		cout<<"Tallas: "<<p->getTallas()<<endl;
		cout<<"Precio:"<<p->getPrecio()<<endl;
		cout<<"Cantidad: "<<p->getCantidad()<<endl;
		cout<<"Descuento: "<<p->getDescuento()<<endl;
		cout<<"Categoria: "<<p->getCategoria()<<endl;
	}
}


void Control::eliminarArticulos(int pos){
	delete this->listaArticulos[pos];
	listaArticulos.erase(listaArticulos.begin()+pos);
}

void Control::imprimirCategoria(){//
	vector <string> listaCat;
	int c=0;
	for(int i=0;i<this->listaArticulos.size();i++){
		Articulos *p=this->listaArticulos[i];
		listaCat.push_back(p->getCategoria());
		
	}
	
	vector <string> listacat1;
	listacat1.push_back(listaCat[0]);
	for(int i=1;i<listaCat.size();i++){
		for(int k=0;k<listacat1.size();k++){
			if(listaCat[i]!=listacat1[k]){
				listacat1.push_back(listaCat[i]);
			}
		}
		
	}
	
	for(int i=0;i<listacat1.size();i++){
		cout<<"Categorias: "<<i<<" : "<<listacat1[i]<<endl;//i
		
		if(listacat1[i] == "shoes"){
			cout << "\n";
			cout << "\n";
			cout << "C A T E G O R I A (shoes)";
			
			cout << "\n";
		}
	}
	


	for(int i=0;i<this->listaArticulos.size();i++){
		Articulos *p=this->listaArticulos.at(i);
		for(int j=0;j<listacat1.size();j++){
			if(p->getCategoria()==listacat1[j]){
				//cout<<"Categoria: "<<listacat1[i]<<"-";
				cout << "\n";
				cout<<"Articulos: "<<endl;
				cout<<"Nombre: "<< p->getNombre()<<endl;
				cout<<"Tallas: "<<p->getTallas()<<endl;
				cout<<"Precio:"<<p->getPrecio()<<endl;
				cout<<"Cantidad: "<<p->getCantidad()<<endl;
				cout<<"Descuento: "<<p->getDescuento()<<endl;
				cout<<"Categoria: "<<p->getCategoria()<<endl;
			}
		}
	}

}

void Control::imprimirCategoria2(){//
	vector <string> listaCat;
	int c=0;
	for(int i=0;i<this->listaArticulos.size();i++){
		Articulos *p=this->listaArticulos[i];
		listaCat.push_back(p->getCategoria());
		
	}
	
	vector <string> listacat1;
	listacat1.push_back(listaCat[0]);
	for(int i=1;i<listaCat.size();i++){
		for(int k=0;k<listacat1.size();k++){
			if(listaCat[i]!=listacat1[k]){
				listacat1.push_back(listaCat[i]);
			}
		}
		
	}
	
	for(int i=0;i<listacat1.size();i++){
		cout<<"Categorias: "<<i<<" : "<<listacat1[i]<<endl;//i
		
		if(listacat1[i] == "hoodies"){
			
			cout << "\n";
			cout << "\n";
			cout << "C A T E G O R I A (hoodies)";
			cout << "\n";
		}
	}
	


	for(int i=0;i<this->listaArticulos.size();i++){
		Articulos *p=this->listaArticulos.at(i);
		for(int j=0;j<listacat1.size();j++){
			if(p->getCategoria()==listacat1[j]){
				//cout<<"Categoria: "<<listacat1[i]<<"-";
				cout << "\n";
				cout<<"Articulos: "<<endl;
				cout<<"Nombre: "<< p->getNombre()<<endl;
				cout<<"Tallas: "<<p->getTallas()<<endl;
				cout<<"Precio:"<<p->getPrecio()<<endl;
				cout<<"Cantidad: "<<p->getCantidad()<<endl;
				cout<<"Descuento: "<<p->getDescuento()<<endl;
				cout<<"Categoria: "<<p->getCategoria()<<endl;
			}
		}
	}

}

void Control::imprimirCategoria3(){//
	vector <string> listaCat;
	int c=0;
	for(int i=0;i<this->listaArticulos.size();i++){
		Articulos *p=this->listaArticulos[i];
		listaCat.push_back(p->getCategoria());
		
	}
	
	vector <string> listacat1;
	listacat1.push_back(listaCat[0]);
	for(int i=1;i<listaCat.size();i++){
		for(int k=0;k<listacat1.size();k++){
			if(listaCat[i]!=listacat1[k]){
				listacat1.push_back(listaCat[i]);
			}
		}
		
	}

	for(int i=0;i<listacat1.size();i++){
		cout<<"Categorias: "<<i<<" : "<<listacat1[i]<<endl;//i
		
		if(listacat1[i] == "t-shirts" || listacat1[i] == "jackets"){
			cout << "\n";
			cout << "\n";
			cout << "C A T E G O R I A (t-shirts o jackets)";
			cout << "\n";
		}
	}
	


	for(int i=0;i<this->listaArticulos.size();i++){
		Articulos *p=this->listaArticulos.at(i);
		for(int j=0;j<listacat1.size();j++){
			if(p->getCategoria()==listacat1[j]){
				cout << "\n";
				cout<<"Articulos: "<<endl;
				cout<<"Nombre: "<< p->getNombre()<<endl;
				cout<<"Tallas: "<<p->getTallas()<<endl;
				cout<<"Precio:"<<p->getPrecio()<<endl;
				cout<<"Cantidad: "<<p->getCantidad()<<endl;
				cout<<"Descuento: "<<p->getDescuento()<<endl;
				cout<<"Categoria: "<<p->getCategoria()<<endl;
			}
		}
	}

}

void Control::imprimirporCategoria(){
	
	for(int i=0;i<this->listaArticulos.size();i++){
		Articulos *p=this->listaArticulos[i];
		if(p->getCategoria() == "shoes"){
			cout << " * * * * * * Categoria Shoes: * * * * * * *";
			cout << "\n";
			cout<<"Articulos: "<<i <<endl;
			cout << "\n";
			cout<<"Nombre: "<< p->getNombre()<<endl;
			cout<<"Tallas: "<<p->getTallas()<<endl;
			cout<<"Precio:"<<p->getPrecio()<<endl;
			cout<<"Cantidad: "<<p->getCantidad()<<endl;
			cout<<"Descuento: "<<p->getDescuento()<<endl;
			cout<<"Categoria: "<<p->getCategoria()<<endl;
		}
		
		if(p->getCategoria() == "hoodies"){
			cout << "\n";
			cout << " * * * * * * Categoria hoodies: * * * * * * *";
			cout << "\n";
			cout<<"Articulos: "<<i <<endl;
			cout << "\n";
			cout<<"Nombre: "<< p->getNombre()<<endl;
			cout<<"Tallas: "<<p->getTallas()<<endl;
			cout<<"Precio:"<<p->getPrecio()<<endl;
			cout<<"Cantidad: "<<p->getCantidad()<<endl;
			cout<<"Descuento: "<<p->getDescuento()<<endl;
			cout<<"Categoria: "<<p->getCategoria()<<endl;
		}
		
		if(p->getCategoria() == "t-shirts" || p->getCategoria() == "jackets"){
			cout << "\n";
			cout << " * * * * * * t-shirts o jackets: * * * * * * *";
			cout << "\n";
			cout<<"Articulos: "<<i <<endl;
			cout << "\n";
			cout<<"Nombre: "<< p->getNombre()<<endl;
			cout<<"Tallas: "<<p->getTallas()<<endl;
			cout<<"Precio:"<<p->getPrecio()<<endl;
			cout<<"Cantidad: "<<p->getCantidad()<<endl;
			cout<<"Descuento: "<<p->getDescuento()<<endl;
			cout<<"Categoria: "<<p->getCategoria()<<endl;
		}
	}	
}
void Control::imprimirporTalla(){
	for(int i=0;i<this->listaArticulos.size();i++){
		Articulos *p=this->listaArticulos[i];
		cout << " * * * * * * Tallas: * * * * * * *";
		cout << "\n";
		cout<<"Articulos: "<<i <<endl;
		cout << "\n";
		cout<<"Nombre: "<< p->getNombre()<<endl;
		cout<<"Tallas: "<<p->getTallas()<<endl;
		cout<<"Precio:"<<p->getPrecio()<<endl;
		cout<<"Cantidad: "<<p->getCantidad()<<endl;
		cout<<"Descuento: "<<p->getDescuento()<<endl;
		cout<<"Categoria: "<<p->getCategoria()<<endl;
	}
}

void Control::precioCategoriaDescuento(){
	for(int i=0;i<this->listaArticulos.size();i++){
		Articulos *p=this->listaArticulos[i];
			cout<<"Precio:"<<p->getPrecio()<<endl;	
	}
}
