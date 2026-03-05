#include<iostream>
#include<clocale>
#include<cmath>
using namespace std;

int main() {
	int radius, ugol;
	setlocale(LC_ALL, "ru");
	cout << "Введите радиус окружности:";
	cin >> radius;
	cout << "Введите угол сектора:";
	cin >> ugol;
	cout << "Площадь:" << 3.14 * pow(radius, 2) << endl;
	cout << "Площадь сектора:" << ugol * 3.14 * radius / 360 << endl;
	cout << "Длина окружности:" << 2 * 3.14 * radius << endl;
	getchar();
}