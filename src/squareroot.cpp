#include <iostream>
#include <cmath>
#include "functions.hpp"
using namespace std;

void squareroot(){
            cout << "1 Sayı girin." << endl;
            float koksayi;
            cin >> koksayi;
            if (koksayi < 0){
                cout << "0 dan küçük kök sayılar reel değildir!" << endl;
                return;
            }else{
                cout << "Sonuç: " << sqrt(koksayi) << endl;
                return;
}
        }
