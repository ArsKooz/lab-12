#include <iostream>
#include <string>
#include <locale>

using namespace std;

int main()
{   
    setlocale(LC_ALL, "Rus");
    int a, b, num, month1;
    string edin[] = { "������", "������", "������", "���������", "�����", "������", "�������", "�������", "�������" };
    string teen[] = { "�������","������������", "�����������", "�����������", "�������������", "�����������", "������������", "�����������", "�������������", "�������������" };
    string des[] = { "��������", "��������" };
    string month[] = { "������","�������","�����","������","���","����","����","�������","��������","�������","������","�������" };
    cout << "Vvedie datu\n";
    cin >> num >> month1;
    a = num % 10;
    b = num / 10;
    switch (b)
    {
    case 0:
        cout << edin[a-1];
        break;
    case 1:
        cout << teen[a];
        break;
    case 2:
        if (a == 0)
        {
            cout << "���������";
        }
        else
        {
            cout << des[0]<<" " << edin[a-1];
        }
        break;
    case 3:
        if (a == 0)
        {
            cout << "���������";
        }
        else
        {
            cout << des[1]<<" "<< edin[a-1];
        }
        break;
    }
    cout <<" " << month[month1 - 1];
}