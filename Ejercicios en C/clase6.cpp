#include <iostream>
#include <string>

using namespace std;

class miEspacio
{
	public:
		void MiCanela(string caneliusha)
		{
			cout<<"El nombre de tu canela es "<<caneliusha<<endl;
		}
};

int main()
{
	miEspacio canela;
	string Ncanela;
	cout<<"Ingrese el nombre de tu canela "<<endl;
	getline(cin,Ncanela);
	canela.MiCanela(Ncanela);
	return 0;
}
