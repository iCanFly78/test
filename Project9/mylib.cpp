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