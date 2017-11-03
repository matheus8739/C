// exe4.cpp: Define o ponto de entrada para a aplicação de console.
//

#include "stdafx.h"
#include <stdlib.h>
#include <Windows.h>

int valor1, valor2;

int main()
{
	printf("Digite o valor\n");
	scanf_s("%i", &valor1);
	printf("Digite outro valor\n");
	scanf_s("%i", &valor2);
	valor1 = valor1 + valor1 * 0.30;
	valor2 = valor2 - valor2 * 0.25;
	printf("%i\n", valor1);
	printf("%i\n", valor2);
	system("pause");


    return 0;
}

