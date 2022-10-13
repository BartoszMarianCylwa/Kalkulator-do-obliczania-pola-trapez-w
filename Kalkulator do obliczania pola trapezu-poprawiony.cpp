// Podstawy1.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>

int main()
{
   
    float a = 15;
    float b = 10;
    float h = 5;

    std::cout << "PROGRAM OBLICZAJĄCY POLE TRAPEZU\n";

    std::cout << "Proszę wprowadzić a: ";
    std::cin >> a;
    
    std::cout << "Proszę wprowadzić b: ";
    std::cin >> b;
    
    std::cout << "Proszę wprowadzić h: ";
    std::cin >> h;

    if (a > 0 and b > 0 and h > 0)
    {
        std::cout << "Pole trapezu o: \n";
        std::cout << "a = " << a << "\n";
        std::cout << "b = " << b << "\n";
        std::cout << "h = " << h << "\n";
        std::cout << "wynosi: ";        

        std::cout << (a + b) * h / 2;
   }
    else
    
    {
        std::cout << "Wszystkie długości muszą być dodatnie!\n";
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
