#include <iostream>
#include <cmath>

using namespace std;


int main()
{
    int n;
    cout << "Enter a number ";
    cin >>  n;

    double sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum+= (pow(-1.0, static_cast<double>(i)))/((2*static_cast<double>(i) + 1));
    }
    cout << 4*sum << endl;
    return 0;
}
