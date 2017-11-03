// exe6.cpp: Define o ponto de entrada para a aplicação de console.
//

#include "stdafx.h"
#include <Windows.h>

int numero1, numero2;

int main()
{
	printf("Digite o primeiro numero:\n");
		scanf_s("%i", &numero1);
		printf("Digite o segundo numero:\n");
		scanf_s("%i", &numero2);
		numero1 = numero1 * numero2;
		printf("O resultado da multiplicacao e %i\n\n", numero1);
		system("pause");

    return 0;
}

