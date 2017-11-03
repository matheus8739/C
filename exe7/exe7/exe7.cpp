// exe7.cpp: Define o ponto de entrada para a aplicação de console.
//

#include "stdafx.h"
#include <Windows.h>

float n1, n2, n3, r1, r2, r3;

int main()
{
	printf("Digitei o primeiro valor:\n");
	scanf_s("%f", &n1);
	printf("Digitei o segundo valor:\n");
	scanf_s("%f", &n2);
	printf("Digitei o terceiro valor:\n");
	scanf_s("%f", &n3);
	r1 = n1 + n2;
	r2 = n2 + n3;
	r3 = r1 * r2;
	printf("O resultado e %f\n", r3);
	system("pause");


	return 0;
}

