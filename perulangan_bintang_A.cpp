#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Masukan Jumlah Baris: ";
    cin >> n;

    for (int y = 1; y <= n; y++)
    {
        for (int z = 1; z <= y; z++)
        {
            cout << "* ";
        }
        cout << "\n";
    }
}