//Открытие таблицы в тектовом файле

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{
    ifstream infile("in.txt");

    if (!infile.is_open())
    {
        cerr << "Ошибка открытия файла!" << endl;
        return -1;
    }

    const int rows = 3;
    const int cols = 4;

    int num;
    for(int i = 1; i <= rows; i++)
    {
        int sum = 0;
        for(int j = 1; j <= cols; j++)
        {
            infile >> num;
            cout << setw(4) << num;
            sum += num;
        }
        cout << " Sum = " << sum << endl; 
    }
    return 0;
}
    