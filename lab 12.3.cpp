#include <iostream>
#include <string>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    int a, b, num;
    string edin[] = { "одно", "два", "три", "четыре", "пять", "шесть", "семь", "восемь", "девять" };
    string teen[] = { "десять","одиннадцать", "двенадцать", "тринадцать", "четырнадцать", "пятнадцать", "шестнадцать", "семнадцать", "восемнадцать", "девятнадцать" };
    string des[] = { "двадцать", "тридцать","сорок" };
    cout << "Введите число\n";
    cin >> num;
    a = num % 10;
    b = num / 10;
    switch (b)
    {
    case 1:
        cout << teen[a];
        break;
    case 2:
        if (a == 0)
        {
            cout << "двадцать";
        }
        else
        {
            cout << des[0] << " " << edin[a - 1];
        }
        break;
    case 3:
        if (a == 0)
        {
            cout << "тридцать";
        }
        else
        {
            cout << des[1] << " " << edin[a - 1];
        }
        break;
    case 4:
        cout << "сорок";
        break;
    }
    if ((a==1)&&(num>220))
    { 
        cout << " учебное задание";
    }
    else
    {
        cout << " учебных заданий";
    }
}