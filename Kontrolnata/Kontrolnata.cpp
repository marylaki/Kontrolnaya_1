// Kontrolnata.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
class koord//��������� ����������
{
public:
	int x;
	int y;
	void operator=(int*a)//���������� � �������� ��������� ��������� �� int( �������������� ������)
	{
		x = a[0];
		y = a[1];
	}
	bool operator==(koord& k2) //���������. ����� ���� ����� � ����� ��������
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
	bool operator!=(koord& k2)//���������. �� ����� ���� ����� � ������ ���������
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
	t = { 1, 2 };//����������
	t2 = { 3, -2 };
	t3 = { 3, 5 };
	cout <<t;//�����
	cout << t2;
	/*���������*/
	if (t == t2)cout << "�����. ����� � ����� ��������\n";
	else cout << "�������. ������� � ����� ��������\n";
    if (t != t2) cout << "�������. ������� � ����� ��������\n";
	else cout << "�����. ����� � ����� ��������\n";
	cout << t;
	cout << t3;
	if (t == t3)cout << "�����. ����� � ����� ��������\n";
	else cout << "�������. ������� � ����� ��������\n";
	if (t != t3) cout << "�������. ������� � ����� ��������\n";
	else cout << "�����. ����� � ����� ��������\n";
	
	return 0;
}

