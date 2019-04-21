//Нахождение ввремени заполнения вектора рандомными числами

#include <iostream>
#include <vector>
#include <random>
#include <algorithm>
#include <chrono>

using namespace std;


class TimeCount
{
    chrono::time_point<chrono::high_resolution_clock> startTime;

public:
    TimeCount()
    {
        startTime = chrono::high_resolution_clock::now();
    }
    ~TimeCount()
    {
        auto finishTime = chrono::high_resolution_clock::now();
        auto duration = chrono::duration_cast<chrono::milliseconds>(finishTime - startTime);
        cout << "Продолжительность выполненения: " << duration.count() << endl;
    }
};

void execute()
{
    TimeCount t;

    vector<int> v(10000000);
    random_device generator;
    uniform_int_distribution<int> distribution(1, 9999999);
    for(auto& elem: v)
        elem = distribution(generator);

    cout << endl;
    
    std::sort(v.begin(), v.end());

    cout << endl;

    for(int r = 0; r < 10; r++)
        cout << v[r] << " ";
    cout << endl;
}

int main(int argc, char const *argv[])
{
    execute();
    execute();
    execute();
    return 0;
}

