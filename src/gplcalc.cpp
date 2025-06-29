#include <iostream>
#include "functions.hpp"

using namespace std;

int main(){
	int secenek;
		cout << "Bir seçenek girin. 1. 4 Temel işlem, 2. Karmaşık işlemler, 3. Üçgen işlemleri." << endl;
	cin >> secenek;

		switch (secenek) {
			case 1: {
				int basitsecenek;
				cout << "Seçenek girin. 1. Toplama, 2. Çıkarma, 3. Çarpma, 4. Bölme" << endl;
				cin >> basitsecenek;
				switch (basitsecenek) {
			case 1: {
				plusfunction();
				return 0;
			}break;
			case 2:{
				subtraction();
				return 0;
			       }
			       break;
			case 3:{
				multiplication();
				return 0;
			       }break;
			case 4:{
				division();
				return 0;
				}break;
			default:{
					cout << "Belirli bir seçenek gir!" << endl;
				}
				}
			}break;
			case 2:{
				int karmasiksecenek;
				cout << "Bir seçenek girin: 1. Kök, 2. Üssü ifade işlemi." << endl;
				cin >> karmasiksecenek;
				switch (karmasiksecenek){
					case 1:{
				squareroot();
				return 0;
				break;
					}
					case 2:{
					       powfunction();
						   return 0;
				       }break;
				default:{
					cout << "Belirli bir seçenek gir!" << endl;
				}
			}
			break;
			 case 3:{
						      cout << "Seçenek girin. 1: Hipotenüs hesaplama, 2: Eğim hesaplama" << endl;
						      int ucgensecenek;
						      cin >> ucgensecenek;
						      switch (ucgensecenek){
							      case 1:{
									  pisagor();
									  return 0;
								     }break;
									     case 2:{
											 inclination();
											 return 0;
										}default:{
											     cout << "Belirli bir seçenek gir!" << endl;
										     }return 0;
								  }
										 default:{
											 cout << "Belirli bir seçenek gir!" << endl;
										}
			 }
		}
}
}
