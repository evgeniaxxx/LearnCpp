//Ввод более точного значения переменной

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    const double d = 15.637;
    cout << fixed;
    cout << setprecision(2) << d << endl;
    cout << setprecision(3) << d << endl;
    cout << setprecision(4) << d << endl;
    return 0;
}