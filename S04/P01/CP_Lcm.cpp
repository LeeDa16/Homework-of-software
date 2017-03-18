#include "CP_Lcm.h"
#include <iostream>

int CP_Lcm::Lcm(int x, int y)
{
	int gcd = CP_Gcd::Gcd(x, y);
	if (!gcd || (x / gcd) * y <= 0)
	{
		return 0;
	}
	return x * y / gcd;
}

int CP_Lcm::Lcm_2(int x, int y)
{
	int r = x > y ? x : y;
	if (r <= 0)
		return 0;
	for (int i = r; ; i++)
	{
		if (i <= 0)
			return 0;
		if (i % x == 0 && i % y == 0)
			return i;
	}
}
