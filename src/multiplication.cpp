#include <iostream>
using namespace std;

void multiplication(){
    cout << "Çarpacağınız sayıları girin. '=' ile işlemi bitirin." << endl;
    float carpim = 1;
    string girdi;

    while (true) {
        cout << ">> ";
        cin >> girdi;

        if (girdi == "=") {
            break;
        }

        try {
            float sayi = stof(girdi);
            carpim *= sayi;
        } catch (...) {
            cout << "Geçersiz giriş! Sayı girin veya '=' ile bitirin." << endl;
        }
    }
    cout << "Çarpım sonucu = " << carpim << endl;
    return;
    }
