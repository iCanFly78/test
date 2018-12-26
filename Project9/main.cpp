#include "mylib.h"
#include "myqueue.h"

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

	exitwkey(); 
	return 0; 
}