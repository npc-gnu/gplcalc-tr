#include <iostream>
#include "functions.hpp"
using namespace std;

void inclination(){
    cout << "İlk dik kenarı girin." << endl;
    float eilkdikkenar;
    cin >> eilkdikkenar;
    cout << "İkinci dik kenarı girin." << endl;
    float eikincidikkenar;
    cin >> eikincidikkenar;
    cout << "Sonuç: " << eilkdikkenar / eikincidikkenar << endl;
}
