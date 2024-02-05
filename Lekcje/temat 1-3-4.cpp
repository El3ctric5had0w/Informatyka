#include <iostream>
using namespace std;

short Suma(short a,short b){
	return a+b;
}
float Suma(float c,float d){
	return c+d;
}

int main(){
	
	short a,b;
	float c,d;
	
	cout<<"Podaj dwie liczby calkowite: "; cin>>a; cin>>b;
	cout<<"Podaj dwie liczby zmiennoprzecinkowych: "; cin>>c; cin>>d;
	
	cout<<"Suma liczb calkowitych: "<<Suma(a,b)<<endl;
	cout<<"Suma liczb zmiennoprzecinkowych: "<<Suma(c,d)<<endl;

	
	return 0;
}