#include "mylib.h"

void init()
{
	setlocale(LC_ALL, "Russian");
}

void exitwkey()
{
	std::cout << "\nPress any key to exit...";
	_getch();
}

void swap(int& a, int& b)
{
	std::cout << "links\n";
	int tmp = a;
	a = b;
	b = tmp;
}

void swap(int* a, int *b)
{
	std::cout << "pointers\n";
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

