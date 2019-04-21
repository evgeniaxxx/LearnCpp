//Вектор рандомных чисел типа int

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

#define SIZE 10000

int main()
{
    int arr[SIZE] = {0};

    vector <int> v(SIZE);
    srand (time(0));
    int n;
    for(int i = 1000; i < SIZE; i++)
    {

        n = rand()%100;
        cout << n << " ";
        v.push_back(n);
    }

    return 0;
}
