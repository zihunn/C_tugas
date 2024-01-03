#include <iostream>
using namespace std;

static struct
{
    string warna, rasa;
} anggur = {"unggu", "manis"},
  jerukNipis = {"hijau", "asem"};

int main()
{
    cout << "anggur berwarna " << anggur.warna << endl;
    cout << "dan rasanya " << anggur.rasa << endl;
    cout << "-------------------------" << endl;
    cout << "jeruk nipis berwarna " << jerukNipis.warna << endl;
    cout << "dan rasanya " << jerukNipis.rasa << endl;
}