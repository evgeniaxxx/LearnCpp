//Фукнция добавления к 2 единицы

#include <iostream>

using namespace std;

int add1(int&);

int main()
{
    int a = 2;
    add1(a);
    cout << a << endl;
    return 0;
}

int add1(int& val)
{
    val += 1;
}