#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

int main()
{

    setlocale(LC_ALL, "Rus");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int c, n;
    string direct[] = { "Север","Восток","Юг","Запад" };
    string d;
    cout << "Введите направление на английском\n";
    cin >> d;
    cout << "Введите значение N\n";
    cin >> n;
    if (d == "С")
    {
        c = 4;
    }
    if (d == "В")
    {
        c = 5;
    }
    if (d == "Ю")
    {
        c = 6;
    }
    if (d == "З")
    {
        c = 7;
    }
    c= (c+n)%4;
    cout << direct[c];
}