#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
	int number;
    cout << "Введите любое трёхзначное число:" << endl;
	cin >> number;
	if (number % 13 == 0)
	{
		cout << "Число кратно 13" << endl;
	}
	else {

		cout << "Число НЕ кратно 13" << endl;
	}
	return 0;
}


