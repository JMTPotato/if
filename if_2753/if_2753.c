#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


/*
int main()
{
	int year;

	scanf("%d", &year);

	if (year % 4 == 0)
	{
		if (year % 100 == 0)
		{
			if (year % 400 == 0)	//400의 배수이므로 윤년임
			{
				printf("1");
			}
			else
			{
				printf("0");	//4와 100의 배수지만 400의 배수가 아니기에 윤년이 아님
			}
		}
		else
		{
			printf("1");	//4의 배수지만 100의 배수가 아니기에 윤년임
		}
	}
	else
	{
		printf("0");	//4의 배수가 아니므로 윤년이 아님
	}
	return 0;
}
*/

int main()
{
	int year;

	scanf("%d", &year);

	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
	{
		printf("1");
	}
	else
	{
		printf("0");
	}

	return 0;
}	