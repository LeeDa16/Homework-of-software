#include "CP_Time.h"

CP_Time::CP_Time()
{
	m_timeStart = clock();
	m_timeEnd = m_timeStart;
}

void CP_Time::mb_getStart()
{
	m_timeStart = clock();
}

void CP_Time::mb_getEnd()
{
	m_timeEnd = clock();
}

double CP_Time::mb_reportInMicrosecond()
{
	clock_t d = m_timeEnd - m_timeStart;
	double r = (double)(d) / (double)CLOCKS_PER_SEC * m_scale * 1000000;
	return r;
}
