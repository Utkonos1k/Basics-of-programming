
#include <iostream>

#include <Windows.h>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    //������ �����������

    float x, y, z;

    cout << "---���������� ���������� �������������---" << endl;


    cout << "������ ����� ����� (x):";
    cin >> x;

    cout << "������ ����� ����� (y):";
    cin >> y;

    cout << "������ ���� ����� (z):";
    cin >> z;

    cout << "M = (" << x << " + " << y << " + " << z << ") / 3 = " << (x + z + y) / 3 << endl << endl;


    //���������� �������

    float P, r;

    cout << "---���������� �������---" << endl;

    cout << "������ ����� (P):";
    cin >> P;

    cout << "������ ������� (r):";
    cin >> r;

    cout << "S = " << P << " * (" << r << " / 100) = " << P * (r / 100) << endl << endl;


    //��� � �����

    float s, v;

    cout << "---��� � �����---" << endl;

    cout << "³������ (s):";
    cin >> s;

    cout << "�������� (v):";
    cin >> v;

    cout << "t = " << s << " / " << v << " = " << s / v;


    return 0;

}