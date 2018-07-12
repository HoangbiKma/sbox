// ConsoleApplication2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>

int _tmain()
{
	int n, i, j;
	printf("nhap chieu cao tam giac:");
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n - i; j++)
			printf(" ");
		for (j = 1; j <= 2 * i - 1; j++)
			printf("*");
		printf("\n");
	}
	_gettch();
}