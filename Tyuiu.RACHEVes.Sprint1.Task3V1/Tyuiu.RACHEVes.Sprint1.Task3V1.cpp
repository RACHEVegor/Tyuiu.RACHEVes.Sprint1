
#include <iostream>

using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian"); // ������� ����
	int num; // ������ ������������ ������ �����
	cout << "������� ����� ������������� �����:" << endl;
	cin >> num; // ����� �������, ��������� ���������� �������� "�" ��� "&&"
	if (num >= 1000 && num !=1000 && num <= 9999 && num % 2 == 0 && num % 4 == 0)
	{
		num = num * 2;
		
	}
	else {
		num = num / 5;  
	}

	cout << "����� - " << num << endl;
	return 0;
};