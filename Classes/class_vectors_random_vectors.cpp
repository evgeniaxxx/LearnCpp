//Вектор рандомных членов класса Distance и его сортировка

#include <iostream>
#include <vector>
#include <algorithm>
#include <random>

using namespace std;

class Distance
{
private:
    int _meters;
    int _km;

protected:
    void Randomizer();

private:
    void Normalize();

public:
    Distance();
    Distance(int km, int meters);

public:
    string to_string() const;
    int GetMeters() const;
    int GetKilometers() const;
    void SetMeters(int);
    void SetKilometers(int);

public:
    friend ostream& operator<<(ostream& os, const Distance&);
    
public:
    bool operator<(const Distance&);
    bool operator>(const Distance&);

};

void Distance::Normalize()
{
    while(_meters > 1000)
    {
        _km += 1;
        _meters -= 1000;
    }
}

int Distance::GetMeters() const
{
    return _meters;
}

int Distance::GetKilometers() const
{
    return _km;
}

void Distance::SetMeters(int meters)
{
   _meters = meters;
   Normalize();
}

void Distance::SetKilometers(int km)
{
    _km = km;
    Normalize();

}

Distance::Distance()
{
    _meters = 0;
    _km = 0;
    Randomizer();
}

Distance::Distance(int km, int meters)
{
    _km = km;
    _meters = meters;
}

string Distance::to_string() const
{
    return  ((_km != 0)?(std::to_string(_km)  + " km"):"") + ((_meters != 0)?(std::to_string(_meters) + " m"):"");
}

ostream& operator<<(ostream& os, const Distance& d)
{
    os << ((d._km!=0)?(std::to_string(d._km) + " km "):"") + ((d._meters!=0)?(std::to_string(d._meters) + " m"):"");
    return os;
}

void Distance::Randomizer()
{
    random_device generator_km;
    uniform_int_distribution<int> distribution_km(10, 99);

    random_device generator_meters;
    uniform_int_distribution<int> distribution_meters(100, 999);

    _km = distribution_km(generator_km);
    _meters = distribution_meters(generator_meters);
}

bool Distance::operator<(const Distance& d)
{
    if (this->_km < d._km)
        return true;
    else
       return false;
}

bool Distance::operator>(const Distance& d)
{
    if (this->_km > d._km)
        return true;
    else
       return false;
}


int main()
{
    std::vector<Distance> vect(10);

    random_device generator;
    uniform_int_distribution<int> distribution_km(10, 99);
    uniform_int_distribution<int> distribution_meters(100, 999);

    for(auto elem: vect)
    {
        elem.SetKilometers(distribution_km(generator));
        elem.SetMeters(distribution_meters(generator));
    }

    for(const auto& elem: vect)
        cout << elem << " " << endl;

    cout << endl;

    std::sort(vect.begin(), vect.end());

    for_each(vect.begin(), vect.end(), [](const auto& elem){cout << elem << " " << endl;});

    return 0;
}