#include <iostream>
#include "Celsius.h"
#include "Fahrenheit.h"

using namespace std;

void main()
{
	Celsius* c = new Celsius(100);
	Fahrenheit * f = &((Fahrenheit)(*c));
	cout << "Water boiling point" << endl;
	cout << *c << " C" << endl;
	cout << *f << " F" << endl;

	c = new Celsius(0);
	f = &((Fahrenheit)(*c));
	cout << "Water freezing point" << endl;
	cout << *c << " C" << endl;
	cout << *f << " F" << endl;

	c = new Celsius(-273.15);
	f = &((Fahrenheit)(*c));
	cout << "Absolute zero" << endl;
	cout << *c << " C" << endl;
	cout << *f << " F" << endl;



}

