#include <iostream>
using namespace std;

int columns = 100, rows = 40;

string getChars(int count, char character = ' ')
{
    string spaces = "";
    for (int i = 0; i < count; i++)
    {
        spaces += character;
    }
    return spaces;
}

void print(string data)
{
    cout << data;
}

void println(string data)
{
    cout << data << endl;
}