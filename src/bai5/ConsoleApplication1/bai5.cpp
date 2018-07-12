// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<stdio.h>

int _tmain()
{
	int ngay, thang, nam;
	printf(" moi ban nhap ngay thang nam:");
	scanf_s(" %d%d%d", &ngay, &thang, &nam);

	switch (thang)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:if (ngay>0 && ngay <= 31)
	{
				printf(" ngay %02d thang %02d nam %d", ngay, thang, nam); break;
	}
			else printf(" ngay %02d thang %02d nam %d khong hop le", ngay, thang, nam);
	case 4:
	case 6:
	case 9:
	case 11:if (ngay>0 && ngay <= 30)
	{
				printf(" ngay %02d thang %02d nam %d", ngay, thang, nam); break;
	}
			else printf("ngay %02d thang %02d nam %d khong hop le", ngay, thang, nam);
	case 2: if (((nam % 4 == 0) && (nam % 100 != 0)) || (nam % 400 == 0))
	{
				if (ngay>0 && ngay <=29)
				{
					printf(" ngay %02d thang %02d nam %d", ngay, thang, nam); break;
				}
				else printf("ngay %02d thang %02d nam %d khong hop le", ngay, thang, nam);
	}
			else if (ngay>0 && ngay <= 28)
	{
				printf(" ngay %02d thang %02d nam %d", ngay, thang, nam); break;
	}
			else printf("ngay %02d thang %02d nam %d khong hop le", ngay, thang, nam);

	}
	if (((nam % 4 == 0) && (nam % 100 != 0)) || (nam % 400 == 0))
		printf("\n%d la mot nam nhuan", nam);
	else
		printf("\nnam %d khong phai la nam nhuan", nam);
	_gettchar();
	
}