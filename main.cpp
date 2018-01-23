#include "stdafx.h"
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	float a;
	cout << "Введите количество метров:\n";
	cin >> a;
	if (a < 0)
	{
	  cout << "Ошибка!\n";
	  return 0;
	}
	cout <<"Вы ввели: "<< a << " метров \n" << "Ответ: " << a / 1000 << " км.\n";
	return 0;
}