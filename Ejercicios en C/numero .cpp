#include <iostream>
#include <stdio.h>
using std::cout;
using std::cin;
using std::endl;


int exp(int ddt)
{
	return ddt^2;
}


int main()
{
	int mix(0);
	int cox(0);
	printf("Prueba 1 ");
	cout<<"Introduce un numero"<<endl;
	cin >> mix;
	
	while (mix!=100)
	{
		if (mix % 2==0) 
		{
			cout<<"\n El numero es par."<<endl;
			cox=exp(mix);
			cout<<cox<<endl;
		}
		else 
		{
			cout<<"\n El numero es impar"<<endl;
		}
		cout<<"\n El numero es "<<mix;
		++mix;
	}
	return 0;
}


