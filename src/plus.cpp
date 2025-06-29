#include <iostream>
#include "functions.hpp"
using namespace std;

void plusfunction(){
			cout << "Toplayacağınız sayıları girin. '=' yazarak işlemi bitirin." << endl;

				float toplam = 0;
				string girdi;

				while (true) {
					cout << ">> ";
					cin >> girdi;

					if (girdi == "=") {
						break;
					}

					try {
						float sayi = stof(girdi);
						toplam += sayi;
					} catch (...) {
						cout << "Geçersiz giriş! Sayı girin veya '=' ile bitirin." << endl;
					}
				}

				cout << "Toplam: " << toplam << endl;
}
