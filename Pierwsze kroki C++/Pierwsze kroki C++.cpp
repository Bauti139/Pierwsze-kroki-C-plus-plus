﻿// Pierwsze kroki C++.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
using namespace std;
/*
int add(int a, int b)
{
    a = a + b;
    return a;
}
*/
int main()
{
    /*
    int a;
    int b;
    double c = 2.5;
    cout << "Please enter number for a" << endl;
    cin >> a;
    cout << "Please enter number for b" << endl;
    cin >> b;
    double i[] = { 190, 2, 3, a, b, c };
    cout << add(a, b) << endl;
    cout << i[5];
    */
    int a = 2;
    a += 2;
    int b = 3;
    cout << a / b << endl;
    cout << ++a << endl;
    cout << a++ << endl;
    cout << a << endl;
    if (a % 2) {
        cout << "This isn't a even number" << endl;
    }
    else {
        cout << "This is a even number" << endl;
    }
    cout << a << endl <<  b << endl;
    if (bool result = (a == b)) {
        cout << "This numbers are the same" << endl;
    }
    else {
        cout << "This numbers are not the same" << endl;
    }
}

// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
