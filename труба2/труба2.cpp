#include <iostream>
#include <Windows.h>

#include <iostream>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int a ,b;
	cin >> a >> b;
	float c;
	c = a + b;
	cout << c << endl;
	c = a - b;
	cout << c << endl;
	c = a * b;
	cout << c << endl;
	c = (float)a / b;
	cout << c << endl;
	a += b;//a=a+b;
	a += 1;
		a++;//инкримент;
		++a;
		a--;//декримент;
		--a;
}

