#include <iostream>
#include <fstream>
#include <ctime>
#include <cmath>
using namespace std;

#include "CP_Prime.h"

bool flag_1[N + 2] = {false};
bool flag_2[N + 2] = {false};
int prime[N + 2], pnum;

inline void _print(int n)
{
	int o[30], top;

	for (top = 1; n; n /= 10)
		o[top++] = n % 10;
	for (--top; top; --top)
		putchar('0' + o[top]);
	putchar('\n');
}


void gb_input(int &m, int &n)
{
	do
	{
		cout << "Please enter two integer between 1 and 100000000:"<< endl;
		cin >> m >> n;
		if (cin.good() && m >= 1 && m <= 100000000 && n >= 1 && n <= 100000000)
		{
			break;
		}
		else
		{
			cout << endl;
			cout << "Wrong format, enter again please." << endl;
			cin.clear();
			cin.sync();
		}
	} while (true);
}

void gb_output(bool b[], int m, int n)
{
	int i;
	for (i = m; i <= n; i++)
	{
		if (b[i])
			_print(i);
	}
}

//Å·ÊÏÉ¸·¨
void gb_primeList_1(int n)
{
	int i, j;
	pnum = 0;
	for (i = 2; i <= n + 1; i++)
	{
		flag_1[i] = true;
	}

	for (i = 2; i <= n + 1; i++)
	{
		if (flag_1[i])
			prime[pnum++] = i;
		for (j = 0; j < pnum && i * prime[j] <= n; j++)
		{
			flag_1[i * prime[j]] = false;
			if (!(i % prime[j]))
				break;
		}
	}
}

//°£ÊÏÉ¸·¨
void gb_primeList_2(int n)
{
	int i, j;
	for (i = 2; i != n + 1; i++)
	{
		flag_2[i] = true;
	}

	for (i = 2; i != n + 1; i++)
	{
		if (flag_2[i])
			for (j = 2; i * j <= n; j++)
				flag_2[i * j] = false;
	}
}

void gb_sort(int &m, int &n)
{
	if (m > n)
	{
		int tmp = m;
		m = n;
		n = tmp;
	}
}