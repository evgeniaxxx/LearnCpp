//Разные способы выводв вектора

#include <iostream>
#include <vector>
#include <random>
#include <algorithm>

using namespace std;

int main()
{
    vector <int> v(50);
    random_device generator;
    uniform_int_distribution<int> distribution(1000, 9999);
    for(int i = 0; i < 50; i++)
        v[i] = distribution(generator);

    for(int i = 0; i < 50; i++)
        cout << v[i] << " ";

    cout << endl;
    cout << endl;

    for(const auto& elem: v) // Для любого вектора
        cout << elem << " ";
    cout << endl;

    cout << endl;
    cout << endl;

    for_each(v.begin(), v.end(), [](const auto& elem){cout << elem << " ";});
    return 0;
}