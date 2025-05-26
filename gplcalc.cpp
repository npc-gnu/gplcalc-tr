# include <iostream>
# include <cmath>
using namespace std;

int main(){

	int A;
		cout << "Bir seçenek girin. 1. 4 Temel işlem, 2. Karmaşık işlemler, 3. Üçgen işlemleri." << endl;
	cin >> A;

		switch (A) {
			case 1: {
				int B;
				cout << "Seçenek girin. 1. Toplama, 2. Çıkarma, 3. Çarpma, 4. Bölme" << endl;
				cin >> B;
				switch (B) {
			case 1: {
			cout << "Toplayacağınız sayıları girin. '=' yazarak işlemi bitirin." << endl;

				float toplam = 0;
				string input;

				while (true) {
					cout << ">> ";
					cin >> input;

					if (input == "=") {
						break;
					}

					try {
						float sayi = stof(input);
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
				       float N;
				       float U;
				       cin >> N;
				       cin >> U;
				       cout << "Sonuç: " << N - U << endl;
			       }
			       break;
			case 3:{
				       cout << "2 sayı girin." << endl;
				       float X;
				       float G;
				       cin >> X;
				       cin >> G;
				       cout << "Sonuç: " << X * G << endl;
			       }
			       break;
			case 4:{
				       cout << "Tam sayı için 1, ondalıklı sayı bölümü için 2 yazın." << endl;
				       int P;
				       cin >> P;
				       switch (P){
					       case 1:{
							      cout << "1. Bölünen, 2. Bölen sayı girin." << endl;
							      int I;
							      int Q;
							      cin >> I;
							      cin >> Q;
							      if (Q == 0){
								      cout << "Sıfıra bölünemez!" << endl;
							      }
							      else{
							      cout << "Sonuç: " << I / Q << endl;
						      }
						      }
						      break;
					       case 2:{
							      cout << "1. Bölünen, 2. Bölen sayı girin." << endl;
							      float Z;
							      float V;
							      cin >> Z;
							      cin >> V;
							      if (V == 0){
								      cout << "Sıfıra bölünemez!" << endl;
							      }
							      else{
							      cout << "Sonuç: " << Z / V << endl;
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
				       int C;
				       cout << "Bir seçenek girin: 1. Kök, 2. Üssü ifade işlemi." << endl;
				       cin >> C;
				      
				       switch (C){
				       case 1:{
				       cout << "1 Sayı girin." << endl;   
			               float Q;
				       cin >> Q;
				       if (Q < 0){
					       cout << "0 dan küçük sayılar reel değildir!" << endl;
				       }
				       else{	       
					       cout << "Sonuç: " << sqrt(Q) << endl;
			       }
				       break;

			       }
				       case 2:{
					       float X;
					       float Y;
				       cout << "Taban sayıyı girin." << endl;
				       cin >> X;
				       cout << "Üs sayıyı girin." << endl;
				       cin >> Y;
					       cout << "Sonuç: " << pow(X, Y) << endl;
				       }
				       }
			       break;
			 case 3:{
						      cout << "Seçenek girin. 1: Hipotenüs hesapla" << endl;
						      int S;
						      cin >> S;
						      switch (S){
							      case 1:{
								      cout << "2 dik kenarı girin." << endl;
								      float W;
								      float L;
								      cin >> W;
								      cin >> L;
								      float h = sqrt(L*L + W*W);
								      if(W * W + L * L == h*h){
									      cout << "Sonuç: " << h << endl;
						      }
								      else {
									      cout << "Bu sayılardan dik üçgen ve hipotenüs olmuyor." << endl;
					      }
								      break;
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

