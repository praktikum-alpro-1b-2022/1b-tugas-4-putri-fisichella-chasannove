#include <iostream>
using namespace std;

int main (){
    string username, password;

    cout << "masukan username : ";
    cin >> username;

    cout << "masukan password : ";
    cin >> password;

    if (username == "novella" && password == "110803") {
                cout << "\nusername dan password sesuai" << endl;
                cout << "log in berhasil!" << endl;

    }else if (username == "novella" && password != "110803") {
        cout << "username sesuai, password tidak sesuai!" << endl;

    }else if (username != "novella" && password == "110803") {
         cout << "username tidak sesuai, password sesuai!" << endl;

     }else {
         cout << "username dan password tidak sesuai!" << endl;

     }return 0;

     }
