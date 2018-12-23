//#include <iostream>
//#include <conio.h>
#include "mylib.h"

using namespace std;



int main()
{
	init();

	int *ptrint;
	void* voidptr;

	int a = 10;
	double b = 0.1;
	cout << *(ptrint = &a);
	//cout << *(voidptr = &b);

	exitwkey();
	return 0;
}