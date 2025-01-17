
#include <iostream>

#include <Windows.h>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    //Середнє арефметичне

    float x, y, z;

    cout << "---Обчислення середнього арефметичного---" << endl;


    cout << "Введіть перше число (x):";
    cin >> x;

    cout << "Введіть друге число (y):";
    cin >> y;

    cout << "Введіть третє число (z):";
    cin >> z;

    cout << "M = (" << x << " + " << y << " + " << z << ") / 3 = " << (x + z + y) / 3 << endl << endl;


    //Розрахунок відсотків

    float P, r;

    cout << "---Розрахунок відсотків---" << endl;

    cout << "Введіть число (P):";
    cin >> P;

    cout << "Введіть відсотки (r):";
    cin >> r;

    cout << "S = " << P << " * (" << r << " / 100) = " << P * (r / 100) << endl << endl;


    //Час у дорозі

    float s, v;

    cout << "---Час у дорозі---" << endl;

    cout << "Відстань (s):";
    cin >> s;

    cout << "Швидкість (v):";
    cin >> v;

    cout << "t = " << s << " / " << v << " = " << s / v;


    return 0;

}