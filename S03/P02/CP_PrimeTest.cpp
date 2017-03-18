#include <iostream>
#include <ctime>
using namespace std;

#include "CP_Prime.h"
#include "CP_PrimeTest.h"

void gb_primeTestCompare(bool a[], bool b[], int m, int n)
{
	bool flag = true;
	for (int i = m; i<= n; i++)
	{
		if (a[i] != b[i])
		{
			flag = false;
			cout << "The results of method 1 and method 2 are different at " << i << endl;
		}
	}
	if (flag)
		cout << "The results are all the same." << endl;
}

void gb_primeTestSpeed(bool a[], int m, int n, int tim)
{
	freopen("hehe.txt", "w", stdout);
	//int tim = clock();
		for (int i = m; i <= n; i++)
		{
			if (a[i])
			_print(i);
		}
	_print(clock() - tim);
}

