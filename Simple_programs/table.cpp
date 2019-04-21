//Вывод таблицы на экран

#include <iostream>
#include <iomanip>
#include <cstdio>

using namespace std;

double f(double x)
{
    return x*3-x/3;
}

int main()
{
    cout << fixed << showpoint << setprecision(3) ;
    for (int i = 0; i < 20; i++)
    {
        cout << "|" << setw(3) << left << i << "|" << right << setw(7) << f(i) << "|" << endl;
    }

    for (int i = 0; i < 20; i++)
    {
        printf("|%d.3|%6.2lf|\n", i, f(i));
    }

}