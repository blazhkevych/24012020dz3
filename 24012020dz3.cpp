/*
3. Для каждой введенной цифры(0 — 9) вывести соответствующее ей название на английском языке(0 — zero, 1 — one, 2 — two, ...).
*/
#include <iostream>
#include <Windows.h>;
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	int a;
	cout << "Введите число: ";
	cin >> a;
	switch (a) {
	case 0:cout << a << " - zero"; break;
	case 1:cout << a << " - one"; break;
	case 2:cout << a << " - two"; break;
	case 3:cout << a << " - three"; break;
	case 4:cout << a << " - four"; break;
	case 5:cout << a << " - five"; break;
	case 6:cout << a << " - six"; break;
	case 7:cout << a << " - seven"; break;
	case 8:cout << a << " - eight"; break;
	case 9:cout << a << " - nine"; break;
	default: cout << "Ошибка";
	}
	return 0;
}
