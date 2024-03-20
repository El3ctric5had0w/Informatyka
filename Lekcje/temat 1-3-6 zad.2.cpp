#include <iostream>
using namespace std;

//struktura ksiegarni
struct Ksiegarnia
{
    string tytul;
    string autor;
    string rok;
    string wydawnictwo;
    string cena;
};

//funkcje
void rok_wydania (int *rok_wyd){
	
}
void cena_ksiazki (float *cena_ksi){
	
}
void wydawnictwo_ksiazki (string *wydawnictwo_ksi){
	
}
void wyjscie_0 (int *wyjs){
	
}

int main()
{
    //dane ksiegarni
	Ksiegarnia Tytul1 =
    {
        "Tytul1",
        "autor1",
        "1925",
        "Helion1",
        "23.54",
    };
    
    Ksiegarnia Tytul2 =
    {
        "Tytul",
        "autor2",
        "1926",
        "Helion2",
        "24.54",
    };
   
   Ksiegarnia Tytul3 =
   {
   		"Tytul3",
   		"autor1",
   		"1927",
   		"Helion3",
   		"25.54",
   };
   
   
    Ksiegarnia Tytul4 =
    {
    	"Tytul4",
    	"autor2",
    	"1928",
    	"Helion1",
    	"26.54",
	};
	
	Ksiegarnia Tytul5
	{
		"Tytul5",
		"autor1",
		"1921"
		"Helion2",
		"27.54",
	};
	
	Ksiegarnia Tytul6
	{
		"Tytul6",
		"autor2",
		"1930",
		"Helion3",
		"28.54",
	};
	
	Ksiegarnia Tytul7
	{
		"Tytul7",
		"autor1",
		"1931",
		"Helion1",
		"29.54",
	};
	
	int kategoria;
	
	cout <<"Witaj w ksiegarni" << endl;
	cout << "Po jakiej kategorii chcial bys wyszukac ksiazke:" << endl;
	cout << "1. Rok wydania" << endl;
	cout << "2. Cena" << endl;
	cout << "3. Wydawnictwo" << endl;
	cout << "0. Wyjescie" << endl;
	cin >> kategoria;
	
	switch( kategoria ){
	
	case 0:{
		cout <<"Witaj w ksiegarni" << endl;
		cout << "Po jakiej kategorii chcial bys wyszukac ksiazke:" << endl;
		cout << "1. Rok wydania" << endl;
		cout << "2. Cena" << endl;
		cout << "3. Wydawnictwo" << endl;
		cout << "0. Wyjescie" << endl;
		cin >> kategoria;
	break;	
	}
	
	case 1:
		int rok;
		cout << "Podaj od jakiego roku chcesz zobaczyc ksiazki: ";
		cin >> rok;
	}
	
}