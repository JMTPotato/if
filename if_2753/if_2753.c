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
			if (year % 400 == 0)	//400�� ����̹Ƿ� ������
			{
				printf("1");
			}
			else
			{
				printf("0");	//4�� 100�� ������� 400�� ����� �ƴϱ⿡ ������ �ƴ�
			}
		}
		else
		{
			printf("1");	//4�� ������� 100�� ����� �ƴϱ⿡ ������
		}
	}
	else
	{
		printf("0");	//4�� ����� �ƴϹǷ� ������ �ƴ�
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