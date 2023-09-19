
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int num;
	cout << "¬ведите трЄхзначное число: " << endl;
	cin >> num;
	if (num >= 100 && num <= 999)
	{
		int a = num / 100; // сотни
		int b = (num / 10) %10; // дес€тки
		int c = num % 10; // единицы
		int Summ = (a + b + c);
		if (Summ >= 10 && Summ <= 99)
		{
			cout << "явл€етс€ двузначным " << endl;
		}
		else {
			cout << "Ќ≈ €вл€етс€ двузначным" << endl;
		}
		return 0;

	}
}