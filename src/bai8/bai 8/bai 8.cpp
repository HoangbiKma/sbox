// bai 6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
#include "conio.h"
#include"string.h"


int main(int i)
{
	char chuoi[100];

	do{
		printf("\nmoi ban nhap xau: ");
		gets_s(chuoi);
		printf("chuoi sau khi sap xep la: ");
		for (i = strlen(chuoi); i >= 0; i--)
		{
			printf("%c", chuoi[i]);
		}

	} while (true);

	_getch();
}