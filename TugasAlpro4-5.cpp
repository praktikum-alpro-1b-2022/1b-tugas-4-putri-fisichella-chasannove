#include <iostream>
using namespace std;

int main (){
    int total;
    int kodesusu, jumlah;
    char ukuran;

   cout << "================== Daftar Harga Produk Susu ==================" << endl;
    cout << endl;
    cout << "1. DANCOW" << endl;
    cout << "B/Besar    Rp. 10.000" << endl;
    cout << "S/Sedang   Rp. 4.250" << endl;
    cout << "K/Kecil    Rp. 2.100" << endl;
    cout << endl;
    cout << "2. INDOMILK" << endl;
    cout << "B/Besar    Rp. 8.500" << endl;
    cout << "S/Sedang   Rp. 4.000" << endl;
    cout << "K/Kecil    Rp. 2.025" << endl;
    cout << endl;
    cout << "3. SUSTACAL" << endl;
    cout << "B/Besar    Rp. 17.000" << endl;
    cout << "S/Sedang   Rp. 14.500" << endl;
    cout << "K/Kecil    Rp. 8.300" << endl;

    cout << endl;

    cout << "Masukkan kode susu : ";
    cin >> kodesusu;

    if (kodesusu==1){
        cout << "   Dancow" << endl;
        cout << "Masukkan ukuran (B/S/K): ";
        cin >> ukuran;
        if (ukuran=='b'){
            cout << "Masukkan Jumlah pembelian : ";
            cin >> jumlah;
            total = jumlah * 10000;
            cout << "Jumlah pembeliannya : " << total << endl;
        }else if (ukuran=='s'){
            cout << "Masukkan jumlah pembelian : ";
            cin >> jumlah;
            total = jumlah * 4250;
            cout << "Jumlah pembeliannya : " << total << endl;
        }else if (ukuran=='k'){
            cout << "Masukkan jumlah pembelian : ";
            cin >> jumlah;
            total = jumlah * 2100;
            cout << "Jumlah pembeliannya : " << total << endl;
        }
    }else if (kodesusu==2){
        cout << "   Indomilk" << endl;
        cout << "Masukkan ukuran (B/S/K): ";
        cin >> ukuran;
        if (ukuran=='b'){
            cout << "Masukkan Jumlah pembelian : ";
            cin >> jumlah;
            total = jumlah * 8500;
            cout << "Jumlah pembeliannya : " << total << endl;
        }else if (ukuran=='s'){
            cout << "Masukkan jumlah pembelian : ";
            cin >> jumlah;
            total = jumlah * 4000;
            cout << "Jumlah pembeliannya : " << total << endl;
        }else if (ukuran=='k'){
            cout << "Masukkan jumlah pembelian : ";
            cin >> jumlah;
            total = jumlah * 2025;
            cout << "Jumlah pembeliannya : " << total << endl;
        }
    }else if (kodesusu==3){
        cout << "   Sustacal" << endl;
        cout << "Masukkan ukuran (B/S/K): ";
        cin >> ukuran;
        if (ukuran=='b'){
            cout << "Masukkan Jumlah pembelian : ";
            cin >> jumlah;
            total = jumlah * 17000;
            cout << "Jumlah pembeliannya : " << total << endl;
        }else if (ukuran=='s'){
            cout << "Masukkan jumlah pembelian : ";
            cin >> jumlah;
            total = jumlah * 14500;
            cout << "Jumlah pembeliannya : " << total << endl;
        }else if (ukuran=='k'){
            cout << "Masukkan jumlah pembelian : ";
            cin >> jumlah;
            total = jumlah * 8300;
            cout << "Jumlah pembeliannya : " << total << endl;
        }
    }

    return 0;
}
