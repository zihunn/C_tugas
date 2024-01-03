#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Masukkan jumlah baris: ";
    cin >> n;
    for (int x = 1; x <= n; x++)
    {
        for (int y = x; y < n; y++)
            cout << " ";
        for (int z = 1; z <= (2 * n - 1); z++)
        {
            if (x == n || z == 1 || z == 2 * x - 1)
            {
                cout << "*";
            }
            else
                cout << " ";
        }
        cout << "\n";
    }
}
