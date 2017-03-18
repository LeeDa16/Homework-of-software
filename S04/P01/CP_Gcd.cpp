#include "CP_Gcd.h"
#include <iostream>

int CP_Gcd::Gcd(int x, int y)
{
	int a, b;
	a = x > y ? x : y;
	b = x < y ? x : y;
	if (b <= 0)
	{
		return 0;
	}
	if (!(x % y))
	{
		return y;
	}
	Gcd(y, x % y);
}

int CP_Gcd::Gcd_2(int x, int y)
{
	int r = x < y ? x : y;
	if (r <= 0)
		return 0;
	for (int  i = r; i > 0; i--)
	{
		if (x % i == 0 && y % i == 0)
			return i;
	}
	return 0;
}
