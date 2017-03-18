#include <iostream>
using namespace std;

#include "CP_TimeCost.h"
#include "CP_Test.h"
#include "CP_Gcd.h"
#include "CP_Lcm.h"

int main()
{
	TimeCost application;
	application.mb_run();
	
	/*
	Test T;
	T.Test_Automated_Gcd(CP_Gcd::Gcd);
	T.Test_Cpompare(CP_Gcd::Gcd, CP_Gcd::Gcd_2);
	
	T.Test_Automated_Lcm(CP_Lcm::Lcm);
	T.Test_Cpompare(CP_Lcm::Lcm, CP_Lcm::Lcm_2);
	*/
	return 0;
}