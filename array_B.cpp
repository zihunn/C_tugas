#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int n;
    cout << "Berapa banyak buah yang ingin anda masukan kedalam keranjang? ";
    cin >> n;
    system("clear");
    string fruits[n];
    for (int i = 1; i <= n; i++)
    {
        cout << "Masukan buah ke-" << i << ": ";
        cin >> fruits[i];
    }
    cout << "buah anda yang ada didalam keranjang : ";
    for (int x = 1; x <= n; x++)
    {
        cout << fruits[x] << ", ";
    }
}