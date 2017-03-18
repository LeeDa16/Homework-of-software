#include <iostream>
using namespace std;
#include "SumSolution2.h"

long long gb_sumSolution2(long long n)
{
	long long first = 2, last;
	if ((n&1) == 0)
	{
		last = n;
	}
	else
	{
		last = n - 1;
	}
	return (first + last) / 2 * (last / 2);
}
