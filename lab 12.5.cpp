#include <iostream>
#include <string>
#include <locale>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	string colorm[] = { "зеленого", "красного","желтого", "белого" ,"черного" };
	string colorf[] = { "зеленой", "красной","желтой", "белойй" ,"черной" };
	string animal[] = { "крысы", "коровы", "тигра", "зайца", "дракона", "змеи", "лошади", "овцы", "обезь€ны", "курицы", "собаки" , "свиньи" };
	int year, c;
	cout << "¬ведите год\n";
	cin >> year;
	cout << year<< "-год ";
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