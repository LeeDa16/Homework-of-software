#include <iostream>
#include <ctime>
using namespace std;

#include "CP_GCDUnitTest.h"
#include "CP_GCD.h"

void gb_gcdUnitTest_Automated(int (*f)(int a, int b))
{
	int i, k;
	int flag = 0;
	int nArray[][2] = {-1, -2,
						0, 1,
						2, 11,
						13, 17,
						12, 32,
						};
	int sArray[] = {0, 0, 1, 1, 4};
	k = sizeof(nArray) / sizeof(int) / 2;
	
	for(i = 0; i < k; i++)
	{
		if(f(nArray[i][0], nArray[i][1]) != sArray[i])
		{
			cout << "测试案例a, b =  " << nArray[i][0] << ", " << nArray[i][0] << "的结果" << f(nArray[i][0], nArray[i][1]) << "有误" << endl; 
			flag = 1;
		}
	}
	
	if(!flag)
	{
		cout << "\t全部正确" << endl;
	}
}

void gb_gcdUnitTest_AutomatedAll()
{
	cout << "test result of method_1: " << endl;
	gb_gcdUnitTest_Automated(gb_gcd_1);
	cout << "\ntest result of method_2: " << endl;
	gb_gcdUnitTest_Automated(gb_gcd_2);
}

void gb_gcdUnitTest_Compare(int (*f1)(int a, int b), int (*f2)(int a, int b))
{
	srand(time(NULL));
	int a, b, i, k;
	int flag = 0;
	k = 10;
	for(i = 0; i < k;i++)
	{
		a = rand();
		b = rand();
		if(f1(a, b) != f2(a, b))
		{
			cout << "测试样例a, b = " << a << ", " << b << "的结果不一致。f1 = " << f1(a, b) << ", f2 = " << f2(a, b) << endl; 
			flag = 1;
		}
	}
	if(!flag)
	{
		cout << "\t结果全部相同" << endl;
	}
}

