// Tyuiu.RACHEVes.Sprint1.Task.V2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int number;
	cout << "������� ����� ������� 13:" << endl;
	cin >> number;
	if (number % 13 == 0)
	{
		cout << "����� ������ 13" << endl;

	}
	else {
		cout << "����� �� ������� 13" << endl;
	}
	return 0;

}