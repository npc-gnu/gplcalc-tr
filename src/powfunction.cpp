#include <iostream>
#include <cmath>
#include "functions.hpp"
using namespace std;

void powfunction(){
    float taban;
    float us;
    cout << "Taban sayıyı girin." << endl;
    cin >> taban;
    cout << "Üs sayıyı girin." << endl;
    cin >> us;
    cout << "Sonuç: " << pow(taban, us) << endl;
}
