#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
	int number;
    cout << "������� ����� ���������� �����:" << endl;
	cin >> number;
	if (number % 13 == 0)
	{
		cout << "����� ������ 13" << endl;
	}
	else {

		cout << "����� �� ������ 13" << endl;
	}
	return 0;
}


