//Вывод четных чисел вектора

#include <iostream>
#include <vector>
#include <random>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> v(50);
    vector<int> v2;
    random_device generator;
    uniform_int_distribution<int> distribution(10, 9999);
    for(int i = 0; i < 50; i++)
        v[i] = distribution(generator);
    
    for(const auto& elem: v) 
        cout << elem << " ";

    cout << endl;
    cout << endl;

    for_each(v.begin(), v.end(), [&v2](const auto& elem){if (elem%2==0) v2.push_back(elem);});

    for(const auto& elem: v2)
        cout << elem << " ";
    cout << endl;
    
    return 0;
}