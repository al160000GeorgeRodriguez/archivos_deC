#include <iostream>
#include <string>
using namespace std;



class NombreDelGrupo
{
	public:
		void displayMessage(string courseName)
		{
			cout<<"Bienvenido a la presentacion del libro\n "<<courseName<<"!"<<endl;
			
			
		}
};

int main()
{
	string nameOfCourse;
	NombreDelGrupo myGradeBook;
	
	cout<< "Por favor ingrese el nombre del curso "<<endl;
	getline(cin,nameOfCourse);
	cout<<endl;
	myGradeBook.displayMessage(nameOfCourse);
	return 0;
}
