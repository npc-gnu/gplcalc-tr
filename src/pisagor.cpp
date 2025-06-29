#include <iostream>
#include <cmath>
#include "functions.hpp"
using namespace std;

void pisagor(){
    cout << "2 dik kenarı girin." << endl;
    float ilkdikkenar;
    float ikincidikkenar;
    cin >> ilkdikkenar;
    cin >> ikincidikkenar;
    float hipotenus = sqrt(ilkdikkenar*ilkdikkenar + ikincidikkenar*ikincidikkenar);
    if(ilkdikkenar * ilkdikkenar + ikincidikkenar * ikincidikkenar == hipotenus * hipotenus){
        cout << "Sonuç: " << hipotenus << endl;
    }else {
        cout << "Bu sayılardan dik üçgen ve hipotenüs olmuyor." << endl;
    }
}
