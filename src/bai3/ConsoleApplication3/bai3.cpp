// ConsoleApplication3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<stdio.h>
#include<math.h>

int _tmain()
{
	float n;
	int gia;
	printf(" moi ban nhap so km da di: ");
	scanf_s("%f", &n);
	if (0< n && n < 1)
	{
		gia = 10000;
	}
	else if (1<  n && n <= 30)
	{
		gia = 10000 + ((float)((n - 1) * 1500) / 0.2);
	}
	else
	{
		gia = 10000 + (float)(((30 - 1) * 1500) / 0.2) + (float)(((n - 30 - 1) * 8000));

	}
	printf("gia cuoc la: %d VND", gia);
	_gettchar();
}