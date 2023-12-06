#include <iostream>
using namespace std;
int main(){

int liczba[5];
cout << "Wprowadz 5 liczb: ";
for(int i=0; i < 5; i++){
	cin >> liczba[i];
}

for(int i=0; i < 5; i++){
	if (i > 3) 
	cout << liczba[i] << ",";
}

    return 0;
}