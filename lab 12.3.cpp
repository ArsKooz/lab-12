#include <iostream>
#include <string>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    int a, b, num;
    string edin[] = { "����", "���", "���", "������", "����", "�����", "����", "������", "������" };
    string teen[] = { "������","�����������", "����������", "����������", "������������", "����������", "�����������", "����������", "������������", "������������" };
    string des[] = { "��������", "��������","�����" };
    cout << "������� �����\n";
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
            cout << "��������";
        }
        else
        {
            cout << des[0] << " " << edin[a - 1];
        }
        break;
    case 3:
        if (a == 0)
        {
            cout << "��������";
        }
        else
        {
            cout << des[1] << " " << edin[a - 1];
        }
        break;
    case 4:
        cout << "�����";
        break;
    }
    if ((a==1)&&(num>220))
    { 
        cout << " ������� �������";
    }
    else
    {
        cout << " ������� �������";
    }
}