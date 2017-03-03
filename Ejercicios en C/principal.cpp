#include <stdio.h>
struct dataN {
	int numbers; 
	float flotante;
	char *ptrCadena;
};

int main()
{
	struct dataN UnNumero;
	struct dataN MiNumero;
	UnNumero.numbers=455;
	MiNumero.flotante=123456.789;
	UnNumero.ptrCadena="La canela se petateo";
//	MiNumero=&UnNumero;
	printf("%u\n",UnNumero.numbers);
	printf("%x\n",UnNumero.numbers);
	printf("%e\n",MiNumero.flotante);
	printf("%f\n",MiNumero.flotante);
	printf("%s\n",UnNumero.ptrCadena);
	
	return 0;
} 0- 
.0
