#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int num;
	cout << "������� ����� ������������� �����:" << endl;
	cin >> num;
    if (num < 1000 || num > 9999) {
        std::cout << "�� ����� �� ������������� �����! " << endl; 
        return 1;
    }

    int temp = num;
    while (temp > 0) {
        num += temp % 10;
        temp /= 10;
    }

    if  
    {
        cout << "" << endl;
    }
    else {
        cout << "" << num << " ����� �� ������� 5" << std::endl;
    }

    return 0;


};