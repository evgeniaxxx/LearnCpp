//Утечка памяти

#include <iostream>

using namespace std;

class Data
{
private:
    char* data;
public:
    Data ()
    {
        data = new char[10240];
    };

    ~Data()
    {
        delete[] data;
    }
};

int main()
{
    for(int i = 0; i < 50000; i++)
    {
        Data data;
    }

    char c;

    cin >> c;

    return 0;
}