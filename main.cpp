#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

void func1()
{

}

void func2(const vector <auto> &vec)
{
    for (auto x: vec)
    {
        cout << x << endl;
    }
}

void func3()
{

}
int main()
{
    func1();
    func2();
    func3();
    return 0;
}
