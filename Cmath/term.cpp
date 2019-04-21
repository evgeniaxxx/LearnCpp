//Проверка попадания числа в промежуток от 1 до 10

#include <iostream>
#include <cmath>


using namespace std;

int main()
{
    int a;
    cout << "Введите число";
    cin >> a;

    if ((a >=0) && (a <= 10))
        cout << "Попадает" << endl;
    else
        cout << "Не попадает" << endl;

    return 0;
}

