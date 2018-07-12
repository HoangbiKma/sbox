// bai2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include"stdio.h"
#include"string.h"
#include"conio.h"
int main()
{
	char chuoi[100];
	int hoa = 0;
	int thuong = 0;
	
	do{
		printf("moi ban nhap chuoi ky tu: ");
		gets_s(chuoi);
		printf("\nso ki tu chuoi: %d", strlen(chuoi));

		for (int i = 0; i < strlen(chuoi); i++)
		{
			if ((chuoi[i] >= 'A' && chuoi[i] <= 'Z') && (chuoi[i] != ' '))
			{
				hoa++;
			}
			if
				((chuoi[i] >= 'a' && chuoi[i] <= 'z') && (chuoi[i] != ' '))
			{
				thuong++;
			}
		}
		printf(" \nso chu hoa cua chuoi la:  %d", hoa);
		printf(" \nso chu thuong cua chuoi la:  %d\n", thuong);
	} while (true);
	
	_getch();
}

