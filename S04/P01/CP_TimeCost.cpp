#include <iostream>
using namespace std;
#include "CP_Gcd.h"
#include "CP_Lcm.h"
#include "CP_Time.h"
#include "CP_TimeCost.h"
#include "CP_InPut.h"

void TimeCost::mb_run()
{
	struct Node *list;
	double r1, r2;
	int gcd,lcm;
	const int DC_RepeatTimes = 1000000;
	list = Input();
	while (list)
	{
		CP_Time t1, t2;
		t1.mb_setScale(1.0 / DC_RepeatTimes);
		t1.mb_getStart();
		for (int i = 0; i < DC_RepeatTimes; i++)
		{
			gcd = CP_Gcd::Gcd(list->x, list->y);
		}
		t1.mb_getEnd();
		r1 = t1.mb_reportInMicrosecond();

		t2.mb_setScale(1.0 / DC_RepeatTimes);
		t2.mb_getStart();
		for (int i = 0; i < DC_RepeatTimes; i++)
		{
			lcm = CP_Lcm::Lcm(list->x, list->y);
		}
		t2.mb_getEnd();
		r2 = t1.mb_reportInMicrosecond();

		cout << endl;
		cout << gcd << " " << r1 << endl;
		cout << lcm << " " << r2 << endl;
		list = list->next;
	}
}
