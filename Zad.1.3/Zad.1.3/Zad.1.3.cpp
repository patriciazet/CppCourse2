#include <iostream>

// Sprawdź, czy wartość zmiennej pobranej od użytkownika jest większa, mniejsza czy równa zero (wypisz  na ekranie odpowiedni komunikat)

int main()
{
    int main()
    {
        std::cout << "Podaj liczbe: " << std::endl;
        int l = 0;
        std::cin >> l;

        if (l > 0)
        {
            std::cout << "Liczba jest wieksza";
        }
        else if (l < 0)
        {
            std::cout << "Liczba jest mniejsza";
        }
        else
        {
            std::cout << "Liczba jest rowna";
        }
    }
}

