#include <iostream>
using namespace std;

class buah
{
public:
    string warna;
    string rasa;

    buah(string x, string y)
    {
        warna = x;  
        rasa = y;
    }
};

int main()
{
    buah anggur("unggu", "manis");
    buah jerukNipis("hijau", "asem");

    cout << "anggur berwarna " << anggur.warna << endl;
    cout << "dan rasany " << anggur.rasa << endl;
    cout << "------------------------" << endl;
    cout << "jeruk nipis berwarna " << jerukNipis.warna << endl;
    cout << "dan rasanya " << jerukNipis.rasa << endl;
    return 0;
}

