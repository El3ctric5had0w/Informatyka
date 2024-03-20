#include <iostream>
using namespace std;

void zwieksz_liczbe (float *liczba){
	*liczba+= 1;
}

int main()
{
		;
	float *wsk = &numer;
	
	cout << "wartosci zmiennych" << endl;
	cout << "a: " << numer << endl;
	cout << "b: " << numer << endl;
	cout << "c: " << numer << endl;
	
	cout << "wartosci zmiennych po modyfikacji" << endl;
	
	zwieksz_liczbe(wsk);
	
	cout << "a: "<< numer << endl;
	
	zwieksz_liczbe(&numer);
	
	cout << "b: " << numer << endl;
	
	zwieksz_liczbe(&numer);
	
	cout << "c: "<< numer << endl;
	
	return 0;
}