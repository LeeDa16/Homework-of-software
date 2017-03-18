#include <iostream>
using namespace std;

#include "CP_Gene.h"

int main()
{
	int x, y, r;
	gb_input(x, y);
	r = gb_gene(x, y);
	gb_output(r);
	
	return 0;
}
