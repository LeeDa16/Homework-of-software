#include <iostream>
using namespace std;

#include "CP_GCD.h"
#include "CP_GCDUnitTest.h"

int main()
{
	int a, b;
	gb_getInteger(a, b);
	cout << "result of method_1: " << gb_gcd_1(a, b) << endl;
	cout << "result of method_2: " << gb_gcd_2(a, b) << endl;

	//gb_gcdUnitTest_AutomatedAll();

	//gb_gcdUnitTest_Compare(gb_gcd_1, gb_gcd_2);
	return 0;
}
