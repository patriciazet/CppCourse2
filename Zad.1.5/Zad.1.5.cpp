 
#include <iostream>
#include <string>

//Napisz funkcję sprawdzającą czy podany ciąg znaków(podane przez użytkownika) jest palindromem. Na ekranie wyświetl odpowiedź.

bool czyJestPalindrom(std::string str)
{
    int dl = str.size(); // zwrócenie długości - to samo co length
    for (int i = 0; i < dl; i++) //przechodzimy po kolejnych literach stringa od początku do połowy
    {
        if (str[i] != str[dl - i - 1])
        {
            return false;
            //std::cout << "Zaraz będzie break" << std::endl;
            //break;
        }//metoda .at minus 1 bo ostatni indeks jest mniejszy od liczby znaków
    }

    return true;
}

int main()
{
    std::cout << czyJestPalindrom("KAJAK") << std::endl;
    std::cout << czyJestPalindrom("ALEKSANDRA") << std::endl;
}


