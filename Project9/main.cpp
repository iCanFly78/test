#include "mylib.h"
#include "myvector.h"

#include <iostream>

using namespace std;

int main()
{
	
	init();
	int c, d;
	myqueue o1;

	cout << "Input lenght of queue: ";
	cin >> c;
	
	for (int i = 0; i < c; i++)
	{
		cin >> d;
		o1.put(d);
	}

	for (int i = 0; i < c; i++)
	{
		cout <<	o1.get() << " ";
	}

	mystack s1;
	cout << "\nInput lenght of stack: ";
	cin >> c;

	for (int i = 0; i < c; i++)
	{
		cin >> d;
		s1.put(d);
	}

	for (int i = 0; i < c; i++)
	{
		cout << s1.get() << " ";
	}

	exitwkey(); 
	return 0; 
}