//Проверка кратности числа на 3

#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

int main()
{
   string a;
   cout << "Введите число: ";
   cin >> a;

   const int len = a.length();

   int ia = std::atoi(a.c_str());
    
   int sum = 0;
   for(int i = 0; i < len; i++)
   {
      sum = sum + ia%10;
      ia = ia/10; 
   }   
   cout << "SUM = " << sum << endl;

   if (sum%3 == 0)
      cout << a << " - число кратное 3" << endl;
   else
      cout << a << " - число некратное 3" << endl;

   return 0;
}

