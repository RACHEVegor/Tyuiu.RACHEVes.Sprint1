#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int number;
	cout << "������� ����� ����� �����: ";
	cin >> number;
	if (number % 2 == 0)
	{
		cout << "׸���� �����" << endl;
	}
	else
	{
		cout << "�������� �����" << endl;
	}
	return 0;
}
