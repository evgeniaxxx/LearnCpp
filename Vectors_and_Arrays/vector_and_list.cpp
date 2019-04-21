#include <iostream>
#include <List>

using namespace std;

int main()
{
    list<int> myList;
    for(int i = 0; i < 50; i++)
        myList.push_back(i*i);

    //list<int>::const_iterator it;
    auto it = myList.begin();
    while( it != myList.end())
        cout << *it++ << " ";
    return 0;
}