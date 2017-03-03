#include <stdio.h>
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
	int number1,number2;
	cout<<"Ingrese el primer numero ";
	cin>>number1;
	cout<<"Ingrese el segundo numero ";
	cin>>number2;
	if (number1==number2) cout<<"El numero "<<number1<< " == "<<number2<<endl;
	if (number1!=number2) cout<<"El numero "<<number1<< " != "<<number2<<endl;
	if (number1<number2) cout<<"El numero "<<number1<<" < " <<number2<<endl;
	return 0;
}
