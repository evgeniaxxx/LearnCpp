//Нули после запятой в числе

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    const double d = 8.62; 
    cout << d << endl;

    cout << scientific;
    cout << d << endl;

    cout << fixed;
    cout << d <<endl;

    cout.unsetf(ios::fixed);
    cout << d << endl;

    return 0;
}