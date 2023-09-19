#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int number;
	cout << "Введите любое целое число: ";
	cin >> number;
	if (number % 10 == 7)
	{
		cout << "Число оканчивается на '7'" << endl;
	}else{
	
		cout << "Число НЕ оканчивается на '7'" << endl;
	}
	return 0;
}
