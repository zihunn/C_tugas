#include <iostream>
#include <unistd.h>
#include <fstream>
using namespace std;

// Menu
void menuItems()
{
    cout << "\t\t\t=================================================================================================" << endl;
    cout << "\t\t\t|\t\t\t\t\t\t\t\t\t\t\t\t|" << endl;
    cout << "\t\t\t|\t\t\t\t\t   MENUS\t\t\t\t\t\t|" << endl;
    cout << "\t\t\t|\t\t\t\t\t\t\t\t\t\t\t\t|" << endl;

    // APPETIZERS
    cout << "\t\t\t|\t=================================================================================\t|" << endl;
    cout << "\t\t\t|\t|  \t\t\t\tAPPETIZERS\t\t\t\t\t|\t|" << endl;
    cout << "\t\t\t|\t|===============================================================================|\t|" << endl;
    cout << "\t\t\t|\t|\tNo\t|\t\tName\t\t|\t\tPrice\t\t|\t|" << endl;
    cout << "\t\t\t|\t|===============|===============================|===============================|\t|" << endl;
    cout << "\t\t\t|\t|\t1\t|\t    French Fries \t|\t\t22.000\t\t|\t|" << endl;
    cout << "\t\t\t|\t|---------------|-------------------------------|-------------------------------|\t|" << endl;
    cout << "\t\t\t|\t|\t2\t|\t    Nuggets \t\t|\t\t15.000\t\t|\t|" << endl;
    cout << "\t\t\t|\t|---------------|-------------------------------|-------------------------------|\t|" << endl;
    cout << "\t\t\t|\t|\t3\t|\t    Sandwich \t\t|\t\t23.000\t\t|\t|" << endl;
    cout << "\t\t\t|\t=================================================================================\t|" << endl;
    cout << "\t\t\t|\t\t\t\t\t\t\t\t\t\t\t\t|" << endl;
    cout << "\t\t\t|\t\t\t\t\t\t\t\t\t\t\t\t|" << endl;

    // MAIN COURSE
    cout << "\t\t\t|\t=================================================================================\t|" << endl;
    cout << "\t\t\t|\t|  \t\t\t\tMAIN COURSE\t\t\t\t\t|\t|" << endl;
    cout << "\t\t\t|\t|===============================================================================|\t|" << endl;
    cout << "\t\t\t|\t|\tNo\t|\t\tName\t\t|\t\tPrice\t\t|\t|" << endl;
    cout << "\t\t\t|\t|===============|===============================|===============================|\t|" << endl;
    cout << "\t\t\t|\t|\t4\t|\t    Spicy Chicken \t|\t\t33.000\t\t|\t|" << endl;
    cout << "\t\t\t|\t|---------------|-------------------------------|-------------------------------|\t|" << endl;
    cout << "\t\t\t|\t|\t5\t|\t    Spaghetti \t\t|\t\t30.000\t\t|\t|" << endl;
    cout << "\t\t\t|\t|---------------|-------------------------------|-------------------------------|\t|" << endl;
    cout << "\t\t\t|\t|\t6\t|\t    Chicken Maryland \t|\t\t33.000\t\t|\t|" << endl;
    cout << "\t\t\t|\t=================================================================================\t|" << endl;
    cout << "\t\t\t|\t\t\t\t\t\t\t\t\t\t\t\t|" << endl;
    cout << "\t\t\t|\t\t\t\t\t\t\t\t\t\t\t\t|" << endl;

    // DESSERT
    cout << "\t\t\t|\t=================================================================================\t|" << endl;
    cout << "\t\t\t|\t|  \t\t\t\tDESSERT\t\t\t\t\t\t|\t|" << endl;
    cout << "\t\t\t|\t|===============================================================================|\t|" << endl;
    cout << "\t\t\t|\t|\tNo\t|\t\tName\t\t|\t\tPrice\t\t|\t|" << endl;
    cout << "\t\t\t|\t|===============|===============================|===============================|\t|" << endl;
    cout << "\t\t\t|\t|\t7\t|\t    pudding cake \t|\t\t18.000\t\t|\t|" << endl;
    cout << "\t\t\t|\t|---------------|-------------------------------|-------------------------------|\t|" << endl;
    cout << "\t\t\t|\t|\t8\t|\t    Waffle\t\t|\t\t16.000\t\t|\t|" << endl;
    cout << "\t\t\t|\t=================================================================================\t|" << endl;
    cout << "\t\t\t|\t\t\t\t\t\t\t\t\t\t\t\t|" << endl;
    cout << "\t\t\t|\t\t\t\t\t\t\t\t\t\t\t\t|" << endl;
    cout << "\t\t\t=================================================================================================" << endl;
}

// STRUCT NAMA MENU
static struct
{
    int no, price, stock;
    string name;
} frenchFries = {1, 22000, 10, "French Fries    "},
  Nuggets = {2, 15000, 5, "Nuggets         "},
  Sandwich = {3, 23000, 4, "Sandwich        "},
  spicyChicken = {4, 33000, 9, "Spicy Chicken   "},
  Spaghetti = {5, 30000, 5, "Spaghetti"},
  chickenMaryland = {6, 33000, 7, "Chicken Maryland"},
  puddingCake = {7, 18000, 5, "pudding cake"},
  Waffle = {8, 16000, 6, "Waffle"};

// FUNCTION INPUT TO ARRAY
void inputArray(int qty1, int condition, int i, string selectedMenu[], int priceList[], int qtyList[])
{
    switch (condition)
    {
    case 1:
        if (qty1 <= frenchFries.stock)
        {
            selectedMenu[i] = frenchFries.name;
            priceList[i] = frenchFries.price;
            qtyList[i] = qty1;
        }
        else
        {
            cout << "stok habis" << endl;
        }
        break;
    case 2:
        if (qty1 <= Nuggets.stock)
        {
            selectedMenu[i] = Nuggets.name;
            priceList[i] = Nuggets.price;
            qtyList[i] = qty1;
        }
        else
        {
            cout << "stok habis" << endl;
        }
        break;
    case 3:
        if (qty1 <= Sandwich.stock)
        {
            selectedMenu[i] = Sandwich.name;
            priceList[i] = Sandwich.price;
            qtyList[i] = qty1;
        }
        else
        {
            cout << "stok habis" << endl;
        }
        break;
    case 4:
        if (qty1 <= spicyChicken.stock)
        {
            selectedMenu[i] = spicyChicken.name;
            priceList[i] = spicyChicken.price;
            qtyList[i] = qty1;
        }
        else
        {
            cout << "stok habis" << endl;
        }
        break;
    case 5:
        if (qty1 <= Spaghetti.stock)
        {
            selectedMenu[i] = Spaghetti.name;
            priceList[i] = Spaghetti.price;
            qtyList[i] = qty1;
        }
        else
        {
            cout << "stok habis" << endl;
        }
        break;
    case 6:
        if (qty1 <= chickenMaryland.stock)
        {
            selectedMenu[i] = chickenMaryland.name;
            priceList[i] = chickenMaryland.price;
            qtyList[i] = qty1;
        }
        else
        {
            cout << "stok habis" << endl;
        }
        break;
    case 7:
        if (qty1 <= puddingCake.stock)
        {
            selectedMenu[i] = puddingCake.name;
            priceList[i] = puddingCake.price;
            qtyList[i] = qty1;
        }
        else
        {
            cout << "stok habis" << endl;
        }
        break;
    case 8:
        if (qty1 <= Waffle.stock)
        {
            selectedMenu[i] = Waffle.name;
            priceList[i] = Waffle.price;
            qtyList[i] = qty1;
        }
        else
        {
            cout << "stok habis" << endl;
        }
        break;
    default:
        break;
    }
}

// FUNCTION LIST PESANAN
int listPesanan(int count, string selectedMenu[], string name, int priceList[], int qtyList[])
{
    int subtotal[count];
    int discount;
    int total = 0;
    cout << "\t\t\t\t\tPesanan atas nama " << name << endl;
    cout << "\t------------------------------------------------------------------------------" << endl;
    cout << "\t| NO |       Nama Menu       |      Harga     |    Qty     |      Subtotal   |" << endl;
    cout << "\t------------------------------------------------------------------------------" << endl;
    for (int i = 1; i <= count; i++)
    {
        subtotal[i] = priceList[i] * qtyList[i];
        total = total + subtotal[i];
        cout << "\t| " << i << "  |   " << selectedMenu[i];
        cout << "    |      " << priceList[i] << "     |    " << qtyList[i] << "       |      " << subtotal[i] << "      |" << endl;
    }
    cout << "\t------------------------------------------------------------------------------" << endl;
    cout << "\t|\tDiskon";
    if (total > 50000)
    {
        discount = (total * 5) / 100;
        total = total - discount;
        cout << "\t\t\t\t\t\t\t\t"
             << "5%   |" << endl;
    }
    else
    {
        cout << "\t\t\t\t\t\t\t\t"
             << "0%   |" << endl;
    }
    cout << "\t|\tTOTAL";
    cout << "\t\t\t\t\t\t\t\t" << total << "|" << endl;
    cout << "\t------------------------------------------------------------------------------" << endl;
    return total;
}

void createdFile(int count, string selectedMenu[], string name, int priceList[], int qtyList[])
{
    ofstream file(name + ".txt");
    int subtotal[count];
    int discount;
    int total = 0;
    file << "\t\t\t\t\tPesanan atas nama " << name << endl;
    file << "\t------------------------------------------------------------------------------" << endl;
    file << "\t| NO |       Nama Menu       |      Harga     |    Qty     |      Subtotal   |" << endl;
    file << "\t------------------------------------------------------------------------------" << endl;
    for (int i = 1; i <= count; i++)
    {
        subtotal[i] = priceList[i] * qtyList[i];
        total = total + subtotal[i];
        file << "\t| " << i << "  |   " << selectedMenu[i];
        file << "    |      " << priceList[i] << "     |    " << qtyList[i] << "       |      " << subtotal[i] << "      |" << endl;
    }
    file << "\t------------------------------------------------------------------------------" << endl;
    file << "\t|\tDiskon";
    if (total > 50000)
    {
        discount = (total * 5) / 100;
        total = total - discount;
        file << "\t\t\t\t\t\t\t\t"
             << "5%   |" << endl;
    }
    else
    {
        file << "\t\t\t\t\t\t\t\t"
             << "0%   |" << endl;
    }
    file << "\t|\tTOTAL";
    file << "\t\t\t\t\t\t\t\t" << total << "|" << endl;
    file << "\t------------------------------------------------------------------------------" << endl;
}
int main()
{

    // VARIABLE
    int selectMenu, count, qty, total, money;
    int priceList[count], qtyList[count];
    string selectedMenu[count], name;

    // MENU
    menuItems();

    // BANYAK MENU
    cout << "Pesanan atas nama siapa? ";
    cin >> name;
    cout << "Ingin membeli berapa banyak menu? ";
    cin >> count;

    for (int i = 1; i <= count; i++)
    {

        // PILIH MENU
        cout << "Pilih menu "
             << "ke-" << i << " (1/2/3/4/5/6/7/8) : ";
        cin >> selectMenu;
        cout << "Mau beli berapa banyak? ";
        cin >> qty;

        // INPUT TO ARRAY
        inputArray(qty, selectMenu, i, selectedMenu, priceList, qtyList);
    }
    total = listPesanan(count, selectedMenu, name, priceList, qtyList);

    cout << "Masukan uang pembayaran : ";
    cin >> money;

    if (money > total)
    {
        int kembalian = money - total;
        cout << kembalian;
    }
    else if (money < total)
    {
        cout << "uang kurang";
    }
    else
    {
        cout << "pas";
        createdFile(count, selectedMenu, name, priceList, qtyList);
    }
}
