# include <iostream>
# include <cmath>
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
				break;
			}
				break;
			case 2:{
				       cout << "1. Çıkarılan, 2. çıkan sayı girin." << endl;
				       float cikarilan;
				       float cikan;
				       cin >> cikarilan;
				       cin >> cikan;
				       cout << "Sonuç: " << cikarilan - cikan << endl;
			       }
			       break;
			case 3:{
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


					   cout << "Çarpım sonucu: " << carpim << endl;
			       }
			       break;
			case 4:{
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
						      }
						      break;
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
				}
			       break;
			default:{
					cout << "Belirli bir seçenek gir!" << endl;
				}
			       break;
			case 2:{
				       int karmasiksecenek;
				       cout << "Bir seçenek girin: 1. Kök, 2. Üssü ifade işlemi." << endl;
				       cin >> karmasiksecenek;
				      
				       switch (karmasiksecenek){
				       case 1:{
				       cout << "1 Sayı girin." << endl;   
			               float koksayi;
				       cin >> koksayi;
				       if (koksayi < 0){
					       cout << "0 dan küçük sayılar reel değildir!" << endl;
				       }
				       else{	       
					       cout << "Sonuç: " << sqrt(koksayi) << endl;
			       }
				       break;

			       }
				       case 2:{
					       float taban;
					       float us;
				       cout << "Taban sayıyı girin." << endl;
				       cin >> taban;
				       cout << "Üs sayıyı girin." << endl;
				       cin >> us;
					       cout << "Sonuç: " << pow(taban, us) << endl;
				       }
				       }
			       break;
			 case 3:{
						      cout << "Seçenek girin. 1: Hipotenüs hesaplama, 2: Eğim hesaplama" << endl;
						      int ucgensecenek;
						      cin >> ucgensecenek;
						      switch (ucgensecenek){
							      case 1:{
								      cout << "2 dik kenarı girin." << endl;
								      float ilkdikkenar;
								      float ikincidikkenar;
								      cin >> ilkdikkenar;
								      cin >> ikincidikkenar;
								      float hipotenus = sqrt(ilkdikkenar*ilkdikkenar + ikincidikkenar*ikincidikkenar);
								      if(ilkdikkenar * ilkdikkenar + ikincidikkenar * ikincidikkenar == hipotenus * hipotenus){
									      cout << "Sonuç: " << hipotenus << endl;
						      }
								      else {
									      cout << "Bu sayılardan dik üçgen ve hipotenüs olmuyor." << endl;
					      }
								     }
								      break;
									     case 2:{
											    cout << "İlk dik kenarı girin." << endl;
											    float eilkdikkenar;
											    cin >> eilkdikkenar;
											    cout << "İkinci dik kenarı girin." << endl;
											    float eikincidikkenar;
											    cin >> eikincidikkenar;
											    cout << "Sonuç: " << eilkdikkenar / eikincidikkenar << endl;

								     }	
								    
							      default:{
											     cout << "Belirli bir seçenek gir!" << endl;
										     }

								     	
						  		     
		
		return 0;
}
}
}
}
}
}

