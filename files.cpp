#include <iostream>
#include <fstream>
#include <stdlib.h>
using namespace std;

void createFile(string text, string name)
{
    ofstream file(name + ".txt");
    file << text;
    file.close();
    system("clear");
}

int main()
{
    string text, name;
    for (int i = 0; i < 3; i++)
    {
        cout << "Masukan Nama File " << i << " : ";
        cin >> name;
        cout << "Masukan isi text " << i << " : ";
        cin >> text;
        createFile(text, name);
    }
}