#include <iostream>
using std::cout;
using std::endl;


int main()
{
	int oranges(5), apples(10);
	int fruits;
	wchar_t letter(0x5A);
	
	fruits=apples+oranges;
	cout <<"This is a simple program that outputs some text"<<endl;
	cout <<"you can output more lines of text"<<endl;
	cout<<"nosotros tenemos "<<fruits<< " fratas en total"<<endl;
	cout<<"La primera letra es "<<letter<<" la canela se muri\ó"<<endl;
	return 0;
}
