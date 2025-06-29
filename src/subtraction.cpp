#include <iostream>
#include "functions.hpp"
using namespace std;

void subtraction(){
    cout << "1. Çıkarılan, 2. çıkan sayı girin." << endl;
    float cikarilan;
    float cikan;
    cin >> cikarilan;
    cin >> cikan;
    cout << "Sonuç: " << cikarilan - cikan << endl;
}
