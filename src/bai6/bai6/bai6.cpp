#include "stdafx.h"
#include "stdio.h"
#include "string.h"
#include "ctype.h"


int i, j;
char a[100];
void sua()
{
	
	while (a[0] == ' ')
	{
		for (i = 0; i < strlen(a); i++)
			a[i] = a[i + 1];
	}   i = 0;
	while (i < strlen(a))
	{
		if (a[i] == ' '&& a[i + 1] == ' ')
		{
			for (int j = i; j < strlen(a); j++)
				a[j] = a[j + 1];
			i--;
		}
		i++;
	}
	while (a[strlen(a) - 1] == ' '&&a[strlen(a) - 1] == '\0');
	_strlwr_s(a);
	a[0] == toupper(a[0]);
	for (int i = 0; i < strlen(a); i++)
	{
		if (a[i] == ' ')
			a[i] == toupper(a[i + 1]);
	}
}


int main()
{
	printf("moi ban nhap xau: ");
	gets_s(a);
	sua();
	printf("sau chuyen hoa: %s", a);
	_gettchar();
}