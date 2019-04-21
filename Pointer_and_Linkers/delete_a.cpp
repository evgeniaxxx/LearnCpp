//Эксперимент удаленения переменной

#include <iostream>

using namespace std;

void foo(int* i)
{
    delete i;
}

int main()
{
    int* a = new int;
    *a = 3;
    foo(a);
    
    delete a;


    return 0;
}