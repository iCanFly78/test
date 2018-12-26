//#include <iostream>
//#include <conio.h>
//#include <ctime>
#include "mylib.h"

using namespace std;

struct el
{
public:
	int data = 0;
	el *prev = NULL;
	
	el() : data(0), prev(NULL) {}
	el(int d) : data(d), prev(NULL) {}
};

class myqueue
{
private:
	el *top;
	el *last;
	int count;

public:
	myqueue() : top(NULL), last(NULL), count(0) {}
	~myqueue()
	{
		if (count)
		{
			el *extop;
			for (int i = 0; i < count; i++)
			{
				extop = top;
				top = top->prev;
				delete extop;
			}
		}
	}
	bool get(int &d)
	{
		if (count)
		{
			d = top->data;
			el *extop = top;
			top = top->prev;
			delete extop;
			count--;
			return 1;
		}
		else
		return 0;
	}

	int get()
	{
		if (count)
		{
			int d = top->data;
			el *extop = top;
			top = top->prev;
			delete extop;
			count--;
			return d;
		}
		else
			return 0;
	}
	void put(int a)
	{
		count++;
				
		if (top)
		{
			el *exlast = last;
			last = new el(a);
			exlast->prev = last;
		}
		else
		{
			last = new el(a);
			top = last;
		}
	}
	
	int getcount() { return count; }
};

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