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
    int x;
    for(int i=0;i<10;i++)
    {
        cout << "Podaj liczbe: ";
        cin >> x;
        if (x % 2 == 0) cout <<"Twoja liczba: "<< x<< " jest parzysta" << endl;
        cout << endl;


    }
}
*/



//zadanie 8 
/*
{

    for (int i = 0; i <= 100; i++)
    {
    if (i%2==0)
        cout << i <<endl;
        }
}

*/

//zadanie 9
/*{
    int n;
        cout << "Wprowadz dzielnik: \n";
        cin >> n;

        cout << "Te liczby z przedzialu 0 - 100 sa podzielne przez " << n << endl;

        for (int i = 0; i <= 100; i++)
        {
            if (i % n == 0)
                cout << i << endl;
        }

    }
    */


    //zadañ 10

 /*
 {
        int n;
        int licznik = 0;
        cout << "wprowadz dzielnik: ";
        cin >> n;

        for (int i = 0; i <= 100; i++)
        {
            if (i % n == 0)
            {
                licznik++;
            }
        }
        cout << "Liczb podzielnych przez " << n << " jest: " << licznik << endl;
}
*/


//zadanie 11
/*
{
    int a;
    int b;
    cout << "Prosze podac wartosc a \n";
    cin >> a;
    cout << "Dziekuje;D \nTeraz poprosze wartosc b \n";
    cin >> b;

    cout << "Te liczby z Twojego przedzialu sa podzielne przez 3: \n";

    if (a >= b)
    {
        for (int i = a; i >= b; i--)
            if (i%3==0)
            cout << i << endl;
    }

    else
    {
        for (int i = b; i >= a; i--)
            if (i % 3 == 0)
                cout << i << endl;
    }

}
*/


//zadanie 12 
/*
{
    double n;
    double suma = 0;
    cout << "Z ilu liczb policzyc srednia arytmetyczna?\n";
    cin >> n;

    cout << "Z jakich liczb chcesz policzyc srednia?\n";

    for (int i = 1; i <= n; i++)
    {
        double liczba;

        cin >> liczba;

        suma = suma + liczba;


    }
    double srednia;
    srednia = suma / n;
    cout << srednia;

}
*/

//zadanie 13 
/*
{
    for (int i = 100; i >= 0; i--)
        cout << i <<endl;

}
*/

//zadanie 14

{
    int a;
    int b;
    int c;

    cout << "Podaj 3 liczby calkowite \n";
    cin >> a >> b >> c;
    cout << "Najmniejsza liczba to ";

    int najmniejsza = a;
    if (b < najmniejsza) {
        najmniejsza = b;
    }

    if (c < najmniejsza) {
        najmniejsza = c;
    }

    cout << najmniejsza;
}





