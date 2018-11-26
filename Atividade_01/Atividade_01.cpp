// Atividade_01.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include "math.h"
#include "cmath"



double lerNumero() {
	
	double num;

	printf("Favor digitar um numero: ");
	scanf_s("%d", &num);

	return num;
}

double distancia(double x1, double x2, double y1, double y2) {

	double d;

	double p1 = x2 - x1;
	double p2 = y2 - y1;

	return 	d = sqrt(pow(p1, 2) + pow(p2, 2));
}


int main()
{
	
	double a = lerNumero();
	double b = lerNumero();
	double c = lerNumero();
	double d = lerNumero();
	double total = distancia(a, b, c, d);

	printf_s("A distancia eh %i\n:", total);

	system("pause");
}

