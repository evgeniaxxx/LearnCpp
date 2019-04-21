//Подсчет зарплаты работника

#include <iostream>

using namespace std;

#define WORKING_HOURS (40)

int main()
{
    int hours;
    cout << "Введите количетсво отработанных часов: ";
    cin >> hours;

    int wage;
    cout << "Введите заработную плату в час:  ";
    cin >> wage;

    int salary;
    if (hours <= WORKING_HOURS)
        salary = hours * wage;
    else
        salary = 1.5*((hours-WORKING_HOURS) * wage) + WORKING_HOURS * wage;

    cout << "Заработная плата: " << salary << endl;
    return 0; 
}