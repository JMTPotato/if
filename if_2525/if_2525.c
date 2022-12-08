#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int A, B, C;

	scanf("%d %d", &A, &B);
	scanf("%d", &C);

	if (B + C >= 60)		//>틀려서 >=으로 수정
	{
		if (((B + C) / 60) + A >= 24)
		{
			A = ((B + C) / 60) + A;
			A = A - 24;
			B = ((B + C) % 60);

			printf("%d %d", A, B);
		}
		else
		{
			A = ((B + C) / 60) + A;
			B = ((B + C) % 60);

			printf("%d %d", A, B);
		}
	}

	else
	{
		if (((B + C) / 60) + A >= 24)
		{
			A = ((B + C) / 60) + A;
			A = A - 24;
			B = B + C;

			printf("%d %d", A, B);
		}
		else
		{
			B = B + C;

			printf("%d %d", A, B);
		}
	}

	return 0;
}