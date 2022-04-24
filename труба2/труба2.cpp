#include <iostream>
#include <Windows.h>

#include <iostream>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "Вычисление стоимости поокупки\n";
	cout << "Введите исходные данные:\n";
	cout << "Цена тетради(руб)->";
	float price_notebook, price_pencil, summa;
	int cout_notebook, cout_pencil;
	cout << "Цена тетради(руб) ->";
	cin >> price_notebook;
	cout << "Количество тетрадей ->";
	cin >> cout_notebook;
	cout << "Цена карандаша(руб)->";
	cin >> price_pencil;
	cout << "Количество карандашей ->";
	cin >> cout_pencil;
	summa = price_notebook * cout_notebook + price_pencil * cout_pencil;
	cout << "Стоимость покупки:\n" << summa << endl;
}

