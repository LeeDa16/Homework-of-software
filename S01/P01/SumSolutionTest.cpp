#include <iostream>
#include <time.h>
using namespace std;
#include "SumSolutionTest.h"

int gb_sumSolutionTest()
{
	long long result1, result2;
	long long n;

	srand(time(NULL));

	
	cout << "请输入一个大于等于2的正整数：" << endl;
	cin >> n;

	{
		if (n <= 1 || n > 6074000999)
		{
			cout << "ERROR" << endl;
		}
		else
		{
			result1 = gb_sumSolution1(n);
			result2 = gb_sumSolution2(n);

			cout << "方法一输出：" << result1 << endl;
			cout<< "方法二输出：" << result2 << endl;
			cout << endl;
		}
	}
	return 0;
}
