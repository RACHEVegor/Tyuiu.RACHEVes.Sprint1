
#include <iostream>

using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian"); // русский язык
	int num; // просим пользователя ввести число
	cout << "Введите любое четырёхзначное число:" << endl;
	cin >> num; // пишем условия, используя логический оператор "И" или "&&"
	if (num >= 1000 && num <= 9999 && num % 2 == 0 && num % 4 == 0)
	{
		num = num / 5;
	}
	else {
		num = num * 2; // тогда Если четырехзначное число четное, если оно не равно 1000 и делится на 4
	}

	cout << "Ответ - " << num << endl;
	return 0;
};