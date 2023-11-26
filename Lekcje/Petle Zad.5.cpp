#include <iostream>
using namespace std;
int main(){

	short a, b;
    cout << "Podaj szerokosc trojkata: ";
    cin >> a;
    cout << "Podaj wysokosc trojkata: ";
    cin >> b;
     
	 for (int i = 0; i < b; i++) {
        // Wypisz spacje przed gwiazdkami
        for (int j = 0; j < i; j++) {
            cout << " ";
        }
        
        // Wypisz gwiazdki
        for (int j = 0; j < a - 2 * i; j++) {
            cout << "*";
        }
        
        cout << endl;
    }
  return 0;
}

