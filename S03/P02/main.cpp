#include <iostream>
#include <fstream>
#include <ctime>
#include <cmath>
using namespace std;

#include "CP_Prime.h"
#include "CP_PrimeTest.h"

int main()
{
	int m, n;
	gb_input(m, n);
	
	//时钟用于测试程序运行速度
	//int tim = clock();
	gb_sort(m, n);

	gb_primeList_1(n);
	cout << "The results of method 1 are:" << endl;
	gb_output(flag_1, m, n);

	cout << endl;
	gb_primeList_2(n);
	cout << "The results of method 2 are: " << endl;
	gb_output(flag_2, m, n);

	cout << endl;
	gb_primeTestCompare(flag_1, flag_2, m, n);

	//gb_primeTestSpeed(flag_1, m, n, tim);
	//gb_primeTestSpeed(flag_2, m, n, tim);

	return 0;
}