//Пример использования auto

#include <iostream>
#include <typeinfo>

using namespace std;

int main()
{
    auto a = 22;
    cout << typeid(a).name() << endl;

    auto b = 22L;
    cout << typeid(b).name() << endl;

    auto c = 22LL;
    cout << typeid(c).name() << endl;

    auto d = 8.6;
    cout << typeid(d).name() << endl;

    auto e = new int(3);
    cout << typeid(e).name() << endl;
    
    return 0;
}