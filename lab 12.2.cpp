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
    string direct[] = { "�����","������","��","�����" };
    string d;
    cout << "������� ����������� �� ����������\n";
    cin >> d;
    cout << "������� �������� N\n";
    cin >> n;
    if (d == "�")
    {
        c = 4;
    }
    if (d == "�")
    {
        c = 5;
    }
    if (d == "�")
    {
        c = 6;
    }
    if (d == "�")
    {
        c = 7;
    }
    c= (c+n)%4;
    cout << direct[c];
}