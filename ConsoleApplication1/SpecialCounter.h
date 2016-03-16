#pragma once
class SpecialCounter
{
private:
	int start;
	int stop;
	int incremnt;
	int decremnt;
public:
	int stepSize;
	SpecialCounter();
	~SpecialCounter();
	void Starting(int starting);
	void Stopping(int stopping);
	void increment(int stepSize);
	void decrement(int stepSize);
	SpecialCounter operator + (SpecialCounter);
	SpecialCounter operator - (SpecialCounter);
	int getStart();
	int getStop();
	void plus1();
	void minus1();
};

