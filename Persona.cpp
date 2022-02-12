#include <iostream>
using namespace std;
class Persona{
	
	protected : string nombres, apellidos, direccion;
				int telefono;
				
	protected :
			Persona(){
			}
			Persona(string nom,string ape,string dir,int tel){
				nombres=nom;
				apellidos=ape;
				direccion=dir;
				telefono=tel;
			}
			
	void mostrar();
};
