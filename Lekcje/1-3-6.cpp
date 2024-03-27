#include <iostream>
using namespace std;

//struktura ksiegarnii
struct Ksiegarnia
{
	//opis struktury
	string tytul;
	string autor;
	string rok;
	string wydawnictwo;
	string cena;
};

//funkcje
void funkcja1(short *frok){

}


int main(){
	
//dane ksiegarni
static Ksiegarnia Tytul1 =
	{
		"Tytul1",
		"autor1",
		"1925",
		"Helion1",
		"23,54",
	};
	
	Ksiegarnia Tytul2 =
	{
		"Tytul2",
		"autor2",
		"1926",
		"Helion2",
		"24,54",
	};
	
	Ksiegarnia Tytul3 =
	{
		"Tytul3",
		"autor1",
		"1927",
		"Helion3",
		"25,54",
	};
	
	Ksiegarnia Tytul4 =
	{
		"Tytul4",
		"autor2",
		"1928",
		"Helion1",
		"26,54",
	};
	
	Ksiegarnia Tytul5 =
	{
		"Tytul5",
		"autor1",
		"1921",
		"Helion1",
		"27,54",
	};
	
	Ksiegarnia Tytul6 =
	{
		"Tytul6",
		"autor2",
		"1930",
		"Helion3",
		"28,54",
	};
	
	Ksiegarnia Tytul7 =
	{
		"Tytul7",
		"autor1",
		"1931",
		"Helion1",
		"29,54",
	};
	
	//program
	int wybor;
	cout << "Witaj w ksiegarni" << endl;
	cout << "Po jakiej kategorii chcial bys wyszukac ksiazke:" << endl;
	cout << "1. Rok wydania" << endl;
	cout << "2. Cena" << endl;
	cout << "3. Wydawnictwo" << endl;
	cout << "0. Wyjscie" << endl;
	cin >> wybor;
	
	//kategorie
	switch(wybor){
		case 1:
			int podaj_rok;
			cout << "Podaj od jakiego roku chcesz zobaczyc ksiazki: ";
			cin >> podaj_rok;
			//przekazanie do funcji
			short frok = podaj_rok;
			short *wsk = &frok;
			funkcja1(wsk);
			//wynik dzialania funcji
			cout << "Znalezione ksiazki: " << endl;
			cout << 
			break;
	}
}
