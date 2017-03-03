#include <iostream>
#include <string>

using namespace std;

class misPalabras 
{
	public:
		void MiFrase(string mensaje)
		{
			cout<<"El nombre de mi perrita es: "<<mensaje<<endl;
		}
};

int main()
{
	misPalabras MiMensaje;
	string nombre;
	cout<<"Escriba el nombre se su perro ";
	getline(cin,nombre);
	MiMensaje.MiFrase(nombre);
	
}
