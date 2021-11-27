#include <iostream>
#include "Articulos.hpp"
#include "Control.hpp"
#include <string>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int menu();
void submenu();
using namespace std;

int submenu2(){
	
	while(true){
	cout << "	MENU	" <<endl;
	cout << " 1.Modificar Nombre" << endl;
	cout << " 2.Modificar Tallas" << endl;
	cout << " 3.Modificar Precio" << endl;
	cout << " 4.Modificar Cantidad" << endl;
	cout << " 5.Modificar Descuento" << endl;
	cout << " 6.Modificar Categoria" << endl;
	cout << " 7.Regresar" << endl;
	cout << "* * * * * * * * * * * * * * * * *" << endl;
	cout << "Que posicion desea modificar: " << endl;
	int opcion;
	cin>>opcion;
	if(opcion > 0&& opcion < 8)
		return opcion;
	}
}

int menu(){
	
		int opcion = 0;
		cout << "\n";
		cout << "* * * * * * * * * * * MENU * * * * * *  * * * * *" <<endl;
		cout << "*	1. Agregar Categorias 			*"<<endl;
		cout << "*	2. Mantenimiento de Articulos 		*" <<endl; 
		cout << "*	3. Estadisticas Generales 		*" << endl;
		cout << "*	4. Busqueda por categoria y talla  	*" <<endl; 
		cout << "*	5. Salir!!!				*" <<endl;
		cout << "* * * * * * * * * * * * * * * * * * * * * * * * *" <<endl; 
		cout << " Ingrese la opcion que desee: " <<endl; 
		cin>> opcion; 
		cout << "\n";

	return opcion;
}

int main() {//int argc, char** argv
Control* ht=new Control();
	int opcion = 0;
	while ((opcion = menu())!=5){
		switch (opcion){
			case 1:{
				cout << "*******CATEGORIAS AGREGADAS A LA TIENDA*******" << endl;
				cout << "\n";
				ht->imprimirCategoria();
				break;
			}
			case 2:{
				int opcion = 0;
				cout << "* * * * * MENU * * * * *" <<endl;
				cout << "*	1. Agregar Articulo 	"<<endl;
				cout << "*	2. Modificar Articulo 	" <<endl; 
				cout << "*	3. Eliminar Articulo 	" <<endl; 
				cout << "*	4) Salir       " <<endl; 
				cout << "* * * * * * *  * * * * * " <<endl; 
				cout << " Ingrese la opcion que desee: " <<endl; 
				 
				cin>> opcion; 
				cout << "\n";
		
				switch(opcion){
					case 1:{
						string nombre;
						string tallas;
						int precio;
						int cantidad;
						string descuento;
						string categoria;
									
						cout<<"Ingrese nombre:  ";
						cin>>nombre;
						cout<<"Ingrese tallas: ";
						cin>>tallas;
									
						cout<<"Ingrese precio: ";
						cin>>precio;
						cout<<"Ingrese cantidad: ";
						cin>>cantidad;
									
						cout<<"Ingrese descuento: ";
						cin>>descuento;
									
						cout<<"Ingrese categoria: ";
						cin>>categoria;
									
						ht-> agregarArticulos(new Articulos(nombre,tallas,precio,cantidad,descuento,categoria));
						cout << "\n";
						cout<<"CREADO"<<endl;					
						break;
					}
					case 2:{
						int pos;
						cout<<"Posicion a modificar: ";
						cin>>pos;
						int main1=0;
						while(main1!=7){
							switch(main1=submenu2()){
								case 1:{
									ht->modificarArticulos(1,pos);
									break;
								}
								case 2:{
									ht->modificarArticulos(2,pos);	
									break;
								}
								case 3:{
									ht->modificarArticulos(3,pos);
									break;
								}
								case 4:{
									ht->modificarArticulos(4,pos);
									break;
								}
								case 5:{
									ht->modificarArticulos(5,pos);
									break;
								}	
								case 6:{
									ht->modificarArticulos(6,pos);
									break;
								}											
								case 7:{
									cout<<"regreso"<<endl;
									break;
								}
							}// fin switch
						}//fin while
						break;
					}
					case 3:{
						int pos;
						cout <<"posicion a eliminar: ";
						cin>>pos;
						ht->eliminarArticulos(pos);
						cout << "Articulo eliminada";
						cout << "\n";
						break;
					}
					case 4:{
						
						break;
					}
			}//fin switch
				break;
			}
			case 3:{
				cout << "A R T I C U L O S";
				cout << "\n";
				ht->precioCategoriaDescuento();

				cout << "\n";
				
				ht->imprimirCategoria();
				cout << "\n";
				
				break;
			}
			case 4:{

				int num;
				cout << "***********MENU***********"<< endl;
				cout << "1) Ver Categorias" << endl;
				cout << "2) Ver Tallas" << endl;
				cout << "**************************" << endl;
				cout << "Que desea usar: " << endl;
				
				cin >> num;
				
				if(num == 1){
					ht->imprimirporCategoria();
				}else if(num == 2){
					ht->imprimirporTalla();
				}else{
					cout << "Ha decidido no ver nada!!!";
					cout << "\n";
				}
				
				//cout << "Regresar";
				break;
			}
		}
	}		
	return 0;
}


