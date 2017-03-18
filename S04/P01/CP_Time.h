#ifndef CP_TIME_H
#define CP_TIME_H
#include <ctime>

class CP_Time
{
private:
	clock_t m_timeStart, m_timeEnd;
	double m_scale;

public:
	CP_Time();
	~CP_Time(){ }

public:
	void mb_getStart();
	void mb_getEnd();
	double mb_reportInMicrosecond();
	void mb_setScale(double s) 
	{
		m_scale = s; 
	}

};

#endif // !CP_TIME_H
#pragma once
