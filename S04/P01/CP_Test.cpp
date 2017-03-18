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
			cout << "��������a, b = " << a << ", " << b << "�Ľ����һ�¡�f1 = " << f1(a, b) << ", f2 = " << f2(a, b) << endl;
			flag = 1;
		}
	}
	if (!flag)
	{
		cout << "���ȫ����ͬ" << endl;
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
			cout << "���԰���a, b =  " << nArray[i][0] << ", " << nArray[i][0] << "�Ľ��" << f(nArray[i][0], nArray[i][1]) << "," << sArray[i] << "����" << endl;
			flag = 1;
		}
	}

	if (!flag)
	{
		cout << "ȫ����ȷ" << endl;
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
			cout << "���԰���a, b =  " << nArray[i][0] << ", " << nArray[i][0] << "�Ľ��" << f(nArray[i][0], nArray[i][1]) << "����" << endl;
			flag = 1;
		}
	}

	if (!flag)
	{
		cout << "ȫ����ȷ" << endl;
	}
}
