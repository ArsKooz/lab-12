#include <iostream>
#include <string>
#include <locale>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	string colorm[] = { "��������", "��������","�������", "������" ,"�������" };
	string colorf[] = { "�������", "�������","������", "������" ,"������" };
	string animal[] = { "�����", "������", "�����", "�����", "�������", "����", "������", "����", "��������", "������", "������" , "������" };
	int year, c;
	cout << "������� ���\n";
	cin >> year;
	cout << year<< "-��� ";
	year += 56;
	c = (year % 60)/12;
	year = year % 12;
	if (year == 2 || year == 3 || year == 4)
	{
		cout << colorm[c]<<" "<< animal[year];
	}
	else
	{
		cout << colorf[c]<<" "<< animal[year];
	}
	
}