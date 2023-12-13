#include<iostream>
using namespace std;

int main()
{
    char tablica[100];
    cout<<"Podaj imie i nazwisko: "; 
    cin.getline(tablica,100);
    cout<<"Pozycja spacji: "<<tablica<<endl;

    return 0;
}