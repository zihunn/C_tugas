#include <iostream>
using namespace std;

int main()
{
    string hari[7] = {"senin", "selasa", "rabu", "kamis", "jumat", "sabtu", "minggu"};

    cout << "keluarkan hari senin - minggu" << endl;
    for (int i = 0; i < 7; i++)
    {
        cout << hari[i] << endl;
    }
}