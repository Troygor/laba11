#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

vector <string> func1(string a)
{
    fstream myFile;
    vector <string> myVector;
    string str;
    myFile.open(a);
    if(myFile.is_open())
    {
        while(!myFile.eof())
        {
            getline(myFile, str);
            myVector.push_back(str);
        }
    }
    return myVector;
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
