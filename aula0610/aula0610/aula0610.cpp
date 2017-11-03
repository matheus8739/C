// aula0610.cpp: Define o ponto de entrada para a aplicação de console.
//

#include "stdafx.h"
#include <stdlib.h>
#include <stdio.h>
#include <windows.h>
#include <locale.h>

int numero1, numero2;
int resultado;
float douglax;


int main()
{
	setlocale(LC_ALL, "Portuguese");


	printf("Digite o primeiro numero\n");
	scanf_s("%i", &numero1);
	printf("Digite o segundo numero\n");
	scanf_s("%i", &numero2);


	printf("\n==============================\n");
	resultado = numero1 + numero2;
	printf("A soma e: %i\n", resultado);
	printf("==============================\n");
	resultado = numero1 - numero2;
	printf("A subtracao e: %i\n", resultado);
	printf("==============================\n");
douglax = (float)numero1 / numero1;
	printf("A divisao e: %f\n", douglax);
	printf("==============================\n");
	resultado = numero1 % numero2;
	printf("O resto da divisao e: %i\n", resultado);
	printf("==============================\n");
	resultado = numero1 * numero2;
	printf("A multiplicacao e: %i\n", resultado);
	printf("==============================\n\n");
	system("pause");
    return 0;
}

