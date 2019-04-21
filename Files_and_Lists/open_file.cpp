//Создание файла в С++

#include <fstream>

using namespace std;

int main()
{
    ofstream outfile;
    outfile.open("test.out");
    outfile << "Hello!" <<  endl;
    outfile.close();
    return 0;
}