#include <iostream>
#include <ctime>
using namespace std;
#include "CP_Test.h"

void Test::Test_Cpompare(int(*f1)(int a, int b), int(*f2)(int a, int b))
{
	srand(time(NULL));
	int a, b, i, k;
	int flag = 0;
	k = 10;
	for (i = 0; i < k; i++)
	{
		a = rand();
		b = rand();
		if (f1(a, b) != f2(a, b))
		{
			cout << "测试样例a, b = " << a << ", " << b << "的结果不一致。f1 = " << f1(a, b) << ", f2 = " << f2(a, b) << endl;
			flag = 1;
		}
	}
	if (!flag)
	{
		cout << "结果全部相同" << endl;
	}
}

void Test::Test_Automated_Gcd(int(*f)(int a, int b))
{
	int i, k;
	int flag = 0;
	int nArray[][2] = { -1, -2,
		0, 1,
		2, 11,
		13, 17,
		12, 32,
	};
	int sArray[] = { 0, 0, 1, 1, 4 };
	k = sizeof(nArray) / sizeof(int) / 2;

	for (i = 0; i < k; i++)
	{
		if (f(nArray[i][0], nArray[i][1]) != sArray[i])
		{
			cout << "测试案例a, b =  " << nArray[i][0] << ", " << nArray[i][0] << "的结果" << f(nArray[i][0], nArray[i][1]) << "," << sArray[i] << "有误" << endl;
			flag = 1;
		}
	}

	if (!flag)
	{
		cout << "全部正确" << endl;
	}
}

void Test::Test_Automated_Lcm(int(*f)(int a, int b))
{
	int i, k;
	int flag = 0;
	int nArray[][2] = { -1, -2,
		0, 1,
		2, 11,
		250, 256,
		987, 899,
		8687899, 65611
	};
	int sArray[] = { 0, 0, 22, 32000, 887313,  0};
	k = sizeof(nArray) / sizeof(int) / 2;

	for (i = 0; i < k; i++)
	{
		if (f(nArray[i][0], nArray[i][1]) != sArray[i])
		{
			cout << "测试案例a, b =  " << nArray[i][0] << ", " << nArray[i][0] << "的结果" << f(nArray[i][0], nArray[i][1]) << "有误" << endl;
			flag = 1;
		}
	}

	if (!flag)
	{
		cout << "全部正确" << endl;
	}
}
