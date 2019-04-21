//Вызов функций

#include <iostream>

using namespace std;

void foo(int& a)
{
    cout << "Вызвался foo(int&) " << endl;
}

void foo(const int& a)
{
    cout << "Вызвался foo(const int&)" << endl;
}

int main()
{
    int a = 2;
    const int b = 3;
    foo(a);
    foo(b);
    return 0;
}
