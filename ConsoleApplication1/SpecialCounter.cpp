#include "SpecialCounter.h"


SpecialCounter::SpecialCounter()
{
	start = 0;
	stop = 255;
	incremnt = 1;
     decremnt = 1;

}

SpecialCounter::~SpecialCounter()
{
}
void SpecialCounter::Starting(int starting)
{
	start = starting;
}
void SpecialCounter::Stopping(int stopping)
{
	stop =stopping;
}
void SpecialCounter::increment(int stepSize)
{
	incremnt = stepSize;
}

void SpecialCounter::decrement(int stepSize)
{
	decremnt = stepSize;
}
SpecialCounter operator + (SpecialCounter)
{
	int value = Count.getStart();
	value = +1;
	count.Start(value);
	return count;
}
SpecialCounter operator - (SpecialCounter)
{
	int value = count.getStart();
	value = -1;
	count.Start(value);
	return count;

}
int getStart()
{

}
int getStop()
{

}
void plus1()
{

}
void minus1()
{

}
