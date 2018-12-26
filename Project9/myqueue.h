#ifndef MYQUEUE_H
#define MYQUEUE_H

#define NULL 0


struct el
{
public:
	int data;
	el *prev;

	el() : data(0), prev(NULL) {}
	el(int d) : data(d), prev(NULL) {}
};


class myqueue
{
private:
	el * top;
	el *last;
	int count;

public:
	myqueue() : top(NULL), last(NULL), count(0) {}
	~myqueue();
	bool get(int &d);
	int get();
	void put(int a);
	int getcount();
};

#endif