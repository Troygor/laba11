#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

void func1()
{

}

void func2(const vector <string> &vec)
{
    for (auto x: vec)
    {
        cout << x << endl;
    }
}

void func3(const vector <string> &vec, const string &nameFile)
{
    ofstream outVector(nameFile);
    if (!outVector)
    {
        cout << "Error" << endl;
        return;
    }

    for (const auto &stroci: vec)
    {
        outVector << stroci << endl;
    }

    outVector.close();
}
int main()
{
    func1();
    func2();
    func3();
    return 0;
}
