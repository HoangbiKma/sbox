// bai7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
#include "conio.h"


int main()
{
	int a, b, ta, tb, r;
	int i, n;
	int ucln, bcnn;
	printf(" moi ban nhap a va b: ");
	scanf_s(" %d %d", &a, &b);
	//tìm ước chung lớn nhất
	for (i = 1; i <= a || i <= b; i++)
	{
		if (a%i == 0 && b%i == 0)
			ucln = i;
	}
	printf("uoc chung lon nhat: %d", ucln);
	// tìm bội chung nhỏ nhất
	for (i = 0; i <= a && i <= b; i++)
	{
		int ta = a, tb = b;
		while (tb != 0)
		{
			r = ta%tb;
			ta = tb;
			tb = r;
		}
		bcnn = (a / ta)*b;

	}
	printf("\nboi chung nho nhat cua 2 so la: %d ", bcnn);
	
	_getch();
}