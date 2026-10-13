// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
//zadanie1
/* {
    // kod 02_01

    for (int i = 0; i <= 10; i++) {
        cout << i << endl;
}
    cout << "Koniec programu" << endl;
}
*/

//1.1 gdy zmienie warunek na i<=10 zostanie wysietlone 11 wart.

//1.2
/* {
    for (int i = 5; i <= 7; i++) {
        cout << i << endl;
    }
    cout << "Koniec programu" << endl;
}
*/

//1.3
/*  {
    for (int i = 5; i < 7; i++) {
        cout << i << endl;
    }
    cout << "Koniec programu. /n";
}
*/

//1.3
/* {
    for (int i=0; i <= 10; i+=2) {
        cout << i << endl;
    }
    cout << "Koniec programu" << endl;
}

*/

//1.4
/*

{
    for (int i = 10; i >= 0; i--) {
        cout << i << endl;
    }
    cout << "Koniec programu" << endl;
}
*/



//zadanie2
/*

{
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
}
//program wyswietla wartosci stopni fahrenheita co 20 i odpowiadajace im wartosci w stopniach celsjusza
*/



//zadanie 3
/*
{
   int fahr, celsius; //zmienne typu int
   int start, limit, krok; //zmienne typu int
   start = 0; //przypisz 0 do start
   limit = 200; //przypisz 200 do limit
   krok = 20; //przypisz 20 do krok
   for (fahr = 0.0; fahr <= limit; fahr = fahr + krok) {
       float celsius = (5.0 / 9.0) * (fahr - 32.0);
       cout << fahr << "\t" << celsius << endl;
   }

   }
// Taki zapis sprawi³, ¿e widzimy dok³adniejsze, niezaokr¹glone wartosci stopni celsjusza
*/

//zadanie 5, bo nie ma zad4
// Gdy zmienimy zapis u³amka z 5.0/9.0 na 5/9 to w wyniku otrzymamy liczby bez miejsc po przecinku.

//zadanie 6
/*
{
    int fahr, celsius; //zmienne typu int
    int start, limit, krok; //zmienne typu int
    start = 0; //przypisz 0 do start

    cout << "Podaj wartosc funkcji limit: \n ";
    cin >> limit;

    cout << " Podaj wartosc funkcji krok: \n ";
    cin >> krok;

    for (fahr = 0.0; fahr <= limit; fahr = fahr + krok)  //kod 02_14
    {
        float celsius = (5.0 / 9.0) * (fahr - 32.0);
        cout << fahr << "\t" << celsius << endl;

    }
}
*/


//zadanie 7
/*{
	int r1, r2, r3, r4, r5, r6, r7, r8, r9, r10;
    cout << "Podaj 10 liczb rzeczywistych: \n";
	cin >> r1 >> r2 >> r3 >> r4 >> r5 >> r6 >> r7 >> r8 >> r9 >> r10;

    if (r1 > 0) {
        cout << "Wyswietlam liczby dodatnie: " << r1 << endl;


	}
}

// dokoncze pozniej 
*/

//zadanie 8 
{
    for (int = 0; i <= 100, i++)
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
