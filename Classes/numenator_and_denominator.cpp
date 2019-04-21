//Класс дроби: числитель и знаменатель

#include <iostream>
#include <memory> 

using namespace std;

class Fraction
{
private:
    int _numerator;
    int _denominator;

public:    
    Fraction(int numerator = 0, int denominator = 1): _numerator(numerator), _denominator(denominator)
    {
        cout << "Constructor" << endl;
    };
    ~Fraction()
    {
        cout << "Destructor" << endl; 
    };
    friend ostream& operator<<(ostream& out, const Fraction& f)
    {
        out << f._numerator << "/" << f._denominator;
        return out;
    }

};

void foo(unique_ptr<Fraction> f)
{

}

int main()
{
    Fraction* fl = new Fraction(2, 3);
    cout << *fl << endl;
    delete fl;
    auto f2 = make_unique<Fraction>(2,3);
    cout << *f2 << endl;
    unique_ptr<Fraction>f3;

    cout << "f2 is " << ((static_cast<bool>(f2)) ? "not null": "null") << endl;
    cout << "f3 is " << ((static_cast<bool>(f3)) ? "not null": "null") << endl;

    f3 = std::move(f2);
    cout << "f2 is " << ((static_cast<bool>(f2)) ? "not null": "null") << endl;
    cout << "f3 is " << ((static_cast<bool>(f3)) ? "not null": "null") << endl;

    foo(move(f3));
    return 0;
}