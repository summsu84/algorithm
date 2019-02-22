#include <stdio.h>

int main()
{
	// 입력 값을 받는 다
	int numerator1, numerator2;		//분자1, 2
	int denominator1, denominator2;  //분모 1, 2
	int resultDenominator;
	int resultNumerator;


	// 분자, 분모 입력
	scanf("%d %d", &numerator1, &denominator1);
	scanf("%d %d", &numerator2, &denominator2);

	// 분수 계산한다.
	// 1. 분모가 같은 경우 계산
	if (denominator1 == denominator2)
	{
		resultDenominator = denominator1;
		resultNumerator = resultDenominator - numerator1 - numerator2;
	}
	// 2. 분모가 다른 경우 통분 한다.
	else
	{
		resultDenominator = denominator1 * denominator2;
		resultNumerator = resultDenominator - (numerator1 * denominator2) - (numerator2 * denominator1);
	}

	//3. 최대공약수 구하여 나눈다.
	int temp1 = resultDenominator;
	int temp2 = resultNumerator;
	int divider = 2;
	int gcDivisor = 1;
	while (1)
	{
		if (divider > temp1 || divider > temp2)
		{
			break;
		}
		if ((temp1 % divider == 0) && (temp2 % divider == 0))
		{
			temp1 = temp1 / divider;
			temp2 = temp2 / divider;
			gcDivisor *= divider;
			divider = 2;
		}
		else
		{
			divider++;
		}
	}

	//printf("gc: %d, numerator : %d, denoinator : %d", gcDivisor, temp2, temp1);
	if (temp2 == 0)
	{
		printf("0");
	}else
	{
		printf("%d/%d", temp2, temp1);
	}
	


	return 0;
}