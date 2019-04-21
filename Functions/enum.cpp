//Пример нумерации

#include <iostream>

using namespace std;

enum grades {JUNIOR = 280, MIDDLE, SENIOR};

int RaiseGrades(grades&);
string PrintGrade(const grades&);

int main()
{
    grades userGrade = SENIOR;
    RaiseGrades(userGrade);
    cout << "Ваш уровень: " << PrintGrade(userGrade) << endl;
    return 0;
}

int RaiseGrades(grades& grade)
{   
    if(grade == SENIOR)
        return SENIOR;
    else
        grade = static_cast<grades>(grade +1);  
    
    
}

string PrintGrade(const grades& grade)
{
    switch (grade) 
    {
        case JUNIOR:
            return "Junior";
        case MIDDLE:
            return "Middle";
        case SENIOR:
            return "Senior";
        case 1:
            return "Ошибка";
    }
}