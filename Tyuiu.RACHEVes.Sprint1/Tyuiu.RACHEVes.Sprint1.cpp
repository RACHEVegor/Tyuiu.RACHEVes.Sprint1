#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	double a, b;
	cout << "¬ведите а = " << endl;
	cin >> a;
	cout << "¬ведите b = " << endl;
	cin >> b;
	double S;
	S = (a * b);
	cout << "ѕлощадь пр€моугольника (a*b) = " << S << endl;
	return 0;
	/*использую double, чтобы повысить точность вычислений 
	в случае если длина а или b в пр€моугольнике не будет
	равна целому числу 
	*/






}