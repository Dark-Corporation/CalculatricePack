#include <iostream>
#include <cmath>
#include <string>

void haut()
{
    float a;

    std::cout << "Premier chiffre :" << std::endl;

    std::cin >> a;

    std::cout << "La valeur arrondi vers le haut de " << a << " est " << ceil(a) << std::endl;

}
