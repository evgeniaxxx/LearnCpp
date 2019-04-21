//Создание конструкта и декструктора

#include <iostream>

using namespace std;

class  A
{
public:
    A();
    ~A();
};

int main()
{
    A a;
    return 0;
}

A::A()
{
    cout << "Конструктор" << endl;
}

A::~A()
{
    cout << "Деструктор" << endl;
}