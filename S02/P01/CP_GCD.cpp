#include <iostream>
using namespace std;

#include "CP_GCD.h"

extern int gb_gcd_1(int a, int b)
{
	auto x = a > b ? a : b;
	auto y = a < b ? a : b;
	
	if(y <= 0)
		return 0;
	
	if(!(x % y))
		return y;
	else
		gb_gcd_1(y, x % y);

}

extern int gb_gcd_2(int a, int b)
{
	auto i = a < b ? a : b;

	if(i <= 0)
		return 0;
	
	while((a % i) || (b % i))
	{
		i--;
	}
	
	return i;
}

extern void gb_getInteger(int &a, int &b)
{
	cout << "please input two positive integer:" << endl;
	cin >> a >> b;
}