#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int number;
	cout << "Введите любое целое число: ";
	cin >> number;
	if (number % 2 == 0)
	{
		cout << "Чётное число" << endl;
	}
	else
	{
		cout << "Нечётное число" << endl;
	}
	return 0;
}
