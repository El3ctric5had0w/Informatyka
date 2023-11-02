#include <iostream>
using namespace std;

int main(){
	
	// liczby calkowite - short, int, long, long long, unsihned short
	// liczb zmiennoprzecinkowych - float, double
	// ciag znakow - string
	short a, b;
	cout <<"Podaj liczbe 1:";
	cin >> a;
	cout <<"Podaj liczbe 2:";
	cin >> b;
	
	// instrukcje warunkowa - if(warunek)
	if(a > b){
		cout << a << " > " << b; // cout << zmienna << "tekst" << zmienna;
	}
	// = operator przepisania
	// == operator porownania
	// <= mnmiejsze lub rowne
	// 1= nie rowne czemus
	else if(a == b){
		cout << a << " == " << b;
	}
	else{
		cout << a << " < " << b;
	}
	cout << endl;
	system("pause");
}