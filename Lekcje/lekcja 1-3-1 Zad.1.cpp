#include <iostream>
using namespace std;
int main(){

cout << "Prowadz 5 liczb";
int liczba[ 5 ];
for(int i=0; i <5; i++)
{
    cin >> liczba[ i ];
}

cout << "Liczby parzyste: ";
for(int i=0; i <5; i++)
	if(i!/2)
    cout << liczba[ i ] << ", ";


    return 0;
}