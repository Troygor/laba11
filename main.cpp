#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

void func1(string a)
{

    fstream myFile;
    myFile.open(a);
    if(myFile.is_open())
    {
        cout << "File is open" << endl;
    }
}

void func2()
{

}

void func3()
{

}
int main()
{
    setlocale(LC_ALL, "Russian");
    func1("\\Users\\Игорь\\Documents\\CBfiles\\text.txt");
    func2();
    func3();
    return 0;
}
