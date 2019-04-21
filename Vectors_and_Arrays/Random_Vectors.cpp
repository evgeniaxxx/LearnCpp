//Проверка совпадения числа, введденого пользователем, и числав в рандомном векторе 

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

int main ()
{
    int b;
    cout << "Enter a digit " ;
    cin >> b;
    cout << "\n";

    int count;
    cout << "Enter number of elements in the array ";
    cin >> count;

    vector <int> v(count);
    srand (time(0));
    int a;
    for(int i = 0; i < count; i++)
    {

        a = rand()%100;
        cout << a << " ";
        v.push_back(a);
    }

    bool found = false;
    for(int elem : v)
    {
        if (b == elem) {
            found = true;
            break;
        }
    }

    cout << endl;

    if (found) 
        cout << "Your number matches one of the array elements" << endl;
    else
        cout << "Your number doesn't match one of the array elements" << endl;

    return 0;
}