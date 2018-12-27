#ifndef MYVECTOR_H
#define MYVECTOR_H

#define NULL 0

struct elem
{
public:
	int data; 
	elem *prev; // link to previous element at the list

	elem() : data(0), prev(NULL) {}
	elem(int d) : data(d), prev(NULL) {}
};

class myqueue
{
protected:
	elem * top;
	elem *last;
	int count;

public:
	myqueue() : top(NULL), last(NULL), count(0) {}
	~myqueue();
	bool get(int &d);
	int get();
	void put(int a);
	int getcount();
};

class mystack : public myqueue
{
public:
	void put(int a);
};
#endif