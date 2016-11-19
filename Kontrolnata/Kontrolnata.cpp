// Kontrolnata.cpp: определ€ет точку входа дл€ консольного приложени€.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
class koord//двумерные координаты
{
public:
	int x;
	int y;
	void operator=(int*a)//присвоение в качестве параметра указатель на int( предпологаетс€ массив)
	{
		x = a[0];
		y = a[1];
	}
	bool operator==(koord& k2) //сравнение. –авны если лежат в одной четверти
	{
		if (x > 0 && y > 0 && k2.x > 0 && k2.y > 0)
			return true;
		if (x < 0 && y > 0 && k2.x < 0 && k2.y > 0)
			return true;
		if (x < 0 && y < 0 && k2.x < 0 && k2.y < 0)
			return true;
		if (x > 0 && y < 0 && k2.x > 0 && k2.y < 0)
			return true;
		return false;
			
	}
	bool operator!=(koord& k2)//сравнение. не равны если лежат в разных четверт€х
	{
		if (x > 0 && y > 0 && k2.x > 0 && k2.y > 0)
			return false;
		if (x < 0 && y > 0 && k2.x < 0 && k2.y > 0)
			return false;
		if (x < 0 && y < 0 && k2.x < 0 && k2.y < 0)
			return false;
		if (x > 0 && y < 0 && k2.x > 0 && k2.y < 0)
			return false;
		return true;
	}
	koord(){}
	koord(int X, int Y)
	{
		x = X;
		y = Y;
	}
	friend ostream& operator<<(ostream&out, koord&k)
	{
		out << "(" << k.x << ";" << k.y << ")\n";
		return out;
	}
};

int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "Rus");
	koord t,t2,t3;
	t = { 1, 2 };//присвоение
	t2 = { 3, -2 };
	t3 = { 3, 5 };
	cout <<t;//вывод
	cout << t2;
	/*—равнение*/
	if (t == t2)cout << "–авны. лежат в одной четверти\n";
	else cout << "Ќеравны. нележат в одной четверти\n";
    if (t != t2) cout << "Ќеравны. нележат в одной четверти\n";
	else cout << "–авны. лежат в одной четверти\n";
	cout << t;
	cout << t3;
	if (t == t3)cout << "–авны. лежат в одной четверти\n";
	else cout << "Ќеравны. нележат в одной четверти\n";
	if (t != t3) cout << "Ќеравны. нележат в одной четверти\n";
	else cout << "–авны. лежат в одной четверти\n";
	
	return 0;
}

