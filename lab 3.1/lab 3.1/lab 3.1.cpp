// Lab_03_1.cpp
// <Яворського Богдана>
// Лабораторна робота № 3.1
// Розгалуження, задане формулою: функція однієї змінної.
// Варіант 31

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; // вхідний параметр
	double y; // результат обчислення виразу
	double A; // проміжний результат - функціонально стала частина виразу
	double B; // проміжний результат - функціонально змінна частина виразу
	cout << "x = "; cin >> x;

	A = 2*abs(13-x);
	// спосіб 1: розгалуження в скороченій формі
	if (x <= -1)
		B = exp(x-5);
	if (-1 <= x && x <= 1)
		B = sin(x*x*x-1) * sin(x*x*x-1);
	if (x >= 1)
		B = cos(abs(x))/1+sin(x)*sin(x);
	y = A - B;
	cout << endl;
	cout << "1) y = " << y << endl;
	// спосіб 2: розгалуження в повній формі
	if (x <= -1)
		B = exp(x-5);
	else
		if (x >= 1)
			B = cos(abs(x)) / 1+sin(x)*sin(x);
		else
			B = sin(x*x*x-1) * sin(x*x*x-1);
	y = A - B;
	cout << "2) y = " << y << endl;
	cin.get();
	return 0;
} 