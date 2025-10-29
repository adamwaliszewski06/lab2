

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

/* zad 2 
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
    }*/

/* zad 3 
    int fahr, celsius; //zmienne typu int 
    int start, limit, krok; //zmienne typu int 

    start = 0.0; //przypisz 0 do start 
    limit = 200; //przypisz 200 do limit 
    krok = 20; //przypisz 20 do krok 

    for (fahr = start; fahr <= limit; fahr = fahr + krok) {
        celsius = 5.0 * (fahr - 32) / 9.0; //oblicz stopnie C i przypisz wynik do celsius 
        cout << fahr << "\t" << celsius << endl; //wypisz zmienne na ekran
    }*/

 /* zad 5 
    int fahr, celsius; 
    int start, limit, krok; 
    start = 0.0;  
    limit = 200;  
    krok = 20; 

    for (fahr = 0.0; fahr <= limit; fahr = fahr + krok)  
    {
        float celsius = (5/9) * (fahr - 32.0); // wyniki -0,-0, 0, 0... 
        printf("%3.0f \t %6.1f \n", fahr, celsius);
    }*/

 /* zad 5 z cout 
    int fahr, celsius;
    int start, limit, krok;
    start = 0.0;
    limit = 200;
    krok = 20;

    for (fahr = 0.0; fahr <= limit; fahr = fahr + krok)
    {
        float celsius = (5 / 9) * (fahr - 32.0); // wyniki -0,-0, 0, 0... 
        cout << fahr << "\t" << celsius << endl;
    } */

    /* zad 6
    int fahr, celsius; //zmienne typu int 
    int start, limit, krok; //zmienne typu int 
    start = 0; //przypisz 0 do start 
    cout << "Enter the limit for the Fahrenheit value: ";
    cin >> limit;
	cout << "Enter the step value: ";
    cin >> krok;

    fahr = start; 
    while (fahr <= limit) { 
       float celsius = 5 * (fahr - 32) / 9; 
        cout << "F: " << fahr << "\t" << "C: " << celsius << endl; 
        fahr = fahr + krok; 
        } */

/* zad 7
    float number;
    int i; 

    for (i = 0; i < 10; i++) {
        cout << "Enter a real number: ";
        cin >> number;
        if (number > 0) {
            cout << number << " is a positive number" << endl;
        }
        else {
            cout << number << " is not a positive number" << endl;
        } 
    }*/ 

/* zad 8

int i;
for (i = 0; i <= 100; i = i + 2) {
	cout << i << endl;
}*/

/* zad 9 
int i, n;
cout << "Enter a positive integer: ";
cin >> n;
for (i = 0; i <= 100; i++) {
    if (i % n == 0) {
        cout << i << endl;
	}
}*/

/* zad 10 
int i, n;
int c = 0; //c od count
cout << "Enter a positive integer: ";
cin >> n;
for (i = 0; i <= 100; i++) {
    if (i % n == 0) {
        cout << i << endl;
        c = c + 1;
    }
}
cout << "Count of numbers divisible by " << n << " is: " << c << endl;
*/

/* zad 11
int a, b;
cout << "Enter two positive integers (a and b): ";
cin >> a;
cin >> b;

if (a < b) {
    cout << "Numbers between " << a << " and " << b << " that atre divisible by 3 are: " << endl;
    for (int i = a; i <= b; i++) {
        if (i % 3 == 0) {
            cout << i << endl;
        }
    }
} 
else if (b < a ) {
    cout << "Numbers between " << b << " and " << a << " that atre divisible by 3 are: " << endl;
    for (int i = b; i <= a; i++) {
        if (i % 3 == 0) {
            cout << i << endl;
        }
    } 
} */

/* zad 12 - srednia arytmetyczna 
int n, a;
int suma = 0;
cout << "Enter the number of elements: ";
cin >> n; 

for (int i=0; i<n; i++){
    cout << "Enter an element: " << endl;
    cin >> a;
    suma = suma + a;
}

cout << "The average of the given elements is: " << suma / n;
*/

/* zad 13 - liczby od 100 do 0
int i = 100;
while (i >= 0) {
    cout << i << " ";
    i--;
} */

/* zad 14 - znajdz najmniejsza z 3 podanych liczb calkowitych 
int a, b, c, smallest;
cout << "Enter 3 whole numbers: " << endl;
cin >> a >> b >> c;
smallest = a;
if (b < smallest)
    smallest = b;
if (c < smallest)
    smallest = c;
cout << "The smallest of the numbers is: " << smallest;
*/


/* zad 15 - losuje n liczb z przedzialu [0,m]

#include <cstdlib>
#include <ctime>

int n, m;
cout << "Enter how many numbers to draw: ";
cin >> n;
cout << "Enter the upper value of the range [0,m] from which you'll draw: ";
cin >> m;

if (n <= 0) {
    cout << "Nothing to draw." << endl;
    return 0;
}
if (m < 0) {
    cout << "Range must be non-negative." << endl;
    return 0;
}

srand(static_cast<unsigned>(time(nullptr)));

for (int i = 0; i < n; ++i) {
    int x = rand() % (m + 1); //draws in [0,m]
    cout << x << " ";
}
*/

/* zad 16 
- Napisz program, który poprosi u¿ytkownika o podanie szczêœliwego numerka (liczby ca³kowitej) 
z przedzia³u [1, 10]. Nastêpie wykonaj losowanie 10 liczb ca³kowitych z tego samego przedzia³u 
i policz ile razy podczas tego losowania pojawi³ siê szczêœliwy numerek. */





    return 0;
}


