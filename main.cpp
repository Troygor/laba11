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

void func2(vector <string> b)
{
    cout << b[0] << endl;
    cout << b[1] << endl;
}
void func3()
{

}
int main()
{
    setlocale(LC_ALL, "Russian");
    func1("\\Users\\Игорь\\Documents\\CBfiles\\text.txt");
    func2(func1("\\Users\\Игорь\\Documents\\CBfiles\\text.txt"));
    func3();
    return 0;
}
