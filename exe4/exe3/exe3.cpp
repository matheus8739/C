// exe4.cpp: Define o ponto de entrada para a aplicação de console.
//

#include "stdafx.h"
#include <stdlib.h>
#include <Windows.h>

float valor1, valor2;

int main()
{
	printf("Digite um valor\n");
	scanf_s("%f", &valor1);
	printf("Digite um valor\n");
	scanf_s("%f", &valor2);
	valor1 = valor1 + valor1 * 0.30;
	valor2 = valor2 - valor2 * 0.25;
	printf("%f\n", valor1);
	printf("%f\n", valor2);
	system("pause");


    return 0;
}

