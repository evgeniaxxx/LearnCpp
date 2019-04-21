//Сравнение двух координат

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double x = 1.0;
    double y = 2.0/7.0 + 3.0/7.0 + 2.0/7.0;

    cout << fixed << showpoint << setprecision(20);
    cout << x << endl;
    cout << y << endl;

    if (fabs(x-y) < 0.000001)
        cout << "x and y are the same" << endl;
    else 
        cout << "x and y are not the same" << endl;

    return 0; 
}