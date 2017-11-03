// exe2.cpp: Define o ponto de entrada para a aplicação de console.
//

#include "stdafx.h"
#include <stdlib.h>
#include <Windows.h>
float a, valor;
int main()
{
	printf("Digite um valor \n");
	scanf_s("%f", &a);
	valor = a * 3.90;
	printf("%f dolares\n", valor);
	system("pause");

    return 0;
}

