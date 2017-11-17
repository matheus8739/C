// exe10.cpp: Define o ponto de entrada para a aplicação de console.
//

#include "stdafx.h"
#include <windows.h>
int numeros[5];
int x;
int y;
int main()
{
	y = 0;
	printf("Digite o primeiro numero:\n");
	scanf_s("%i", &numeros[0]);

	printf("Digite o segundo numero:\n");
	scanf_s("%i", &numeros[1]);

	printf("Digite o terceiro numero:\n");
	scanf_s("%i", &numeros[2]);

	printf("Digite o quarto numero:\n");
	scanf_s("%i", &numeros[3]);

	printf("Digite o quinto numero:\n");
	scanf_s("%i", &numeros[4]);
	system("cls");

	while (x < 6)
	{
		if (numeros[x] > 10)
		{
			printf("%i\n", numeros[x]);
		}
		x = x + 1;

	
}
	system("pause");
    return 0;
}

