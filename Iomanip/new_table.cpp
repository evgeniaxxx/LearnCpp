//Вывод чисел в столбец

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int a;
    cout << "Введите количество столбцов и строк: ";
    cin >> a;

    for(int i = 1; i <= a; i++)
    {
        for(int g = 1; g <= a; g++)
        {
            cout << setw(4) << i*g ;            
        }
        cout << endl;
    }

    return 0;
}