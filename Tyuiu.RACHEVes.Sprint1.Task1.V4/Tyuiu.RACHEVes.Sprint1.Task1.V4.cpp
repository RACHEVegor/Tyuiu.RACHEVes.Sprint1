#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int number;
	cout << "������� ����� ����� �����: ";
	cin >> number;
	if (number % 10 == 7)
	{
		cout << "����� ������������ �� '7'" << endl;
	}else{
	
		cout << "����� �� ������������ �� '7'" << endl;
	}
	return 0;
}
