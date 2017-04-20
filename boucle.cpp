#include <iostream>
#include <cmath>
#include <string>
#include <boucle.h>

void boucle()
{
    int i(0);

    while (i == 0){
        std::cout << "Veux-tu continuer ? 0 = Oui, 1 = Non" << std::endl;

        std::cin >> i;
    }
}
