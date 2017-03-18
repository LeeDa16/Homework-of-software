#include <iostream>
using namespace std;
#include "SumSolution1.h"

long long gb_sumSolution1(long long n)
{
	long long sum = 0;
	for(long long i=0; i<=n; i++)
	{
		if ((i&1) == 0)
		{
			sum += i;
		}
	}
	return sum;
}
