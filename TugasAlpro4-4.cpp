#include <iostream>
using namespace std;

int main () {
 int kode;

    cout << "Menu Restaurant MC'Yahud" << endl;
    cout << "------------------------" << endl;
    cout << "1 : Nasi Goreng Informatika Rp. 5000" << endl;
    cout << "2 : Nasi Soto Ayam Internet Rp. 7000" << endl;
    cout << "3 : Gado - gado Disket Rp. 4500" << endl;
    cout << "4 : Bubur Ayam LAN Rp. 4000" << endl;
    cout << " " << endl;
    cout << "Masukan menu pilihan anda! ";
    cin >> kode;

    if (kode == 1)
        cout << "Pilihan No. 1 Nasi goreng informatika Rp. 5000" << endl;
    else if (kode == 2)
        cout << "Pilihan No. 2 Nasi soto ayam internet Rp. 7000" << endl;
    else if (kode == 3)
        cout << "Pilihan No. 3 Gado - gado disket Rp. 4500" << endl;
    else if (kode == 4)
        cout << "Pilihan No. 4 Bubur ayam LAN Rp. 4000" << endl;

    return 0;

}
