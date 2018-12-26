#include "myqueue.h"

myqueue::~myqueue()
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

bool myqueue:: get(int &d)
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

int myqueue::get()
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

void myqueue::put(int a)
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

int myqueue::getcount() 
{ 
	return count; 
}