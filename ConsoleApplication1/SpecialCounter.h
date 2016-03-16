#pragma once
class SpecialCounter
{
private:
	int Start;
	int stop;
	int increment;
	int decrement;
public:
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

