#include <iostream>
using namespace std;

int Funkcja1(int a, int b);     
void Funkcja2();
void Funkcja3(float a);

int main() {

int Funkcja1(int A, int B) {
    int wynik;
    wynik = A + B;
    return wynik;
}

void Funkcja2() {
    cout << "Funkcja pusta" << endl;
}

void Funkcja3(float liczba) {
    liczba += 10;
    cout << "Wpisales liczbe: " << liczba;
}


}