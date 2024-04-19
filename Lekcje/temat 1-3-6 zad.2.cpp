#include <iostream>
using namespace std;

//struktura ksiegarni
struct ksiegarnia
{
    string tytul;
    string autor;
    short rok;
    string wydawnictwo;
    float cena;
};

//funkcje
void funkcja1(int *rok){  //rok wydania
	for( int *rok = 0; *rok < 7; *rok++ ) {
		if(*rok >= ksiegarnia.rok)
		cout << "Tytul: " << ksiegarnia.tytul << endl;
		cout << "Autor: " << ksiegarnia.autor << end;
		cout << "Rok: " << ksiegarnia.rok << end;
		cout << "Wydawnictwo: " << ksiegarnia.wydawnictwo << endl;
		cout << "Cena: " << ksiegarnia.cena << endl;
		
	}
}

int main(){
    //dane ksiegarni
	ksiegarnia Tytul1 =
    {
        "Tytul1",
        "autor1",
        1925,
        "Helion1",
        23.54,
    };
    
    ksiegarnia Tytul2 =
    {
        "Tytul",
        "autor2",
        1926,
        "Helion2",
        24.54,
    };
   
   ksiegarnia Tytul3 =
   {
   		"Tytul3",
   		"autor1",
   		1927,
   		"Helion3",
   		25.54,
   };
   
   
    ksiegarnia Tytul4 =
    {
    	"Tytul4",
    	"autor2",
    	1928,
    	"Helion1",
    	26.54,
	};
	
	ksiegarnia Tytul5
	{
		"Tytul5",
		"autor1",
		1921,
		"Helion2",
		27.54,
	};
	
	ksiegarnia Tytul6
	{
		"Tytul6",
		"autor2",
		1930,
		"Helion3",
		28.54,
	};
	
	ksiegarnia Tytul7
	{
		"Tytul7",
		"autor1",
		1931,
		"Helion1",
		29.54,
	};
	
	int kategoria;
	cout << "Po jakiej kategorii chcial bys wyszukac ksiazke:" << endl;
	cout << "1. Rok wydania" << endl;
	cout << "2. Cena" << endl;
	cout << "3. Wydawnictwo" << endl;
	cout << "0. Wyjescie" << endl;
	cin >> kategoria;
	
	//kategorie
	switch(kategoria){
		
		case 1:
			int liczba;
			cout << "Podaj od jakiego roku chcesz zobaczyc ksiazki: ";
			cin >> liczba;
			int rok = liczba;
			int *wsk = &rok;
			
	}
cin.get();
return(0);	

}
