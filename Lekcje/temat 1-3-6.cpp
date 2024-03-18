#include <iostream>
using namespace std;

struct DDT {
    string nazwa;
    string waga;
    string wiek;
};

int main()
{
    DDT Zwierzeta[ 5 ];
    cout << "Wprowadz dane.\n";
    cout << "Wprowadz dane zwierzat:"
		<<endl;
    for( short licz = 0; licz < 5; licz++ ) {
		cout << "Nazwa: ";
        cin >> Zwierzeta[ licz ].nazwa;
        cout << "Waga (gram): ";
        cin >> Zwierzeta[ licz ].waga;
        cout << "Wiek (tygodnie): ";
        cin >> Zwierzeta[ licz ].wiek;
    }
    cout << endl
    << "Wprowadzone zwierzeta:"
    << endl;
    for( short licz = 0; licz < 5; licz++ ) {
        cout << "Zwierze " << licz + 1
        << "\tNazwa: " << Zwierzeta[ licz ].nazwa
        << "\tWaga: " << Zwierzeta[ licz ].waga
        << "\tWiek: " << Zwierzeta[ licz ].wiek
        << endl;
    }
   
    cin.get();
    return(0);
}