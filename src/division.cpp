#include <iostream>
#include "functions.hpp"
using namespace std;

void division(){
cout << "Tam sayı için 1, ondalıklı sayı bölümü için 2 yazın." << endl;
int bolum;
cin >> bolum;
switch (bolum){
    case 1:{
        cout << "1. Bölünen, 2. Bölen sayı girin." << endl;
        int tbolunen;
        int tbolen;
        cin >> tbolunen;
        cin >> tbolen;
        if (tbolen == 0){
            cout << "Sıfıra bölünemez!" << endl;
        }
        else{
            cout << "Sonuç: " << tbolunen / tbolen << endl;
        }
    }break;
    case 2:{
        cout << "1. Bölünen, 2. Bölen sayı girin." << endl;
        float obolunen;
        float obolen;
        cin >> obolunen;
        cin >> obolen;
        if (obolen == 0){
            cout << "Sıfıra bölünemez!" << endl;
        }
        else{
            cout << "Sonuç: " << obolunen / obolen << endl;
        }
    }


}
}
