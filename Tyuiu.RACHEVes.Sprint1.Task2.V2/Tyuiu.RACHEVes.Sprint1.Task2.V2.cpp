#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int num;
	cout << "Введите любое четырёхзначное число:" << endl;
	cin >> num;
    if (num < 1000 || num > 9999) {
        std::cout << "Вы ввели не четырёхзначное число! " << endl; 
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
        cout << "" << num << " Сумма не кратная 5" << std::endl;
    }

    return 0;


};