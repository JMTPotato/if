#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int H, M;	//H=hour, M= minitues	(0 ¡Â H ¡Â 23, 0 ¡Â M ¡Â 59)

	scanf("%d %d", &H, &M);

	if (H > 0 && M < 45)
	{
		M = M + 15;		//- 45 +60
		H = H - 1;

		printf("%d %d", H, M);
	}
	else if (H == 0 && M < 45)
	{
		M = M + 15;		//- 45 +60
		H = H + 23;

		printf("%d %d", H, M);
	}
	else
	{
		M = M - 45;

		printf("%d %d", H, M);
	}

	return 0;
}