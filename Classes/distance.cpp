//Класс Distance и перегрузка операторов

#include <iostream>

using namespace std;

class Distance
{
private:
    int _meters;
    int _km;

private:
    void NormalizeSum();
    void NormalizeSub();
public:
    // Конструкторы
    Distance();
    Distance(int km, int meters); 

public:
    // Вспомогательные функции
    string to_string() const;

public:
    // Перегрузки операторов
    Distance operator+(const int&) const;
    Distance operator+(const Distance&) const;
    Distance operator-(const int&)  const;
    Distance operator-(const Distance&) const;
    friend ostream& operator<<(ostream& os, const Distance&);
    //friend istream& operator>>(istream& os1, const Distance&);
    bool operator==(const Distance&) const;
    bool operator!=(const Distance&) const;
    //Префиксный вариант
    Distance operator++();
    Distance operator--();
    //Постфиксный вариант
    Distance operator++(int);
    Distance operator--(int);
};

Distance::Distance()
{
    _meters = 0;
    _km = 0;
}

Distance::Distance (int km, int meters)
{
    _km = km;
    _meters = meters;
    NormalizeSum();
    NormalizeSub();
}

void Distance::NormalizeSum()
{
    while(_meters > 1000)
    {
        _km+= 1;
        _meters-= 1000;
    }
}

void Distance::NormalizeSub()
{
    while(_meters < 0)
    {    
       _meters+=1000;
        _km-=1;
    }
    
}

string Distance::to_string() const
{
    return std::to_string(_km) + "km " + ((_meters!=0)?(std::to_string(_meters) + "m"):""); 
}

Distance Distance::operator+(const int& meters) const
{
    Distance newDist;
    newDist._km = this->_km;
    newDist._meters = this->_meters + meters; 
    newDist.NormalizeSum();
    return newDist;    
}

Distance Distance::operator+(const Distance& d) const
{
    Distance newDist;
    newDist._km = this->_km + d._km;
    newDist._meters = this->_meters + d._meters;
    newDist.NormalizeSum();
    return newDist;
}

Distance Distance::operator-(const int& meters) const
{
    Distance newDist;
    newDist._km = this->_km;
    newDist._meters = this->_meters - meters; 
    newDist.NormalizeSub();
    return newDist;
}

Distance Distance::operator-(const Distance& d) const
{
    Distance newDist;
    newDist._km = this->_km - d._km;
    newDist._meters = this->_meters - d._meters;
    newDist.NormalizeSub();
    return newDist;
}

ostream& operator<<(ostream& os, const Distance& d)
{
    os << ((d._km!=0)?(std::to_string(d._km) + "km "):"") + ((d._meters!=0)?(std::to_string(d._meters) + "m"):"");
    return os;
}

//istream& operator>>(istream& is1, const Distance& d)
//{
    //os >> "Количество километров : " + std::to_string(d._km);
    //is1 >> d._km ;
    //return is1;
//}

bool Distance::operator==(const Distance& d) const
{
    if ((this->_km == d._km) && (this->_meters == d._meters))
        return true;
    else
       return false;
        
} 

bool Distance::operator!=(const Distance& d) const
{
    if ((this->_km != d._km) || (this->_meters != d._meters))
        return true;
    else
        return false;
}

Distance Distance::operator++()
{
    this->_meters++;
    this->NormalizeSum();
    return *this;
}

Distance Distance::operator++(int u) 
{
    Distance tmp = *this;
    this->_meters++;
    this->NormalizeSum();
    return tmp;
}

Distance Distance::operator--()
{
    this->_meters--;
    this->NormalizeSub();
    return *this;
}

Distance Distance::operator--(int u)
{
    Distance tmp = *this;
    this->_meters--;
    this->NormalizeSub();
    return tmp;
}

int main()
{
    Distance d1;
    Distance d2(2, 300);
    cout << d1 << endl;
    cout << d2 << endl;
    cout << d2 + 900 << endl;

    cout << endl ;

    Distance d3(2, 798);
    Distance d4(2, 798);
    cout << (d3 == d4) << endl;

    cout << endl ;

    Distance d5(7, 694);
    cout << ++d5 << endl;
    cout << d5++ << endl;
    cout << d5 << endl;

    cout << endl ;

    Distance d6(2, 300);
    Distance d7(1, 700);
    cout << d6 << endl;
    cout << d7 << endl;
    cout << d6-d7 << endl;

    cout << endl ;

    Distance d8(7, 694);
    cout << --d8 << endl;
    cout << d8-- << endl;
    cout << d8 << endl;

    cout << endl ;

    Distance d9(10, 289);
    Distance d10(10, 289);
    cout << (d9 != d10) << endl;

    return 0;
}

//Homework: перегрузить операторы (--, >>, !=)