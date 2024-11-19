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

void func2()
{

}

void func3()
{

}
int main()
{
    func1(); // ¬веди путь к файлу в эту функцию
    func2();
    func3();
    return 0;
}
