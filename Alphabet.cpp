// Alphabet.cpp 

#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
    char a;
    char A = 64;
    for (int i = 97; i < 123; i++)
    {
        a = i;
        A = A + 1;
        Sleep(900);
        cout << a << "\t " << A << endl;
    }
}