#include <iostream>

using namespace std;

template < typename T>
const T& maxValue(const T& a, const T& b)
{
    return (a > b)? a:b;
}

int main()
{
    int a = 56;
    int b = 43;

    int d = maxValue(56, 43);

    cout << "MAX = " << d << endl;
    return 0;
}