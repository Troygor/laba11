#include <iostream>
#include <fstream>
#include <vector>

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
    /*vector <string> vector1;
    vector1.push_back("first");
    vector1.push_back("second");
    vector1.push_back("third");*/
    func1();
    func2(); // напишите сюда название вектора
    func3(); // напишитеназвание вектора и файла который нужно создать
    return 0;
}
