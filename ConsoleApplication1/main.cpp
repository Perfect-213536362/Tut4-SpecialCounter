#include <iostream>
#include "SpecialCounter.h"

using namespace std;

int main()
{

	SpecialCounter counter1, counter2, counter3;
	counter1.Starting(20);
	counter1.Stopping(210);
	counter1.increment(3);
	counter1.decrement(2);
	counter2= counter1;
	counter3 = counter1;
	cout << "Counting" << counter1.getStart() << endl;

}