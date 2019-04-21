//Приведение к типу

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    cout << static_cast<int>(7.9) << endl;
    cout << static_cast<int>(15/2) << endl;
    cout << static_cast<double>(15)/2 << endl;
    cout << static_cast<int>(7.8 + static_cast<double>(15)/2) << endl;
    return 0;
}
