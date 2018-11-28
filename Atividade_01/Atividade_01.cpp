
#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include "math.h"

int leitura()
{
	int num;
	printf("informe sua idade em dias:");
	scanf_s("%i", &num);

	return num;

}

int calculoAnos(int num)
{
	int anos;

	anos = num / 365;
	return anos;

}
int calculoMeses(int num)
{
	int meses;

	meses = (num % 365) / 30;
	return meses;

}
int calculoDias(int num)
{
	int dias;

	dias = (num % 365) % 30;
	return dias;

}

int main()
{
	
	int numdias = leitura();
	int a = calculoAnos(numdias);
	int m = calculoMeses(numdias);
	int d = calculoDias(numdias);
	printf_s("A idade em anos, meses e dias eh: %i", a);
	printf_s(" anos ");
	printf_s("%i", m);
	printf_s(" meses ");
	printf_s("%i", d);
	printf_s(" dias ");
	
	system("pause");
}
