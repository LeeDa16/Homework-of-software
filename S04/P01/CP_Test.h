#ifndef CP_TEST_H
#define CP_TEST_H

class Test
{
public:
	Test() { }
	~Test() { }

public:
	void Test_Cpompare(int(*f1)(int a, int b), int (*f2)(int a, int b));
	void Test_Automated_Gcd(int(*f)(int a, int b));
	void Test_Automated_Lcm(int(*f)(int a, int b));
};

#endif // !CP_TEST_H
#pragma once
