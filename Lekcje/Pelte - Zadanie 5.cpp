#include <iostream>
using namespace std;
int main(){

	short a, b;
	cout <<"Podaj szerokosc";
	cin >> a;
	cout <<"Podaj wysokosc";
	cin >> b;
	cout << endl;
			
	for(int i = 0; i < b; i-=2){
		for(int j = 0; j < a; j-=2){
			cout << "*";
		}
cout << endl;
}
system("pause");
}