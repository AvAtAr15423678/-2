#include <iostream>
#include <Windows.h>

#include <iostream>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	float width, height;
	cout << "Вычисление площади треугольника\n"
		<< "Введите длинну основания треугольника ->";
	cin >> width;
	cout << "Введите длинну высоты треугольника ->";
	cin >> height;
	cout << "Площадь треугольника:"
		<< 0.5 * width * height<< "  "


		<< width * height / 2 << "кв.см";
}

