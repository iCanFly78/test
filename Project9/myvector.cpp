#include "myvector.h"

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///// MYQUEUE (FIFO)
myqueue::~myqueue()
{
	if (count)
	{
		elem *extop;
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
		elem *extop = top;
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
		elem *extop = top;
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
		elem *exlast = last;
		last = new elem(a);
		exlast->prev = last;
	}
	else
	{
		last = new elem(a);
		top = last;
	}
}

int myqueue::getcount() 
{ 
	return count; 
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///// MYSTACK (FILO)

void mystack::put(int a)
{
	count++;

	if (top)
	{
		elem *extop = top;
		top = new elem(a);
		top->prev = extop;
	}
	else
	{
		last = new elem(a);
		top = last;
	}
}
