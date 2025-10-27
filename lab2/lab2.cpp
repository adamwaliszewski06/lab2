// lab2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    /* zad 1.1
    
    for (int i = 5; i <= 7; i++) {
        cout << i << endl;
    } */

    /* zad 1.2
    for (int i = 5; i < 7; i++) {
        cout << i << endl;
    } */

	/* zad 1.3
    for (int i = 0; i <= 10; i=i+2) {
        cout << i << endl;
    } */

	/* zad 1.4 
    for (int i = 0; i <= 10; i++) {
        cout << 10 - i << endl;
    }*/

    /* zad 2 */
    int fahr, celsius; //zmienne typu int 
    int start, limit, krok; //zmienne typu int 

    start = 0; //przypisz 0 do start 
    limit = 200; //przypisz 200 do limit 
    krok = 20; //przypisz 20 do krok 

    fahr = start; //przypisz wartosc start do zmiennej fahr, czyli fahr = 0 
    while (fahr <= limit) { //wykonuj petle dopoki wartosc fahr jest <= od zmiennej limit 
        celsius = 5 * (fahr - 32) / 9; //oblicz stopnie C i przypisz wynik do celsius 
        cout << fahr << "\t" << celsius << endl; //wypisz zmienne na ekran
        fahr = fahr + krok; //zwieksz wartosc zmiennej fahr o wartosc zmiennej krok
    }


    return 0;
}


