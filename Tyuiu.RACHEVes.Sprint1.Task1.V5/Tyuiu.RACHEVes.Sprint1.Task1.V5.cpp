
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int num;
	cout << "������� ���������� �����: " << endl;
	cin >> num;
	if (num >= 100 && num <= 999)
	{
		int a = num / 100; // �����
		int b = (num / 10) %10; // �������
		int c = num % 10; // �������
		int Summ = (a + b + c);
		if (Summ >= 10 && Summ <= 99)
		{
			cout << "�������� ���������� " << endl;
		}
		else {
			cout << "�� �������� ����������" << endl;
		}
		return 0;

	}
}