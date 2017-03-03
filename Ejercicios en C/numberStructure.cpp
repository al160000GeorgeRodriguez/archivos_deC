#include <stdio.h>
struct dataN {
	int numbers; 
	int *caracter;
};

int main()
{
	struct dataN UnNumero;
	struct dataN *MiNumero;
	UnNumero.numbers=455;
	MiNumero=&UnNumero;
	printf("%x\n",UnNumero.numbers);
	return 0;
}
