// bai1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include"stdio.h"
#include"math.h"
#include "conio.h"
int _tmain(int argc, _TCHAR* argv[])
{
	int n, a, b, c, d;
	int e;
	printf_s("moi ban nhap so N: ");
	scanf_s("%d", &n);
	if (n<100 || n > 999)
	{
		printf("so khong hop le !!!!");
	}
	else
	{
		a = n / 100;
		d = n - a * 100;
		b = d / 10;
		c = d - b * 10;

		//sap xep
		if (a<b){
			e = a;
			a = b;
			b = e;
		}
		if (a < c){
			e = a;
			a = c;
			c = e;
		}
		if (b < c){
			e = b;
			b = c;
			c = e;
		}

		printf("so sau khi sap xep la:  %d%d%d", a, b, c);
	}
	
	_getch();
}

