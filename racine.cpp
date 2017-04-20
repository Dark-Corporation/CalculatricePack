#include <iostream>
#include <cmath>
#include <racine.h>


void racine()
{
    float a;

    std::cout << "Premier chiffre :" << std::endl;

    std::cin >> a;

    std::cout << "La racine carée de " << a << " est " << sqrt(a) << std::endl;
}
