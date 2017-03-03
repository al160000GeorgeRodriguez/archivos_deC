#include <iostream>
using namespace std;

class GradeBook
{
	public:
		void displayMessage()
	{
		cout<<"Bienvenido a la calificacion del libro "<<endl;
	}
};

int main()
{
	GradeBook myGradeBook;
	myGradeBook.displayMessage();
}
