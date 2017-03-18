#include <iostream>
using namespace std;

#include "CP_Gene.h"

void gb_input(int &m, int &n)
{
	do
	{
		cout << "Please enter two integer between -2147483648 and 2147483647:"<< endl;
		cin >> m >> n;
		if (cin.good() && m >= -2147483648 && m <= 2147483647 && n >= -2147483648 && n <= 2147483647)
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

void gb_output(int r)
{
	cout << "The result is " << r << endl;
}

int gb_gene(int x, int y)
{
	int i, r = 0;
	for (i = 0; i != 32; ++i)
	{
		switch (i % 5)
		{
		case 0:
			r += (~x) & (1 << i);
			break;
		case 1:
			r += (~y) & (1 << i);
			break;
		case 2:
			r += (x & (1 << i)) | (y & (1 << i));
		case 3:
			r += (x & (1 << i)) & (y & (1 << i));
		case 4:
			r += (x & (1 << i)) ^ (y & (1 << i));
		default:
			break;
		}
	}
	return r;
}
