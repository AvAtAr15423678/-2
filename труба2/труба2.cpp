#include <iostream>
#include <Windows.h>

#include <iostream>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int start_sec = 75498;
	//cin>sec;
	int sec = start_sec % 60;
	int min = start_sec / 60 % 60;
	int hour = start_sec / 60 / 60; //start_sec / 3600
	cout << "h:" << hour << "  m:" << min << "   s:" << sec;
}

